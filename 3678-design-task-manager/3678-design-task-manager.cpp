class TaskManager {
public:
    map<int,pair<int,int>> m;
    priority_queue<pair<int,int>> pq;
    TaskManager(vector<vector<int>>& tasks) {
        for(auto x:tasks){
            m[x[1]]={x[0],x[2]};
            pq.push({x[2],x[1]});
        }
    }
    
    void add(int userId, int taskId, int priority) {
        m[taskId]={userId,priority};
        pq.push({priority,taskId});
    }
    
    void edit(int taskId, int newPriority) {
        m[taskId].second=newPriority;
        pq.push({newPriority,taskId});
    }
    
    void rmv(int taskId) {
        m.erase(taskId);
    }
    
    int execTop() {
        while (!pq.empty()) {
            int tid = pq.top().second;
            int pr  = pq.top().first;
            if (m.find(tid) == m.end() || m[tid].second != pr) {
                pq.pop();
            } else break;
        }

        if(pq.empty()){
            return -1;
        }
        pair<int,int> x=pq.top();
        pq.pop();
        int t=m[x.second].first;
        m.erase(x.second);
        return t;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */