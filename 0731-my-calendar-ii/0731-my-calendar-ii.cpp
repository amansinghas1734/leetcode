class MyCalendarTwo {
public:
    MyCalendarTwo() {
        
    }
    vector<pair<int,int>> events;
    vector<pair<int,int>> overlaps;
    bool book(int startTime, int endTime) {
        for(auto overlap:overlaps){
            int oStart=max(overlap.first,startTime);
            int oEnd=min(overlap.second,endTime);
            if(oStart<oEnd){
                return false;
            }
        }
        for(auto event:events){
            int oStart=max(event.first,startTime);
            int oEnd=min(event.second,endTime);
            if(oStart<=oEnd){
                overlaps.push_back({oStart,oEnd});
            }
        }
        events.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */