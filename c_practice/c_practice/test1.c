//#include <stdio.h>
//main(){
//	printf("hello world\n");
//	return 0;
//}
// printf("%lf",f) 输出double类型=long float
//c语言中以及java...没小数点的默认是int,有小数点的默认是 double
//c语言规定定义变量要在当前代码块的前面
//全局变量语句后面的所有函数都可以使用该变量
//extern 用来声明外部变量的：同项目的源文件所定义的变量在另一源文件必须用extern声明才能使用
//const int a = 0;表示整数a的值不能被修改
//int arr[10]中[]里不能是变量，只能是常量，const int a的a也不能放入[]，因为是个常变量，本质还是个变量
//#define max 10 中的max就是常量	
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE            -----枚举常量不能修改
//};
//int main(){
//	enum Color color = red;
//	color = blue;      ------可修改
//	blue = 6;         ------错误
//	return 0;
//}
//char arr1 = ('a','b','c')  -------错误 必须加一个'\0'或0 （不推荐）表示结束，否则strlen读出来的长度就是不确定的。char arr1 = "adc";里默认最后有一个\0的字符，字符串的结束标志，不算入内容
//   \t 水平制表符 =tab键
// 转义字符 \\ "c:\\tess"  \'   printf("%c\n", '\'');才能输出一个' \"也是一样
//  \DDD 例如\32代表 32这个八进制数转化为10进制数代表的ascii码值对应的字符 \xdd 例如\x61 代表61这个十六进制数表示的10进制数代表的ASCII对应字符
//main(){
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d",&a,&b);
//	
//	sum = a + b;
//	printf("sum = %d", sum);
//}
//按位与 &
//按位或 |
//按位异或 ^
//int a = 3;
//int b = 5;
//int c = a&b;
//二进制3：011
//二进制5: 101
//c就为：  001 转化为10进制就为1
//int c = a|b
//c就为:   111 转化为10进制就为7
//  = 为赋值  == 为判断
//int a = 0;
//int b = ~a;  ~按二进制位取反
//00000000000000000000000000000000
//11111111111111111111111111111111
//原码，反码，补码
//负数在内存中存储的时候，存储的是二进制的补码
//原码转反码 除了第一位的符号位全部取反
//反码转原码 二进制数+1
//11111111111111111111111111111110
//10000000000000000000000000000001
//printf("%d\n",b)使用的，打印的是这个数的原码
//
//if(a>b){
//	max = a;
//}else{
//	max = b;
//}               ---------------此表达式可写成 max = (a > b ? a: b);
//#include <string.h>
//main(){
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("c:\test\32\test.c");
//}