class FreqStack {
public:
    
    unordered_map<int,stack<int>>grpfreq;
    unordered_map<int,int>mp;
    int maxfrq;
    FreqStack() {
        grpfreq.clear();
        mp.clear();
         maxfrq=0;
    }
    void push(int val) {
        mp[val]++;
        grpfreq[mp[val]].push(val);
        maxfrq=max(maxfrq,mp[val]);
    }
    
    int pop() {
        int top= grpfreq[maxfrq].top();
        grpfreq[maxfrq].pop();
        mp[top]--;
        if(grpfreq[maxfrq].size()==0)
            maxfrq--;
            return top;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */