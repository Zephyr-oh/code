#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,1};
    vector<int> ans;
    int n=nums.size();
    for(int n1=0;n1<n;n1++){
        ans.push_back(nums[n1]);
    }
    for(int i=n-1;i>=0;i--){
        ans.push_back(nums[i]);
    }
    for(int b=0;b<ans.size();b++){
        std::cout<<ans[b]<<std::endl;
    }
    return 0;
}