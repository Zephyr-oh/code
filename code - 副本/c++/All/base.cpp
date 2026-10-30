//先调试再运行/*多行注释*/
#include<iostream>
#include<vector>
#include<string>      // ���� std::wstring�����ַ�����
#include<locale>      // ���� �ؼ�ͷ�ļ�������������� ����

 using namespace std;
 int add(int aa,int bb){
    return aa + bb;      // ����ĸɻ����
  }
 int main(){
    cout<<"hallo,world\n";//\n换行 <<endl;换行 <<"\n";换行
    cout<<"have a good day" <<endl;//多条语句 逐一进行
    cout<< 3 <<"\n";//数字输出and运算
    cout<< 3 + 3 <<"\n\n";//\n\n 输出空行
    /* 利用std::省略前面�? using namespace std;
    std::cout<<"hallo,world";*/
    
    int number = 3;//整数
    double number1 = 4.55;//小数 浮点�? 8字节 15位小�?
    char letter = 'a';//不可用”�? 存储单个字符
    string t = "hallo";//存储 字符串（文本�?
    bool bure = true;//布尔�?
    float test = 19.34;//4字节 6-7个小数点
    
    int x = 3;
    int y = 4;
    int sum = x+y;
    cout<<sum<<endl;
    
    int a=20,b=30,c=40;
    int sum1 = a+b+c;
    cout<<sum1<<endl;

    int d,e,f;
    d=e=f=30;
    cout<<d+e+f<<endl;

    const int g=20;//利用const 使int g 不可更改 只读 声明时就要赋�? 

    int studentID = 15;
    cout<<"学生id:"<< studentID <<endl;

    /*int h;
    cout<<"请输入数�?:"<<endl;
    cin >> h;
    cout<<"数字�?:"<<h<<endl;*/

    cout<<bure<<endl;//上文 bure 变量 输出 true=1 false =0
    
    char l = 65;
    cout << l <<endl;

    cout<<t<<endl;

    auto number2 = 6;//auto 自动检测类�?
    cout<<number2<<endl;
    
    /*auto x = 5; // x 现在�? int 类型
    x = 10;     // 正确 - 仍然�? int 类型
    x = 9.99;   // 错误 - 不能�? double 赋值给 int*/

    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    char currency = '$';

    // 打印变量
    cout << "商品数量: " << items << "\n";
    cout << "单价: " << cost_per_item << currency << "\n";//输出�? 9.99 + $
    cout << "总成�? = " << total_cost << currency << "\n";

    int z = 5;
    ++z;
    cout<<z<<endl;

    --z;
    cout<<z<<endl;

    //z += 3 z = z + 3 。。。。同�?  +=是复合赋值运算符
    //3 == 4  != > < 。。。。。。比较运算符 true = 1 false =0
    //&&两句都对 是true  ||其中一个对 是true   !结果取反为真 是false  true=1 false=0
    /*优先级，从最高到最低：
    () - 括号
    *, /, % - 乘法、除法、取�?
    +, - - 加法、减�?
    >, <, >=, <= - 比较
    ==, != - 相等�?
    && - 逻辑�?
    || - 逻辑�?
    = - 赋�?*/
    string letter1 = "oh";
    string letter2 = "god";
    string leteermix = letter1 +" "+ letter2;//引入�? “做空格  +字符串连�?
    cout<<leteermix<<endl;

    string firstName = "Bill ";
    string lastName = "Gates";
    string fullName = firstName.append(lastName);//引入append()增加
    cout << fullName <<endl;

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "txt字符串的长度�?:" << txt.length() <<endl;//txt.length() or txt.size() 输出字符串长�?
    
    string txt1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<txt1[0]<<endl;//[]索引字符�? 0 是第一�?
    cout<<"索引最后一位："<<txt1[txt1.length()-1]<<endl;

    txt1[2]='6';
    cout<<txt1<<endl;

    cout<<txt.at(0)<<endl;//.at()查看字符�? 可以更改 查最后一�? �?
    
    cout<<"we are \"moster\""<<endl;//转义字符 \' �? 单引�?  \" �? 双引�?  \\ �? 反斜�?   \n 换行  \t  (tab)制表�?
    cout<<"wtf\toh"<<endl;//空三�?

    /*string firstName1;
    cout<<"请输入名�?:"<<endl;
    cin>>firstName1;//cin 会将空格（空白符、制表符等）视为终止字符，这意味着它只能存储一个单词（即使您输入多个单词）
    cout<<"输出名字"<<firstName1<<endl;*/

    /*string fullName1;
    cout<<"请输入名�?:"<<endl;
    getline(cin,fullName1);// 利用getline() 读取一行文�?
    cout<<"输出名字"<<fullName1<<endl;*/
    //字符串命名空间省略，c-style字符�?

    cout<<max(4,5)<<endl;
    cout<<min(4,5)<<endl;
    cout<<endl;
    //其他函数，例�? sqrt（平方根）、round（对数字进行四舍五入）和 log（自然对数），可以在 <cmath> 头文件中找到
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun <<endl;  // 输出 1 (true)
    cout << isFishTasty <<endl;  // 输出 0 (false)

    cout<<endl;

    cout << boolalpha; // 启用打印 "true"/"false"
    cout << isCodingFun <<endl;
    cout << isFishTasty <<endl;

    cout << noboolalpha; // 重置�? 1/0

    int num1=10,num2=15;
    cout<<(num1>num2)<<endl;//错是false(0) 对是true(1)
    
    int myAge = 25;
    int votingAge = 18;
    if (myAge >= votingAge){
    cout << "年龄足够投票�?"<<endl;
    }else {
    cout << "年龄不足以投票�?";
    }
    
    int u=10,i=9;
    bool isGreater = u > i;
    cout << isGreater<<endl;//可以将结果存储在 （bool）布尔变量中
    
    /*if (20 > 18) {  
    cout << "20 大于 18";
    }*/

    int time = 20;
    if (time < 18) {
    cout << "日安";
    } else {
    cout << "晚安"<<endl;
    }

    int time1 = 20;
    bool isDay = time1 < 18;//存储数据在布尔值中
    if (isDay) {
    cout << "Good day";
    } else {
    cout << "Good evening"<<endl;
    }

    int time2 = 22;  
    if (time2 < 10) {  
    cout << "早安�?";  
    } else if (time2 < 20) {  // else if (1�? 2�?)
    cout << "日安";  
    } else {  
    cout << "晚安"<<endl;  
    }                        // else if 也可以将值存储在布尔变量�?
    
    //if else 简�?(三元运算�?) variable = (条件) ? 表达式真 : 表达式假; 
    int time3 = 20;
    string result = (time3 < 18) ? "日安" : "晚安";// 可以直接�? cout 语句中使用三元运算符
    cout << result <<endl;

    //嵌套三元运算符来处理两个以上的结果，但这可能会使代码更难阅读
    int time4 = 22;
    string message = (time4 < 12) ? "Good morning"
    : (time4 < 18) ? "Good afternoon"
    : "Good evening";
    cout << message <<endl;

    //嵌套if语句
    /*int age = 20;
    bool isCitizen = true;    
    if (age >= 18) {
    cout << "已达到投票年龄。\n";
    if (isCitizen) {
    cout << "并且您是公民，所以可以投票！\n";
    } else {
    cout << "但您必须是公民才能投票。\n";
    }
    } else {
    cout << "未达到投票年龄。\n";
    }*/

    /* &&（与�?- 所有条件都必须为真
    ||（或�?- 至少有一个条件必须为�?
    !（非�?- 反转条件（真 �? 假，�? �? 真）
    在实际程序中，逻辑运算符常用于访问控制。例如，要获得对系统的访问权限，需要满足特定要�? */

    /* switch 表达式被评估一次�?
    表达式的值与每个 case 的值进行比较�?
    如果找到匹配项，则执行相关联的代码块�?
    break �? default 关键字是可选的，将在本章后面介�? */

    int day = 4;
    switch (day) {
    case 1:
    cout << "Monday";
    break;// break跳出
    case 2:
    cout << "Tuesday";
    break;
    case 3:
    cout << "Wednesday";
    break;
    case 4:
    cout << "Thursday"<<endl;
    break;
    case 5:
    cout << "Friday";
    break;
    case 6:
    cout << "Saturday";
    break;
    case 7:
    cout << "Sunday";
    break;
    }
    
    //default 关键字指定在没有 case 匹配时要运行的某些代�?
    int day1 = 4;
    switch (day1) {
    case 6:
    cout << "今天是星期六";
    break;
    case 7:
    cout << "今天是星期日";
    break;
    default:
    cout << "期待周末"<<"\n\n";
    }

    //while使用
    int k = 0;
    while (k < 5) {
    cout << k << "\n";
    ++k;
    }

    cout<<endl;

    //do/while 循环�? while 循环的一种变体�?
    //这种循环会在检查条件是否为真之前先执行一次代码块，然后只要条件为真，就会重复循环
    //即使条件为假，循环也至少会执行一�?

    int p = 3;
    do {
    cout << p << "\n";
    ++p;
    }
    while (p < 5);

    cout<<endl;

    //        此例不断要求用户输入一个正数。当用户输入 0 或负数时，循环停�?
    /*int number66;
    do {
    cout << "请输入一个正数：";
    cin >> number66;
    } while (number66 > 0);*/

    for (int i = 0; i < 5; i++) {
    cout << i << "\n";
    }

    cout<<endl;//可以插入一个空�?

    //此例计算�? 1 �? 5 的数字之�?
    int sum11 = 0;
    for (int i = 1; i <= 5; i++) {
    sum11 = sum11 + i;
    }
    cout << "Sum11 is " << sum;

    //也可以将一个循环放在另一个循环内部。这被称为嵌套循环�?
    //对于"外层循环"的每次迭代，"内层循环"都会完整执行一�?

    // 外层循环
    for (int i = 1; i <= 2; ++i) {
    cout << "外层: " << i << "\n"; // 执行 2 �?
    // 内层循环
    for (int j = 1; j <= 3; ++j) {
    cout << " 内层: " << j << "\n"; // 执行 6 �? (2 * 3)
    }
    }

    cout<<endl;

    //还有一�?"for-each 循环"（也称为基于范围�? for 循环），用于遍历数组（或其他数据结构）中的元�?
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
    cout << num << "\n";
    }

    cout<<endl;

    //也可以使�? for-each 循环来遍历字符串中的字符
    string word = "Hello";
    for (char c : word) {
    cout << c << "\n";
    }

    cout<<endl;
    //break 语句同样可以被用于跳出循环。这个例子中，当 n 等于 4 时跳出循�?
    for (int n = 0; n < 10; n++) {
    if (n == 4) {
    break;
    }
    cout << n << "\n";
    }

    cout<<endl;
    //当指定条件发生时，continue 语句会终止当前的循环迭代，然后继续下一个循环迭代。这个例子中，跳过�? 4
    for (int i = 0; i < 10; i++) {
    if (i == 4) {
    continue;
    }
    cout << i << "\n";
    }

    //C++ 数组用于在单个变量中存储多个值，而无需为每个值声明单独的变量。要声明一个数组，需要确定变量的类型，指定数组名称，后跟方括号，并指明数组应存储的元素数�?
    string car[4]={"bmw","xiaomi","msld","bc"};
    int numberaaa[3]={6,34,99};
    cout<<car[0]<<endl;
    cout<<car[4]<<endl;//数组越界 恰好指向了相邻的string变量
    car[0]="aodi";
    cout<<car[0]<<"\n\n";

     
    //遍历数组
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int m = 0; m < 5; m++) {
    cout << cars[m] << "\n";
    }

    cout<<endl;
    // 创建整数数组
    int myNumbers1[5] = {10, 20, 30, 40, 50};
    // 遍历整数
    for (int ia : myNumbers1) {
    cout << ia << "\n";
    }

    //在声明数组时，也有可能不指定其中的元素，之后再进行添�?
    string cars1[5];  
    cars1[0] = "Volvo";  
    cars1[1] = "BMW";  
    cars1[2] = "Ford";  
    cars1[3] = "Mazda";  
    cars1[4] = "Tesla";

    //数组的大小是固定的，这意味着在创建数组后，你无法添加或删除元�?
    //对于需要添加和删除元素的操作，C++ 提供了向量（vector），这是一种可调整大小的数组�?
    //向量的大小是动态的，这意味着它可以根据需要进行扩展和缩减
    // 包含 3 个元素的向量
    vector<string> cars2 = {"Volvo", "BMW", "Ford"};  
    // 向向量中添加另一个元�?  
    cars2.push_back("Tesla");
    cout<<cars2[0]<<endl;

    cout<<endl;
    //要获取数组的大小，您可以使用 sizeof() 运算�?
    int myNumbers2[5] = {10, 20, 30, 40, 50};//4*5=20
    cout << sizeof(myNumbers2)<<endl;

    //要找出数组包含多少个元素，您必须将数组的大小除以它所包含的数据类型的大小
    int myNumbers3[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers3) / sizeof(int);
    cout << getArrayLength<<endl;

    cout<<endl;
    //在数组和循环章节中，我们在循环条件中写了数组的大小（i < 5）。这并不理想，因为它只适用于指定大小的数组�?
    //然而，通过使用上例中的 sizeof() 方法，我们现在可以创建适用于任何大小的数组的循环，这更具可持续�?
    int myNumbers4[5] = {10, 20, 30, 40, 50};
    for (int ib = 0; ib < sizeof(myNumbers4) / sizeof(int); ib++) {
    cout << myNumbers4[ib] << "\n";
    }

    //多维数组就是数组的数组�?
    //要声明一个多维数组，需要定义变量类型，指定数组名称，后面跟上方括号，方括号内指定主数组的元素数量，然后再跟上一对方括号，指示子数组的元素数�?
    string letters[2][2][2] = {
    {
    { "A", "B" },
    { "C", "D" }
    },
    {
    { "E", "F" },
    { "G", "H" }
    }
    };
    //访问
    cout<<letters[0][0][0]<<endl;
    //多维数组非常适合表示网格�?
    //以下实例展示了它们在实际应用中的用途。在这个例子中，我们使用多维数组来表示一个小型的战舰游戏

    // 结构体是一种将多个相关的变量组合在一起的方式�?
    //结构体中的每个变量都被称为结构体的成员�?
    //与数组不同，结构体可以包含许多不同的数据类型（如 int、string、bool 等）

    struct {             // 结构体声�?  
    int myNum;         // 成员（int 变量�?  
    string myString;   // 成员（string 变量�?  
    } myStructure;       // 结构体变�?

    //要访问结构体的成员，请使用点语法 (.)
    myStructure.myNum = 114514;
    myStructure.myString = "ohohoh";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    cout<<endl;
    //您可以使用逗号 (,) 在多个变量中使用一个结构体
    struct {
    int myNum;
    string myString;
    } myStruct1, myStruct2, myStruct3; // 使用逗号分隔的多个结构体变量

    //通过给结构体命名，您可以将其视为一种数据类型。这意味着您可以在程序的任何位置、任何时间使用此结构体创建变量�?
    //要创建命名结构体，将结构体的名称放在 struct 关键字之�?
    struct myDataType { // 这个结构体被命名�? "myDataType"
    int myNum;
    string myString;
    };

    //enum（枚举）是一种特殊类型，表示一组常量（不可改变的值）�?
    //要创建枚举，请使�? enum 关键字，后跟枚举的名称，并用逗号分隔枚举�?
    enum Level {
    LOW,
    MEDIUM,
    HIGH
    };

    //访问枚举，您必须创建一个它的变�?
    //�? main() 方法中，指定 enum 关键字，后跟枚举的名称（Level），然后是枚举变量的名称（本例中�? myVar�?
    enum Level myVar = MEDIUM;//默认情况下，第一项（LOW）的值为 0，第二项（MEDIUM）的值为 1，依此类�?
    cout << myVar<<endl;

    enum Level1 {
    LOW1 = 25,
    MEDIUM1 = 50,
    HIGH1 = 75
    };
    enum Level1 myVar1 = MEDIUM1;
    cout<<myVar1<<endl;
    //请注意，如果您为某一特定项赋值，后续项将相应地更新其数�?
    /*enum Level {
    LOW = 5,
    MEDIUM, // 现在�? 6
    HIGH // 现在�? 7
    };*/
    //枚举经常�? switch 语句中使用，以检查相应的�?
    enum Level2 {
    LOW2 = 1,
    MEDIUM2,
    HIGH2
    };


    enum Level2 myVar2 = MEDIUM2;
    switch (myVar2) {
    case 1:
      cout << "低级�?";
      break;
    case 2:
      cout << "中级�?"<<endl;
      break;
    case 3:
      cout << "高级�?";
      break;
    }
    //引用变量是对现有变量的“引用”，它是使用 & 运算符创建的
    string food = "Pizza"; // food 变量
    string &meal = food; // 引用 food
    cout << food << "\n";  // 输出 Pizza
    cout << meal << "\n";  // 输出 Pizza
    //如果您更改引用变量的值，原始变量也会更改（反之亦然），因为它们都指向同一个内存位�?
    meal = "Burger"; // 同时改变 meal �? food
    cout << food << "\n";
    cout << meal << "\n\n";

    string food1 = "Pizza";
    cout << &food1;
    //引用和指针（在下一章中学习）在 C++ 中非常重要，因为它们使您能够操作计算机内存中的数据，这可以减少代码并提高性能
    
    string food2 = "Pizza"; // 类型�? string �? food 变量
    string* ptr = &food2; // 名为 ptr 的指针变量，存储 food 的地址
    // 输出 food 的值（Pizza�?
    cout << food2 << "\n";
    // 输出 food 的内存地址
    cout << &food2 << "\n";
    // 使用指针输出 food 的内存地址
    cout << ptr << "\n";
    //有三种声明指针变量的方法，但首选第一种方�?
    /* string* mystring; // 首�?
    string *mystring;
    string * mystring; */
    // 解引用：使用指针输出 food 的�? (Pizza)
    cout << *ptr << "\n";
    // 更改指针的�?
    *ptr = "Hamburger";
    cout << *ptr << "\n";

    int* ptr1 = new int;
    *ptr1 = 35;
    cout << *ptr1 << endl;
    /*new int 为一个整数创建内存空�?
    ptr 存储该空间的地址
    *ptr = 35; 存储数字 35
    cout << *ptr; 打印该�?*/

    //当您�? new 创建某些东西时，您有责任在完成后将其移除�?
    //为此，请使用 delete
    delete ptr1;

    int kl = 10;        // ��ͨ����������ס�� 10
    int* ptr2 = &kl;     // ����ָ�룬�� a �����ƺţ���ַ����� ptr
    *ptr2 = 20;         // �����ã�˳�ŵ�ַ�ҵ� a���� a ��ֵ��Ϊ 20
    cout << kl<<endl;         // ��� 20��a ��ָ����ˣ�

    int re11=add(3,5);//��ͷ��������
    cout<<re11<<endl;

    //c = a + b �ǺϷ��ġ���ֵ��䡱
    //���ⲿ��������
    //���η�

    return 0;
 }