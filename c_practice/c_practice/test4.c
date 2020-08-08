#include <stdio.h>
//#include <string.h>
//main(){
//	char a[]="bit";
//	char b[]="####################";
//	strcpy(b,a);
//	printf("%s\n",b);
//	printf("%c\n",b[4]);
//}
//void swap(int* pa, int* pb){
//	int num = 0;
//	num = *pa;
//	*pa = *pb;
//	*pb = num;
//}                                    //这是一种传址调用，该调用可以直接使外函数对主函数的参数进行操作
//void swap(int x, int y){
//	int num = x;
//	x = y;
//	y = num;                            //传值调用
//}                                       //自定义函数里面的参数会另辟一个内存，如果要对主函数里的实际参数进行改变的操作，需要将主函数里的参数的地址读取给自定义函数里的形式参数
//main(){
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	printf("a = %d, b = %d\n", a, b);
//}
//二分查找 自定义函数
//int binary_search(int a, int arr1[], int b){
//	int left = 0,right = b;
//	while(left <= right){
//		int middle = (left+right)/2;
//		if(arr1[middle]<a){
//			left = middle+1;
//		}
//		else if(arr1[middle] > a){
//			right = middle - 1;
//		}
//		else{
//			return middle;
////			break;                         //---------------这个地方的break就没必要了，return就是函数的结束
//		}
//	}
//	return -1;
//
//}
//
//main(){
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	
//	int k = 7;
//	int a = 0;
//	int m = (sizeof(arr)/sizeof(arr[0]) - 1);
//	printf("%d\n",(sizeof(arr)/sizeof(arr[0])-1));
//	a = binary_search(k, arr, m);                                      //---------arr传到自定义函数里面只是数组第一个元素的地址，而在自定义函数里面sizeof（arr）里arr只是一个指针
//	printf("%d\n",a);
//	
//}
//求一万次掷骰子4次的和为8的概率
//#include <time.h>
//#include <stdlib.h>
//main(){
//	int i,j;
//	float x = 0;
//	float y = 0;
//	srand((unsigned int) time(NULL));                   //-------------设置时间为一个随机的整数种子
//	for(i=0;i<10000;i++){
//		int sum = 0;
//		for(j=0;j<4;j++){
//			int b = 0;
//			b = rand()%6+1;
//			sum+=b;
//		}
//		if(sum == 8){
//			x++;
//		}
//	}
//	y = x/10000.00;
//	printf("%f\n",y);
//}
//模拟实现strlen（）的作用
//int my_strlen(char* str){               //此处传过来的str是字符串首字符的地址，char*指针都代表地址
//	int count = 0;
//	while(*str != '\0'){                 //-------------------'\0'转义字符，符号，字母等的判断都用单引号引起来，相当于转化为ascii码在进行对比
//		count++;                         //*str是指str里面的内容，即首字符是什么
//		str++;                                     //-----------------此处str++代表str的地址（二进制）+1，即字符串顺着往下数
//	}
//	return count;
//}
//#include <string.h>
//main(){
//	char ch[]="abc";
//	int len = my_strlen(ch);
//	int len1 = strlen(ch);
//	printf("%d\n%d\n",len,len1);
//}
//实现strlen（）但是不准用临时变量
//int my_strlen(char* str){
//	if(*str != '\0'){
//		return 1+my_strlen(++str);     //--------------------(++str和str+1和1+str)都可以，但是str++不可以，因为先赋值后++
//	}else{
//		return 0;
//	}
//}
//main(){
//	char ch[] = "adc";
//	int len = my_strlen(ch);
//	printf("%d\n",len);
//}
//递归 依次输出每一位上的数字
//void output_obo(int a){
//	if(a>9){
//		output_obo(a/10);
//	}
//	printf("%d ",a%10);
//}
//main(){
//	int input_num;
//	printf("请输入一个数字：");
//	scanf("%d",&input_num);                        //----------------&输入不能忘，煞币
//	output_obo(input_num);
//}
//
//递归就是函数里的函数里的函数里的函数，无限套娃
//求第n个斐波那契数
//第一种 递归
//int fib(int a){
//	if(a<=2){
//		return 1;
//	}else{
//		return fib(a-1)+fib(a-2);
//	}
//}                                           //-------------------------该方法运算量太大，遇到大大数时程序运行慢
//第二种 循环
//int fib(int n){
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	/*int i = 1;
//	for(i=1;i<=n-2;i++){
//		c = a + b;
//		a = b;
//		b = c;
//	}*/
//	while(n>2){
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
////int fib(int n){
////	int a = 1;
////	int b = 1;
////	int c = 0;
////	while(n>2){
////
//main(){
//	int num = 0;
//	int ret = 0;
//	printf("请问你要查找第几个斐波那契数？:");
//	scanf("%d",&num);
//	ret = fib(num);
//	printf("%d\n",ret);
//}
