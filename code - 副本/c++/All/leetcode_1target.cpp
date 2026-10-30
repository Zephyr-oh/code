#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> nums={3,2,4};
    int target=6;

    int c=0,resulta=0,resultb=0,d=nums.size()-1;
    for(int a=0;a<=d;a++){
        for(int b=0;b<=d;b++){
            if (b>=a){
                c=nums[a]+nums[b];
                if(c==target && a!=b){
                    int resulta=a,resultb=b; 
                    cout<<resulta<<endl;
                    cout<<resultb<<endl;
                
                }
            }
        }
    }
    return 0;
}