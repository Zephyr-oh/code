#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,n1,a,x,xa,x1=1,x2;
    cin>>x;
    xa = x;
    for(n=0;xa>=10;++n){
        xa = xa/10;
        x1 *= 10;
    }
    n1 = n-1;

    cout<<n<<endl;

    // for(x1=1;n1!=0;--n1){
    //     x1 *= 10;
    // }
    
    cout<<x<<endl;
    cout<<x1<<endl;
    cout<<"--"<<endl;
    
    for(x2=0;x1>=1;x1/=10){
        a=x/x1;
        cout<<a<<endl;
    }

    cout<<"--"<<endl;
    cout<<x1<<endl;

    cout<<a<<endl;
    
    return 0;
}