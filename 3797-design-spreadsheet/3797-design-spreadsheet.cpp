class Spreadsheet {
public:
    vector<vector<int>> v;
    Spreadsheet(int rows) {
        v=vector<vector<int>>(rows,vector<int>(26,0));
    }
    
    void setCell(string cell, int value) {
        v[stoi(cell.substr(1))][cell[0]-'A']=value;
    }
    
    void resetCell(string cell) {
        v[stoi(cell.substr(1))][cell[0]-'A']=0;
    }
    
    int getValue(string formula) {
        string x="";
        int ans=0;
        for(int i=1;i<formula.length();i++){
            if(formula[i]=='+'){
                if(x[0]>='A'&&x[0]<='Z'){
                    ans+=v[stoi(x.substr(1))][x[0]-'A'];
                }
                else{
                    ans+=stoi(x);
                }
                x="";
            }
            else{
                x+=formula[i];
            }
        }
        if(x[0]>='A'&&x[0]<='Z'){
            ans+=v[stoi(x.substr(1))][x[0]-'A'];
        }
        else{
            ans+=stoi(x);
        }
        return ans;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */