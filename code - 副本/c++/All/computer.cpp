#include<iostream>
int main(){
    double num1,num2;
    char symbol;
    std::cout<<"输入第一个数字:"<<std::endl;
    if(!(std::cin>>num1)){
        std::cout<<"输入不符合"<<std::endl;
        return 1;
    }
    std::cout<<"输入运算方式(+-*/):"<<std::endl;
    std::cin>>symbol;
    if(symbol!='+'&&symbol!='-'&&symbol!='*'&&symbol!='/'){
        std::cout<<"输入不符合"<<std::endl;
        return 1;
    }
    std::cout<<"输入第二个数字:"<<std::endl;
    if(!(std::cin>>num2)||num2==0){
        std::cout<<"输入不符合"<<std::endl;
        return 1;
    }
    double re=(symbol=='+')?(num1+num2):
              (symbol=='-')?(num1-num2):
              (symbol=='*')?(num1*num2):
              (symbol=='/')?(num1/num2):1;
    std::cout<<re<<std::endl;
    
    return 0;
}