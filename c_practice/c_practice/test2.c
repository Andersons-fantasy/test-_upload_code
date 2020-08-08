#include <stdio.h>
//void test(){
//	static int a = 1;    //static修饰局部变量的时候 出了这个局部 变量不销毁（局部变量的生命周期变长）
//	a++;                 //static修饰全局变量时 改变了该变量的作用域 只能在定义了该变量的源文件中使用
//	printf("%d\n",a);
//}
//main(){
//	int i = 0;
//	while(i<5){
//		test();
//		i++;
//	}
//}
//extern int add(int, int);    //要使用另一个源文件中的函数，必须先声明该函数，在使用  //如果static修饰函数，改变了函数的连接属性（外部链接属性变成了内部链接属性）
//main(){
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = add(a , b);
//	printf("%d\n", c);
//}
//#define MAX(a,b) (a > b ? a: b) //宏定义
//int Max(int a , int b){         //函数定义
//	if(a > b){
//		printf("%d\n", a);
//	}else{
//		printf("%d\n", b);
//	}
//}
//main(){
//	int a = 10;
//	int b = 20;
//	int c = Max(a , b);
//	printf("%d\n", c);
//	c = MAX(a , b);              //c前面声明了类型就不用再声明了
//	printf("%d\n", c);
//}
//main(){
//	int a = 10;              //-------指针
//	int* p;                       //int* 是类型 *代表指针 int*代表指针指向int类型的变量 p是指针变量名称
//	p = &a;
//	printf("%p\n", *p);
//	*p = 20;
//	printf("%d\n", a);
//	printf("%p\n", &p);
//
//	char ch = 'm';
//	char *pc = &ch;
//	*pc = 'c';
//	printf("%c\n", ch);
//}
//#include <string.h>
//struct Book
//{
//	char name[20];      //------[]里面是长度
//	short price;
//};                   //-------------创建结构体类型时}后面必须有分号
//main(){
//	struct Book b1 = {"c语言程序设计", 55};
//	
//	struct Book* pb = &b1;
//	printf("%s\n",b1.name);
//	printf("%d\n",b1.price);            //----------c语言规定变量定义要在代码块的前面 否则会报错
//	printf("%s\n",(*pb).name);
//	printf("%d\n" ,(*pb).price);
//	b1.price = 50;
//	printf("%d\n",b1.price);  
//	//  b1.name = "c++"; -----------不可执行
//	strcpy(b1.name, "c++");           //字符串的修改不能直接赋值  需要用strcpy
//	printf("%s\n",b1.name);  
//}
//main(){
//	char* p = "hello";
//	printf("%s\n", p);
//}
// if(5 == num)  ---------一个常量和变量之间的判断把常量写在前面：1.为了区别赋值语句 2.减少错误
// 练习1 判断一个数是不是奇数
//main(){
//	int a;
//	printf("请输入一个数：\n");
//	scanf("%d", &a);
//	if(a % 2 == 0){
//		printf("%d是一个偶数\n", a);
//	}else{
//		printf("%d是一个奇数\n", a);
//	}
//}
//练习2 输入1-100之间的奇数
//main(){
//	int i;
//	for(i = 0; i<=99; i++){
//		if(i%2==1){
//			printf("%d\n", i);
//		}
//	}
//}
//switch(){                 ------------------------------- switch()括号里必须是整型表达式，
//case 1:              ------------------------------------- case 1、case 2里面数字都是整型（规定）
//	printf();
//	break;      
//case 2;
//	....
//default:
//	printf("输入错误");
//  break;
//}
// -------------------------------------------
//while(a <= 5){
//	if(a == 3){
//		break;                    --------------------break彻底终止循环，continue跳出本次循环，不执行continue后面的该循环的语句，直接执行下一次循环
//	}
//	printf("%d\n", a);
//	a++;
//}
//main(){
//	char ch;
//    while((ch = getchar())!=EOF)//----------------------EOF:end of file(输入ctrl+z就终止循环)
//	{
//		putchar(ch);
//	}
//}
//main(){
//	int ch;
//	while((ch = getchar()) != EOF){    //-----------“!=EOF”就是指不输入CTRL+Z就会一直循环
//		if(ch < '0' || ch > '9'){
//			continue;
//		}
//		putchar(ch);
//	}
//}
//练习一 计算阶乘
//main(){
//	int num;
//	int ret = 1;
//	int i;
//	printf("请输入一个数字:\n");
//	scanf("%d", &num);                   //scanf("")  ""里面不要放\n 否则就会扫描一个回车键进去
//	printf("%d\n", num);
//	for(i = 1 ; i<=num ; i++){
//		ret *= i;
//	}
//	printf("%d的阶乘是%d\n", num, ret);
//}
//练习二 计算1！+2！....+10！
//int factorial(int a){
//	int i;
//	int ret = 1;
//	for(i=1; i<=a; i++){
//		ret *= i;
//	}
//	return ret;
//}
//main(){
//	int i;
//	int factorial(int);
//	int ret = 0;
//	for(i=1; i<=10 ; i++){
//		ret += factorial(i);
//	}
//	printf("%d\n", i);
//	printf("%d\n", ret);
//}
//更简洁的方法：
//main(){
//	int i;
//	int sum = 0;
//	int ret = 1;
//	for(i=1;i<=10;i++){
//		
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//}
//练习
//main(){                                  //  --------------------该方法不够高效， 还得一个一个的遍历，对于有序的数组采用二分法
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k,i;
//	printf("请输入你要查找的数字:\n");
//	scanf("%d", &k);
//	for(i=0;i<(sizeof(arr)/sizeof(arr[o]));i++){
//		if(k == arr[i]){
//			printf("该数字在数组中的位置是第%d个\n",i+1);
//			break;
//		}
//	}
//	if(i == sizeof(arr)){
//		printf("该数字不存在\n");
//}
//}
//二分法查找
//main(){
//	int arr[]={1,2,3,4,5,6,8,9,10,11,12};
//	int a = sizeof(arr)/sizeof(arr[0]);
//	int k = 7;
//	int left = 0;
//	int right = a - 1;
//	while(1 != right - left){                      //----------------也可以是left<=right  对应下面
//		int mid = (left + right) / 2;
//		if(k > arr[mid]){
//			left = mid ;                            //-------------   对应上面 就应该是left = mid + 1；因为它最后会有left<right的情况就必须+1，否则就不会出现这种情况
//		}else if(k < arr[mid]){
//			right = mid;
//		}else if(k == arr[mid]){
//			printf("已找到，该元素下标为%d\n", mid);
//			break;
//		}
//	}
//	if(1 == right - left){
//		printf("未找到\n");
//	}
//}
//练习 从两边向中间输出一段字符串
//#include <string.h>
//main(){
//	char ch[]="hello world";
//	int a = sizeof(ch)/sizeof(ch[0]);
//	printf("%d\n", sizeof(ch));
//	printf("%d\n", a);
//	printf("%d\n", sizeof(ch[0]));                  //返回一个对象或者类型所占的内存字节数 包括结束符\0
//	printf("%d\n",strlen(ch));						//返回字符串的长度  不不包括结束符\0
//}
//让系统停留时间
//#include <Windows.h>
//Sleep(1000);                                     //停止1000毫秒
//清空屏幕
//#include <stdlib.h>
//system("cls");                                   //执行系统命令的一个函数 cls清空屏幕
//字符串的比较
//if(strcmp（str1，str2）==0)                       //如果str1和str2相同就返回0，不相同就返回一个大于0或小于0的数字
////练习三 用户登录 3次机会
//#include <string.h>
//main(){
//	char password[] = "li709984654";
//	int i,j;
//	int a = strlen(password);
//	char input[11];
//	printf("%d\n", a);                        
//	for(i=0;i<3;i++){
//		if(i == 0)
//			printf("请输入密码：");
//		else
//			printf("请重新输入密码：");
////		scanf("%s",&input);                              //-------此处报了一个错误，需要在项目 属性 c/c++ 代码生成 基本运行时检查 设为默认值
////		for(j=0;j<a;j++){                                 //--------------煞币代码，一个strcmp解决问题
////			if(input[j] != password[j]){
////				printf("密码错误,");
////				break;
////			}
////		}
////		if(j == a){
////			printf("密码正确\n");
////			break;
////		}
//		scanf("%s", &input);
//		if(strcmp(password, input) == 0){
//			printf("密码输入正确");
//			break;
//		}else{
//			printf("密码输入错误");
//		}
//	}
//	if(i == 3){
//		printf("三次输入错误\n");
//	}
//	return 0;
//}
// -------------------------------------------0表示假，非0表示真
//----------------------------------------------------如果case后面没有break;就会一直执行下去,直到有break为止;如果还没有就会执行到default语句,结束switch语句
//输出三个值的最大值
//int Max(int a, int b){            ---------------------煞币代码
//	int max;
//	if(a>b){
//		max = a;
//	}else{
//		max = b;
//	}
//	return max;
//}
//main(){
//	int a, b, c, d;
//	int x, y, z;
//	printf("请输入三个数字：");
//	scanf("%d %d %d",&a,&b,&c);          //  ----------"%d%d%d"中间什么都不隔开输入的时候就用空格隔开
//	if(a<b){
//		int num = a;
//		a = b;
//		b = num;
//	}
//	if(a<c){
//		int num = a;
//		a = c;
//		c = num;
//	}
//	if(b<c){
//		int num = b;
//		b = c;
//		c = num;
//	}
//	printf("%d%d%d",a,b,c);
//}
//练习 求两个数的最大公约数 9和6的最大公约数就是3
//main(){                    //-------------------辗转相除法
//	int m = 5;
//	int n = 15;
//	int a;
//	while(a = m%n){                  //括号里面可以同时定义 +判断 ，但是不能声明变量
//		m = n;
//		n = a;
//	}
//	printf("%d\n",n);         //------------因为是m%n，所以输出的肯定是小的n
//}
//练习 计算1/1-1/2+1/3.......-1/100的值
//main(){
//	float sum = 0;
//	int i;
//	for(i=1; i<=100; i++){
//		if(i%2 == 1){
//			sum += (1.0/i);                  //---------小数/int  ==float
//			printf("%lf\n",sum);
//		}
//		if(i%2 == 0){
//			sum += -(1.0/i);
//			printf("%f\n",sum);
//		}
//	}
//}
//  ---------------------------------------------------- 0x开头的是16进制数字
//unsigned ----------------------------------------代表无符号
