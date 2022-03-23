class Solution {
public:
    int brokenCalc(int start, int target) {
        int res=0;
        while(target>start){
            if(target%2) target++;
            else target/=2;
            res++;
        }
              return res+start-target;
    }
};