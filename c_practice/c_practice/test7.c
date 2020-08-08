// 写一个判断是不是素数的函数，打印100-200之间的素数
//#include <stdio.h>
//#include <math.h>
//int is_prime(int num,int a){
//	if(num%a == 0)
//		return 0;
//	if(a == (int)sqrt((double)num))
//		return 1;
//	return is_prime(num, a+1);
//}
//main(){
//	int i;
//	for(i=100;i<=200;i++){
//		if(1 == is_prime(i,2)){
//			printf("%d\n", i);
//		}
//	}
//}

// 判断闰年
//#include <stdio.h>
//int is_leap_year(int year){
//	if(year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
//		return 1;
//	else
//		return 0;
//}
//main(){
//	int year;
//	printf("请输入你要查询的年份:");
//	scanf("%d",&year);
//	if(1 == is_leap_year(year)){
//		printf("是闰年。");
//	}else{
//		printf("不是闰年。");
//	}
//}

//将字符串的元素逆序排放
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char* ch){
//	static int count = 0;
//	if(*ch != '\0'){
//		ch++;
//		count++;
//		my_strlen(ch);
//	}
//	return count;
//}  
//void printf_str(char* ch, int a ){
//	int i;
//	for(i = 0; i < a;i++){
//		printf("%c ",*(ch + i));
//	}
//	printf("\n");
//}
//void reverse_str(char* ch, int left,int right ){
//
//	if(left < right){
//		char tmp = *(ch+left);
//		*(ch+left) = *(ch+right);
//		*(ch+right) = tmp;
//		left++;
//		right--;
//		reverse_str(ch,left,right);
//	}
//}
////第二种方法，只有一个形参
//void reverse_str1(char* ch){
//	int a = my_strlen(ch);
//	char tmp = *ch;
//	*ch = *(ch+a-1);
//	*(ch+a-1) = '\0';                                // -----------（key point）把已经交换的两个字符的处理
//	if(my_strlen(ch + 1) >= 2)
//		reverse_str1(ch + 1);                         //  -------后面一个字符赋值‘\0’，前面一个字符不管 传后面一个字符的
//	*(ch+a-1) = tmp;
//}
//
//main(){
//	char ch[] = "abcdef";
//	int a = my_strlen(ch);
//	
//	int left = 0;
//	int right = a - 1;
//	printf("%d\n",a);
//	printf_str(ch,a);
//	reverse_str(ch,left,right);
//	printf_str(ch,a);
//	reverse_str1(ch);
//	printf_str(ch,a);
//	printf("%s\n",ch);       //字符串的打印  %s
//}

//打印一个确定数的乘法口诀表 输入9就打印9*9的
//#include <stdio.h>
//main(){
//	int num;
//	int i,j;
//	printf("请输入要打印的乘法口诀表最大数：");
//	scanf("%d",&num);
//	for(i=1;i<=num;i++){
//		for(j=1;j<=i;j++){
//			printf("%d*%d=%-3d",i,j,i*j);
//		}
//		printf("\n");
//	}
//}

//递归打印整数的每一位
//#include <stdio.h>
//void print_int(int num){
//	if(num % 10 != 0){
//		
//		print_int(num/10);
//		printf("%d ",num % 10);
//	}
//}
//main(){
//	int input;
//	printf("请输入一个整数:");
//	scanf("%d",&input);
//	print_int(input);
//}

//递归实现n的阶乘
//#include <stdio.h>
//int factorial(int num){
//	if(num == 1)
//		return 1;
//	else
//		return num * factorial(num - 1);
//}
//main(){
//	int num;
//	long long result;
//	printf("请输入你要求的阶乘数字:");
//	scanf("%d",&num);
//	result = factorial(num);
//	printf("%lld",result);
//}

//递归实现  计算一个整数的每一位相加的和
//#include <stdio.h>
//int DigitSum(int input){
//	if(input % 10 != 0)                               //此方法有bug，当数字中间有0时，就会中间断层，后面的数字检测不到,可以换成a ！= 0
//		return input % 10 + DigitSum(input / 10);
//	else
//		return 0;
// 方法二
//if(input > 9)
//	return input % 10 + DigitSum(input / 10);
//else 
//	return input;
//}
//
//
//main(){
//	int num,result;
//	scanf("%d",&num);
//	result = DigitSum(num);
//	printf("%d\n",result);
//}
// ------------------------C语言int占4个字bai节，一共32位，范围是-2147483648 ~ 2147483647。
//------------------du如果超出这zhi个范围，就dao会加上或减去4294967296，使得值还落在这个范围内。
// -------------------------比如定义int变量a的值为2147483647，再加1就是2147483648，超出范围，因此需要减掉4294967296，最后打印的值就是-2147483648

//递归实现 n的k次方
//#include <stdio.h>
//int num_power(int num, int power){
//	if(power == 1)                         //还会有
//		return num;
//	else
//		return num * num_power(num,power-1);
//}
//main(){
//	int num,power,result;
//	scanf("%d%d",&num,&power);
//	result = num_power(num,power);
//	printf("%d\n",result);
//}