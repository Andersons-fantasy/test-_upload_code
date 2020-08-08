//汉诺塔问题
//首先要用递归的思想来解决问题就应该找到解决该问题的每一层的思路和规律。
//汉诺塔问题是A柱有n个盘子从小到上大小依次增大，我们要把A柱的盘子原封不动的移到C柱上。
//规则是一次只能移动一个盘子，并且移动过程中不能出现大盘子在小盘子上面的情况。
//思路
//1.所有盘子都会从下到上依次增大，我们肯定要考虑先让A柱最下面一个移动到C柱最下面:即将A柱n-1个盘子移动到B柱,再将A柱第n个盘子移动到C柱，最后再将B柱n-1个盘子移动到C上。
//  最后发现将A柱n-1个盘子移动到B柱又成了：将A柱n-2个盘子移到C，再将A柱第n-1个盘子移到B，最后将C柱上n-2个盘子移到C（相当于总数变成n-1个，A柱不变,B、C柱互换）
//          将B柱上n-1个盘子移动到C柱又成了：将B柱n-2个盘子移动到A，再将B柱第n-1个盘子移动到C柱上，最后A柱上n-2个盘子移到A（相当于总数变n-1，A、B柱互换，C柱不变）
//2.由此可以写出函数hanoi(n,a,b,c)-------a代表A柱，b代表C柱，c代表C柱-------该函数表示我们要把n个盘子从a跳过b移动到c上
//3.在函数当中，我们可以任意交换ABC柱从而来达到最后的结果.例如hanoi（n-1，a,c,b）表示我们要把n-1个盘子从a跳过c移动b上
//#include <stdio.h>
//int i = 1;
//void hanoi(int n, char a, char b, char c){
//	if(n == 1){
//		printf("第%d次:将第%d个盘子从%c移动到%c。\n",i++,n,a,c);
//	}else{
//		hanoi(n-1,a,c,b);
//		printf("第%d次:将第%d个盘子从%c移动到%c。\n",i++,n,a,c);
//		hanoi(n-1,b,a,c);
//	}
//}
//main(){
//	int n;
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	printf("请输入汉诺塔A柱上的盘子数量:");
//	scanf("%d",&n);
//	hanoi(n,a,b,c);
//}
//测试栈溢出
//#include <stdio.h>
//void test(int a){
//	if(a<10000){
//		printf("%d\n",a);
//		test(a+1);
//	}
//}
//		
//int main(){
//	test(1);
//	return 0;
//}
//青蛙跳台阶问题
//题目：一次只能跳一个台阶或者跳两个台阶，跳n个台阶一共有多少种跳法
//分析：n=1  2  3  4  5  6  7
//  跳法：1  2  3  5  8  13 21
//找出规律，n个台阶的跳法=（n-1）个台阶跳法+（n-2）个台阶的跳法
//#include <stdio.h>
//int methods_count(int n){
//	if(n == 1)
//		return 1;
//	else if(n == 2)
//		return 2;
//	else
//		return methods_count(n-1)+methods_count(n-2);
//}
//main(){
//	int n,methods;
//	printf("请输入青蛙需要跳的台阶数:");
//	scanf("%d",&n);
//	methods = methods_count(n);
//	printf("青蛙跳%d阶台阶一共有%d种跳法。\n",n,methods);
//}
//#include <stdio.h>
//#include <string.h>
//main(){
//	const int n = 5;                 //const代表不能修改 
//	//n=6;          //报错
//	int i = 0;
//	int arr1[]={1,2,3,4,5,6,7,8,10};                  //数组[]里面应该是一个常量
//	//char arr[]={'a','b','3',100,98};         //这种定义方法最后没有自动跟一个\0结束符,内存占2字节  
//	////字符数组里面要装数字的话就需要将数字用‘’括起来，不然就会将对应数字的ascii码对应的符号存进去
//	//char arr2[]="ab";             //这种后面自动加一个\0的结束符，内存占3字节
//	//printf("%d\n",sizeof(arr));
//	//printf("%d\n",sizeof(arr2));           //
//	//printf("%d\n",strlen(arr));            //strlen的算法是读到\0的结束符时结束，所以如果arr里面没有\0的结束符，会沿着内存继续往下读，直到读到\0为止
//	//printf("%d\n",strlen(arr2));
//	//for(i=0;i<5;i++){
//	//		printf("%c",arr[i]);
//	//	
//	//}
//	//printf("end\n");
//	printf("%d\n",sizeof(arr1));                 //数组中一个数字占4个字节
//	printf("%d\n",sizeof(arr1[0]));
//}
//取数组中每个元素的地址
//#include <stdio.h>
//main(){
//	int arr[]={1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for(i=0;i<sz;i++){
//		printf("&arr[%d]:%p\n",i,&arr[i]);           //输出地址 %p----&
//	}
//}
// ------------------------------二维数组行可以省略但是列不可以省略
//冒泡排序，第一个数依次跟剩下数字比较，将大的往后排，最后最大的排到最后面
//void bobble_sort(int arr[],int sz){
//	int i,j;
//	for(j=0;j<=sz-1;j++){
//		int flag = 1;             //假设此次排序已经满足要求不需要交换
//		int b = sz - 1;
//		for(i=0;i<b;i++){                     
//			if(arr[i]<arr[i+1]){
//				int a;
//				a = arr[i];
//				arr[i] = arr[i+1];
//				arr[i+1] = a;
//				flag = 0;           //但是出现要交换的情况，就改了flag的值
//			}
//		}
//		b--;                //再前面i<b时可以写成i<sz-1-i
//		if(flag == 1){
//			break;                       //检查flag的值，如果为1代表已经是有序的数组，就跳出循环.
//		}
//	}
//}
//#include <stdio.h>
//main(){
//	int arr[]={1,2,5,3,54,6,123,5,56,2345,345};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i;
//	bobble_sort(arr,sz);             //将数组传参到自定义函数里面是首个数字的地址，所以不能再自定义函数里面使用sizeof等，只能将sz在主函数里算出再传进去
//	for(i=0;i<sz;i++){
//		printf("%d ",arr[i]);
//	}
//}
//   ---------------------- 数组名代表什么
//#include <stdio.h>;
//main(){
//	int arr[]={1,2,3,4};
//	printf("%d\n",arr);               //输出的是第一个数字的十进制地址
//	printf("%p\n",arr);               //输出的是第一个数字的十六进制地址
//	printf("%p\n",&arr[0]);           //输出的是第一个数字的十六进制地址
//	printf("%d\n",*arr);               //输出的是第一个数字的内容
//	printf("%d\n",sizeof(arr));        //此处数组名不代表第一个数字的地址，代表整个数组
//	printf("%p\n",&arr);               //输出的是第一个数字的十六进制地址,是第一个数字的地址，也是数组的地址
//	printf("%p\n",&arr+1);			   //+1代表+了整个数组的大小，是数组后面一个内容的地址
//	printf("%p\n",arr+1);				//+1代表下一个元素的地址
//}
//#include "game.h"--------------------------------------引自己的头文件是用双引号