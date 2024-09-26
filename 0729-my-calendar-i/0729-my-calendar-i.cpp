class MyCalendar {
    private: vector<pair<int,int>> calender;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto c:calender){
            int s = c.first;
            int e = c.second;
            // overlap condition
            if(start<e && end>s){
                return false;
            }
        }
        //not overlap book;
        calender.push_back({start,end});
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */