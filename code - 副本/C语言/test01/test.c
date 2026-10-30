#include <stdio.h>
int main()
{
    
    printf("hallo world\n");

    printf("%d",-2*-3);

  //printf("23+23=%d\n",23+23); // %d=输入输出为整数 

  /*int price = 0; // 作为容器保存数据
    printf("请输入金额:\n");
    scanf("%d",&price); // &=和

    int amount = 100;
    const int a = 90; // const=此变量以后无法赋值，修改

    int change = amount-price;
    printf("找你%d元\n",change); 
    
    int b=0,c=0;// 定义两个变量
    printf("请输入两个数字:");
    scanf("%d %d",&b,&c); // 输入两个变量 中间为空格 终端输入可以空格可以ENTER
    printf("%d+%d=%d\n",b,c,b+c);
    printf("b+c=%d\n",b+c);  */

  /*int d=0,e=0;
    float f=0;

    printf("输入三个字：");
    scanf("%d,%d,%f",&d,&e,&f); // scanf括号里的东西 输入完整(除%d之类用数字替代)例如：scanf（price%d,%e ）含有peice 逗号 空格
    printf("%d+%d+%f=%f\n",d,e,f,d+e+f);

    printf("%f\n",2.5/5);*/ // %d 输出整数 %f输出浮点数 %lf 输出双精度浮点(double)

    //个人探索版
    int hour1,min1;
    int hour2,min2;
    int cha,chaend;

    scanf("%d %d",&hour1,&min1);
    scanf("%d %d",&hour2,&min2);
    cha = ((hour2*60+min2)-(hour1*60+min1))/60;
    chaend = ((hour2*60+min2)-(hour1*60+min1))%60;
    printf("%dhour,%dmin",cha,chaend);// 转换的方法解决问题 都变为分钟 进行处理

    //优化版
    int hour3,min3;
    int hour4,min4;

    scanf("%d %d",&hour3,&min3);
    scanf("%d %d",&hour4,&min4);

    int t1 = hour3 * 60 + min3;
    int t2 = hour4 * 60 + min4;
    int t = t2 - t1;

    printf("%dhours,%dmins",t/60,t%60);

    return 0;
} 
