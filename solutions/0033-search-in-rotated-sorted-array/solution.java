class Solution {
    public int search(int[] arr, int target) {
        int lo=0, hi=arr.length-1;
        while(lo<=hi){ 
            int mid= lo+(hi-lo)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>=arr[0]){
                if(arr[0]<=target && arr[mid]>target){
                    hi=mid-1;
                }
                else lo=mid+1;
            }
            else{
                if(arr[arr.length-1]>=target && arr[mid]<target){
                    lo=mid+1;
                }
                else hi=mid-1;
            }
        }
        return -1;
    }
}
