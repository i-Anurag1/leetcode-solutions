class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        
        int p=0;
        int q=0;
        if(nums.size()<=3)
        return false;

        int i=0;
        int n=nums.size()-1;
        while(i!=n){
            if(nums[i] < nums[i+1]){
                i++;
                
            }
            else{
                if (nums[i] == nums[i+1]) return false;
                p=i;
                i++;
                break;
            }
        }

        while(i!=n){
            if((nums[i] <nums[i+1]) && nums[i] < nums[i-1]){
                i++;
                q=i-1;
                break;
            }
            else{
                i++;
            }
        }

        cout << i << endl;
        while(i!=n){
            if(nums[i] < nums[i+1]){
                i++;
            }
            else{
                return false;
            }
        }

            cout<<p << endl;
            cout<<q;
        

        if(p && q){
            return true;

        }
        else{
            return false;
        }
    }
};
