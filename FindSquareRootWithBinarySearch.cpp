class Solution {
public:
    long long int BinarySearch(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
            long long a=mid*mid;
            if(a==n){
                return mid;
            }if(a<n){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;

    
}
    int mySqrt(int x) {
        return BinarySearch(x);
        
    }
};