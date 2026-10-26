class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long  ans=0;
        if(cost1>total && cost2>total){
            return 1;
        }
        else if(cost1==total && cost2==total){
            return 3;
        }
        else if(cost1>total){
                    ans=(total/cost2)+1;
        }
        else if(cost2>total){
                ans=(total/cost1)+1;
        }
            else{
                if(cost1>cost2){
                 for(int i=0;i<=(total/cost1); i++){
                    ans+=((total-i*cost1)/cost2)+1;
                }
                }
                else{
                    for(int i=0;i<=(total/cost2); i++){
                    ans+=((total-i*cost2)/cost1)+1;
                }
                 }

            }
        
     return ans;}
};