#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector < int > & nums) {
  
        int sum=0;
        int maxi=INT_MIN;
        for(auto it:nums)
        {
            sum+=it;
            maxi=max(sum,maxi);
            if(sum<0)
                sum=0;

            }
        return maxi;
}

int main() {
    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};

    int lon = maxSubArray(arr);
    cout << "The longest subarray with maximum sum is " << lon << endl;
   
 return 0;

}