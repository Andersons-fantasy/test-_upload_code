//#include <stdio.h>
//struct Stu{                                  //struct Stu  是类型名字，在声明的时候应该全写 例如struct Stu s1;
//	char name[10];
//	int age;
//	long long student_ID;
//};
//typedef struct School{
//	struct Stu s;
//	char location[10];
//}schl;
//typedef char arr[10];
//
//typedef struct Stu stu;                    //将类型struct Stu换了个简单点的类型名字  typedef类型定义
//main(){
//	arr a1 = "asd";                             //------------这是声明，应该放在函数最前面
//	stu s1 = {"黎小川",24,631903070409};
//	schl sc1 = {{"黎小川",24,631903070409},"江津区"};
//	printf("%s\n",sc1.s.name);
//	printf("%s ",s1.name);
//	printf("%d ",s1.age);
//	printf("%lld ",s1.student_ID);
//	
//	printf("\n");
//	printf("%s\n",a1);
//
//}

//main(){
//	int a = 10;
//	int* p = &a;
//	int** p1 = &p;
//	printf("%d\n",*p);
//	printf("%d\n",a);
//	printf("%p\n",p);
//	printf("%p\n",&a);
//	//   *p = a     这是解引用操作符
//	//    p = &a    int* p = &a里面的int*是一种指向int类型数据的指针
//
//	printf("%p\n",&p);
//
//	printf("%p\n",p1);
//
//}

// ----------------------------函数传参时，不论是数组还是结构体，如果直接传会压栈，参数压栈的系统开销比较大，导致性能的下降
// --------------------------所以函数传参首选指针

//二维数组的传参
//#include <stdio.h>
////第一种
//void got(int (*arr)[4]){
//	printf("%d\n",*(*arr+1));    //*arr相当于将第一排
//	printf("%d\n",*(arr+1));
//	printf("%d\n",**arr);
//}
////第二种
//void got1(int arr[][4]){
//	printf("%d\n",arr[0][1]);
//}
////第三种
//void got2(int *arr, int a, int b){
//	printf("%d\n",*(arr+1));
//}
//
//
//main(){
//	int a[][4] = {{1,45,34,4},{5,7}};
//	int *p;
//	p = &a[0][0];
//	printf("%d\n",*p);
//	got(a);
//	got1(a);
//	got2(p,2,4);     //传的是第一个元素的地址
//
//}

//无法解析的...... 链接型错误，，通常去找名字

//优化版最终版实现ctrcpy的内容
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* destination, const char* source){                //满分写法 
//	char* ret = destination;										//  1.const 表示被拷贝的对象是不可修改的，防止在函数内部被修改出错误
//	assert(destination != NULL);									//  2.assert() 会对括号里面的表达式进行判断 如果满足表达式返回1，不满足返回0（程序报错）
//	assert(source != NULL);
//	while(*destination++ = *source++){
//		;
//	}
//	return ret;
//}
//int my_strlen(const char* arr){
//	int count = 0;
//	assert(arr != NULL);                                      //保证指针的有效性
//	while(*arr != '\0'){
//		count ++;
//		arr ++;
//	}
//	return count;
//}
//main(){
//	char a[]="******************";
//	char b[]="";
//	printf("%d\n",my_strlen(a));
//	printf("%s\n",my_strcpy(a,b));
//}

//写一个程序判断当前电脑是是大端字节序还是小端字节序
//main(){
//	int a = 1;
//	int b = *(char*) &a;
//	if(b == 0)
//		printf("大端");
//	else
//		printf("小端");
//}
//#include<Windows.h>
//#include <stdio.h>
//#include <string.h>
//main(){
//	//char a = -1;
//	//signed char b = -1;                  //signed对最高位进行判断，是1补1，是0补0  
//	//unsigned char c = -1;                //char类型占一个字节，unsigned高位补0
//	//char d = -128;
//	//char e = 'a';
//	//printf("%d %d %d\n",a,b,c);                  //输出的是整数占4个字节，char变整数要进行整型提升
//	//printf("%u\n",d);               //打印十进制的无符号数字
//	//printf("%d\n",e);
//	////unsigned int i;
//	////for(i=9;i>=0;i--){                        //当i=0再减减变成无符号数的最大数2^31-1,一个轮回(负数的补码就是无符号数的原码)
//	////	printf("%u\n",i);
//	////	Sleep(1000);                            //停顿100毫秒
//	////}
//	//char a[1000];
//	//int i;
//	//for(i=0;i<1000;i++){
//	//	a[i] = - 1 - i;
//	//}
//	//printf("%d\n",strlen(a));                   //char对应的ascii码值范围是-128~127，过了-128就是127再减小一直到1再到0 >> '\0'结束
//	//float a = 5.5;
//	////5.5
//	////101.1
//	////(-1)^0 * 1.011 * 2^2
//	////1符号+8指数+23尾数  (指数加127)
//	////正号 （2+127） 011
//	////0 10000001 01100000000000000000000
//	//printf("%f\n",a);
//	char arr1[] = "asdfgh";
//	char arr2[] = "asdfgh"; 
//	//const char* p = "asdfgh";      //此写法不安全，""里面应该是常量字符串，前面应该加const
//	if(arr1 == arr2){                  //指针，表示地址，而不是字符数组里面的内容
//		printf("hehe");
//	}else
//		printf("haha");
//
//}

//数组指针  -----指向数组的指针 -----存放数组的地址
//main(){
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int arr1[] = {0};
//	int (*p)[10] = &arr;    //数组的地址存起来
//	int* arr2[10];            //存放的10个int型指针
//	int* (*p1)[10] = &arr2;    //指向arr数组的指针，存放arr数组的地址
//	printf("%d\n",(*p)[1]);
//	printf("%p\n",p);    //数组地址
//	printf("%p\n",*p+1);   //下一个元素的地址  *p = arr
//	printf("%p\n",p+1);    //数组后面的地址  就跟&arr是数组地址，arr是数组首元素地址一样
//
//}
//数组指针在二维数组里的应用
//#include <stdio.h>
//void my_printf1(int arr[3][4], int a, int b){
//	int i, j;
//	for(i=0;i<a;i++){
//		for(j=0;j<b;j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void my_printf2(int (*p)[4],int a,int b){         //int (*p)[4]里面存了3个4元素的数组地址
//	int i, j;										//二维数组用指针传参应该传的是数组的指针
//	for(i=0;i<a;i++){
//		for(j=0;j<b;j++){
//			printf("%d ",*(*(p+i)+j));   //*((*p+i)+j) 错误 *p+i和*(p+i)完全不同 
//			                             //*p+i        是二维数组首元素往后第i个元素的地址
//			                             //*(p+i)       代表第一个数组的地址往后第i个数组的地址
//			printf("%d ",p[i][j]);        //int (*p)[4] = arr;   p=arr代表这个数组指针的地址  *p=arr代表第一个数组的地址 p是第一个一维数组的名字，p[i]就是后面的名字
//			printf("%d ",(*(p+i))[j]);    //p[i] = *(p+i)
//			printf("%d ",*(p[i]+j));      //p[i]就是第几行（第几个一维数组）的地址
//
//		}                                //*（p+i）是第几行数组的地址，*(p+i)+j是第几行第几个的元素地址
//		printf("\n");
//	}
//}
//main(){
//	int arr[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
//	int i, j;
//	int (*p)[4] = arr;
//	printf("%d\n",p[1][2]);                      //--------------二维数组本质上是以数组作为数bai组元素的数组du，即“数组的数组”
//	my_printf1(arr,3,4);                      //此处传过去的arr是二维数组中第一个一维数组的地址
//	for(i=0;i<3;i++){
//		for(j=0;j<4;j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	my_printf2(arr,3,4);
//}
// int *p = &arr;   p = &arr;   *p = arr; ***********************************************
 
//函数指针
//#include <stdio.h>
//int Add(int x, int y){
//	int z;
//	z = x + y;
//	return z;
//}
//main(){
//	int a = 10;
//	int b = 20;
//	int (*p)(int, int) = Add;      //p就是Add的地址，而*p就是函数Add 
//	printf("%d\n",Add(a,b));
//	printf("%d\n",(*p)(a,b));
//	printf("%d\n",p(a,b));                 //p = Add，p() = Add(); *p对函数指针进行解引用表示函数本身
//}

////
//#include <stdio.h>
//void test(char* ch){
//	printf("%c\n",*ch);    
//	printf("%s\n",ch);     //ch == arr      
//}
//main(){
//	char arr[] = "hellowold";
//	void (*p)(char*) = test;                             //void *p(char*) 表示一个函数，char*是形参，void*是返回类型
//	(*p)(arr);
//	printf("%s\n",arr);
//	test(arr);
//}

//-------------------遇到类型混合写法的时候要学会类型定义
//void (*signal1(int,void(*)(int)))(int);

//typedef void (*pFun_t)(int);
//pFun_t (*signal2(int,pFun_t));

//函数指针的数组，多个函数的指针存放在一个数组里
//#include <stdio.h>
//int Add(int a,int b){
//	return a+b;
//}
//int Sub(int a, int b){
//	return a-b;
//}
//int Mul(int a, int b){
//	return a*b;
//}
//int Div(int a, int b){
//	return a/b;
//}
//main(){
//	int (*parr[4])(int,int) = {Add, Sub, Mul, Div};     //int (* )(int,int)代表parr[4]数组的元素是函数指针
//	int i;
//	for(i = 0; i < 4; i++){
//		printf("%d\n",(*parr[i])(10,5));                   //(*parr[i])(10,5)也可以
//	}
//}

//
//char* my_strcpy(char* dest, const char* src){
//	;
//}
//main(){
//	//函数指针
//	char *(*pf)(char*, const char*) = my_strcpy;       //char *()(char*, const char*) 是函数类型 ，再加*pf表示是一个指针
//	//函数指针数组
//	char *(*pfarr[])(char*, const char*) = {my_strcpy};   ////char *()(char*, const char*) 是元素类型 ，再加*pf[]表示是一个指针数组
//}

//函数指针数组的应用
//#include <stdio.h>
//#include <Windows.h>
//int Add(int a,int b){
//	return a+b;
//}
//int Sub(int a, int b){
//	return a-b;
//}
//int Mul(int a, int b){
//	return a*b;
//}
//int Div(int a, int b){
//	return a/b;
//}
//void menu(){
//	printf("************************************************\n");
//	printf("***********     1.ADD      2.SUB      **********\n");
//	printf("***********     3.MUL      4.DIV      **********\n");
//	printf("***********                0.EXIT     **********\n");
//	printf("************************************************>>>>>>");
//}
//
//main(){
//	int input;
//	int (*parr[])(int,int) = {0,Add,Sub,Mul,Div};            //这种写法的好处就是再加其他选项的函数时直接在数组里加，不需要去switch结构里加（增加代码长度）
//	int num = sizeof(parr)/sizeof(parr[0]);
//	printf("%d\n",num);
//	do{
//		int i,j;
//		int result;
//		menu();
//		printf("请输入你的选择：");
//		scanf("%d",&input);
//		if(input > 0 && input <num){
//			printf("请输入两个操作数：\n");
//			scanf("%d%d",&i,&j);
//			result = parr[input](i,j);
//			printf("结果：%d\n",result);
//			Sleep(1000);
//			continue;
//		}else if(input == 0){
//			printf("退出\n");
//			break;
//		}else{
//			printf("选择错误，请重新选择\n");
//		}
//	}while(input);
//}

//回调函数 函数1接收函数2的指针，在函数1里面通过函数2的指针调用函数2
//#include <stdio.h>
//void print(char* arr){              //被函数指针调用的函数 ------回调函数
//	printf("hehe:%s\n",arr);
//}
//void test(void (*p)(char*)){
//	printf("test\n");
//	p("asd");
//}
//main(){
//	test(print);
//}

//回调函数在冒泡排序的应用
//#include<stdlib.h>
//#include <stdio.h>
//#include <string.h>
//int float_sort(const void*e1, const void* e2){           //e1>e2 返回大于0的值   e1<e2 返回小于0的值  e1=e2 返回0
//	if( *(float*)e1 - *(float*)e2 > 0 )
//		return 1;
//	else if( *(float*)e1 - *(float*)e2 == 0)
//		return 0;
//	else
//		return -1;
//	//return *(float*)e1 - *(float*)e2;              //返回值是int 0~1的值会变成0
//}
//void test1(){
//	float f[] = {0.2,8.0,7.0,0.1,0.3};           // 发现0.几的数无法比较大小,可以在判断函数里改一下判断
//	int sz = sizeof(f)/sizeof(f[0]);
//	int i;
//	qsort(f,sz,sizeof(f[0]),float_sort);
//	for(i = 0; i < sz; i++){
//		printf("%0.1f ",f[i]);
//	}
//}
//typedef struct stu{
//	char name[20];
//	int age;
//}student;
//
//int cmp_stu_by_age(const void* e1,const void* e2){
//	//return (*(student*)e1).age -(*(student*)e2).age;
//	return ((student*)e1)->age - ((student*)e2)->age;   //((student*)e2)得用括号括起来才表示一个整体
//
//}
//int cmp_stu_by_name(const void* e1,const void* e2){
//	return strcmp(((student*)e1)->name,((student*)e2)->name);
//}
//void swap(char* buff1, char* buff2, int width){
//	int i;
//	for(i = 0; i < width; i ++){
//		char cmp = *buff1;
//		*buff1 = *buff2;
//		*buff2 = cmp;
//		buff1++;
//		buff2++;
//	}
//}
//void my_qsort(void* base,int sz, int width, int (*cmp)(const void* e1,const void* e2)){
//	int i,j;
//	for(i = 0; i < sz - 1; i ++){
//		for(j = 0; j < sz - 1 - i; j ++){
//			if(cmp((char*)base + j*width,(char*)base + (j+1)*width) > 0)
//				swap((char*)base + j*width,(char*)base + (j+1)*width, width);
//		}
//	}
//}
//void test2(){
//	student s[3] = {{"zangsan",78},{"lisi",18},{"zhnglaowu",50}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	int i;
//	my_qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);             //每个类型的比较方法不一样，所以要将比较方法写成一个函数穿进去
//	for(i = 0; i < sz; i ++){								//每种类型的字节长度不一样，，交换的时候不能全部一样，
//															//所以要传类型的长度进去，然后划分成每个字节（char）进行交换
//		printf("%-10s %d\n",s[i].name,s[i].age);
//	}
//	my_qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);
//	for(i = 0; i < sz; i ++){
//		printf("%-10s %d\n",s[i].name,s[i].age);
//	}
//}
//main(){
//	//test1();	   //浮点数的排序
//	test2();     //结构体的排序
//}
//