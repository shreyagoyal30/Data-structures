class KthLargest {
     priority_queue<int, vector<int>, greater<int> > pq;
    int kth=1;
public:
   
    KthLargest(int k, vector<int>& nums) {
      pq = priority_queue<int, vector<int>, greater<int> > ();
        kth=k;
        for(int x:nums){
            pq.push(x);
            if(pq.size()>k) pq.pop();
        }
    }
    
    int add(int val) {
        // int top=pq.top();
        pq.push(val);
        if(pq.size()>kth) pq.pop();
        return pq.top();;
    }
};

/**

 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */