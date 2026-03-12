class Solution {
public:
    int trap(vector<int>& height) {
        int lm=0,rm=0,w=0,in=0;
       int max=height[0];
        for(int i=1;i<height.size();i++){
            if(height[i]>max){
                max=height[i];
                in=i;
            }
        }
        for(int i=0;i<in;i++){
            if(lm>height[i]){
                w+=lm-height[i];}
                else{
                    lm=height[i];
                }
            }
        
         for (int i=height.size()-1;i>in;i--)
         {
            if(rm>height[i]){
                w+=rm-height[i];}
                else {
                    rm=height[i];
                }
            }
            return w;
        }
        
    

};
