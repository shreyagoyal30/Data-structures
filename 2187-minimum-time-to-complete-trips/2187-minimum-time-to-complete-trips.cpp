class Solution {
public:
  long long  counttrips( long long mid,vector<int>& time){
    long long  cnt=0;
    for(long long i=0;i<time.size();i++){
      cnt+=(mid/time[i]);
    }
    // cout<<cnt<<endl;
    return cnt;
  }
    long long minimumTime(vector<int>& time, int totalTrips) {
      // if(time.size()==1) return 1LL* totalTrips*time[0];
        // sort(time.begin(),time.end());
        long long l=0,h=1e14;
      long long  res=h;
     while(l<h){
       long long mid=l+(h-l)/2;
       // if(counttrips(mid,time)==totalTrips) return mid;
       if(counttrips(mid,time)>=totalTrips)
       {
          // cout<<res<<endl;
         res=mid;
         h=mid;
       }
       else l=mid+1;
     }
      return res;
    }
};