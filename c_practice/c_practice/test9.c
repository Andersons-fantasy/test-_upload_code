//#include <stdio.h>
//struct Stu{                                  //struct Stu  ���������֣���������ʱ��Ӧ��ȫд ����struct Stu s1;
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
//typedef struct Stu stu;                    //������struct Stu���˸��򵥵����������  typedef���Ͷ���
//main(){
//	arr a1 = "asd";                             //------------����������Ӧ�÷��ں�����ǰ��
//	stu s1 = {"��С��",24,631903070409};
//	schl sc1 = {{"��С��",24,631903070409},"������"};
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
//	//   *p = a     ���ǽ����ò�����
//	//    p = &a    int* p = &a�����int*��һ��ָ��int�������ݵ�ָ��
//
//	printf("%p\n",&p);
//
//	printf("%p\n",p1);
//
//}

// ----------------------------��������ʱ�����������黹�ǽṹ�壬���ֱ�Ӵ���ѹջ������ѹջ��ϵͳ�����Ƚϴ󣬵������ܵ��½�
// --------------------------���Ժ���������ѡָ��

//��ά����Ĵ���
//#include <stdio.h>
////��һ��
//void got(int (*arr)[4]){
//	printf("%d\n",*(*arr+1));    //*arr�൱�ڽ���һ��
//	printf("%d\n",*(arr+1));
//	printf("%d\n",**arr);
//}
////�ڶ���
//void got1(int arr[][4]){
//	printf("%d\n",arr[0][1]);
//}
////������
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
//	got2(p,2,4);     //�����ǵ�һ��Ԫ�صĵ�ַ
//
//}

//�޷�������...... �����ʹ��󣬣�ͨ��ȥ������

//�Ż������հ�ʵ��ctrcpy������
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* destination, const char* source){                //����д�� 
//	char* ret = destination;										//  1.const ��ʾ�������Ķ����ǲ����޸ĵģ���ֹ�ں����ڲ����޸ĳ�����
//	assert(destination != NULL);									//  2.assert() �����������ı��ʽ�����ж� ���������ʽ����1�������㷵��0�����򱨴�
//	assert(source != NULL);
//	while(*destination++ = *source++){
//		;
//	}
//	return ret;
//}
//int my_strlen(const char* arr){
//	int count = 0;
//	assert(arr != NULL);                                      //��ָ֤�����Ч��
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

//дһ�������жϵ�ǰ�������Ǵ���ֽ�����С���ֽ���
//main(){
//	int a = 1;
//	int b = *(char*) &a;
//	if(b == 0)
//		printf("���");
//	else
//		printf("С��");
//}
//#include<Windows.h>
//#include <stdio.h>
//#include <string.h>
//main(){
//	//char a = -1;
//	//signed char b = -1;                  //signed�����λ�����жϣ���1��1����0��0  
//	//unsigned char c = -1;                //char����ռһ���ֽڣ�unsigned��λ��0
//	//char d = -128;
//	//char e = 'a';
//	//printf("%d %d %d\n",a,b,c);                  //�����������ռ4���ֽڣ�char������Ҫ������������
//	//printf("%u\n",d);               //��ӡʮ���Ƶ��޷�������
//	//printf("%d\n",e);
//	////unsigned int i;
//	////for(i=9;i>=0;i--){                        //��i=0�ټ�������޷������������2^31-1,һ���ֻ�(�����Ĳ�������޷�������ԭ��)
//	////	printf("%u\n",i);
//	////	Sleep(1000);                            //ͣ��100����
//	////}
//	//char a[1000];
//	//int i;
//	//for(i=0;i<1000;i++){
//	//	a[i] = - 1 - i;
//	//}
//	//printf("%d\n",strlen(a));                   //char��Ӧ��ascii��ֵ��Χ��-128~127������-128����127�ټ�Сһֱ��1�ٵ�0 >> '\0'����
//	//float a = 5.5;
//	////5.5
//	////101.1
//	////(-1)^0 * 1.011 * 2^2
//	////1����+8ָ��+23β��  (ָ����127)
//	////���� ��2+127�� 011
//	////0 10000001 01100000000000000000000
//	//printf("%f\n",a);
//	char arr1[] = "asdfgh";
//	char arr2[] = "asdfgh"; 
//	//const char* p = "asdfgh";      //��д������ȫ��""����Ӧ���ǳ����ַ�����ǰ��Ӧ�ü�const
//	if(arr1 == arr2){                  //ָ�룬��ʾ��ַ���������ַ��������������
//		printf("hehe");
//	}else
//		printf("haha");
//
//}

//����ָ��  -----ָ�������ָ�� -----�������ĵ�ַ
//main(){
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int arr1[] = {0};
//	int (*p)[10] = &arr;    //����ĵ�ַ������
//	int* arr2[10];            //��ŵ�10��int��ָ��
//	int* (*p1)[10] = &arr2;    //ָ��arr�����ָ�룬���arr����ĵ�ַ
//	printf("%d\n",(*p)[1]);
//	printf("%p\n",p);    //�����ַ
//	printf("%p\n",*p+1);   //��һ��Ԫ�صĵ�ַ  *p = arr
//	printf("%p\n",p+1);    //�������ĵ�ַ  �͸�&arr�������ַ��arr��������Ԫ�ص�ַһ��
//
//}
//����ָ���ڶ�ά�������Ӧ��
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
//void my_printf2(int (*p)[4],int a,int b){         //int (*p)[4]�������3��4Ԫ�ص������ַ
//	int i, j;										//��ά������ָ�봫��Ӧ�ô����������ָ��
//	for(i=0;i<a;i++){
//		for(j=0;j<b;j++){
//			printf("%d ",*(*(p+i)+j));   //*((*p+i)+j) ���� *p+i��*(p+i)��ȫ��ͬ 
//			                             //*p+i        �Ƕ�ά������Ԫ�������i��Ԫ�صĵ�ַ
//			                             //*(p+i)       �����һ������ĵ�ַ�����i������ĵ�ַ
//			printf("%d ",p[i][j]);        //int (*p)[4] = arr;   p=arr�����������ָ��ĵ�ַ  *p=arr�����һ������ĵ�ַ p�ǵ�һ��һά��������֣�p[i]���Ǻ��������
//			printf("%d ",(*(p+i))[j]);    //p[i] = *(p+i)
//			printf("%d ",*(p[i]+j));      //p[i]���ǵڼ��У��ڼ���һά���飩�ĵ�ַ
//
//		}                                //*��p+i���ǵڼ�������ĵ�ַ��*(p+i)+j�ǵڼ��еڼ�����Ԫ�ص�ַ
//		printf("\n");
//	}
//}
//main(){
//	int arr[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
//	int i, j;
//	int (*p)[4] = arr;
//	printf("%d\n",p[1][2]);                      //--------------��ά���鱾��������������Ϊ��bai��Ԫ�ص�����du��������������顱
//	my_printf1(arr,3,4);                      //�˴�����ȥ��arr�Ƕ�ά�����е�һ��һά����ĵ�ַ
//	for(i=0;i<3;i++){
//		for(j=0;j<4;j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	my_printf2(arr,3,4);
//}
// int *p = &arr;   p = &arr;   *p = arr; ***********************************************
 
//����ָ��
//#include <stdio.h>
//int Add(int x, int y){
//	int z;
//	z = x + y;
//	return z;
//}
//main(){
//	int a = 10;
//	int b = 20;
//	int (*p)(int, int) = Add;      //p����Add�ĵ�ַ����*p���Ǻ���Add 
//	printf("%d\n",Add(a,b));
//	printf("%d\n",(*p)(a,b));
//	printf("%d\n",p(a,b));                 //p = Add��p() = Add(); *p�Ժ���ָ����н����ñ�ʾ��������
//}

////
//#include <stdio.h>
//void test(char* ch){
//	printf("%c\n",*ch);    
//	printf("%s\n",ch);     //ch == arr      
//}
//main(){
//	char arr[] = "hellowold";
//	void (*p)(char*) = test;                             //void *p(char*) ��ʾһ��������char*���βΣ�void*�Ƿ�������
//	(*p)(arr);
//	printf("%s\n",arr);
//	test(arr);
//}

//-------------------�������ͻ��д����ʱ��Ҫѧ�����Ͷ���
//void (*signal1(int,void(*)(int)))(int);

//typedef void (*pFun_t)(int);
//pFun_t (*signal2(int,pFun_t));

//����ָ������飬���������ָ������һ��������
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
//	int (*parr[4])(int,int) = {Add, Sub, Mul, Div};     //int (* )(int,int)����parr[4]�����Ԫ���Ǻ���ָ��
//	int i;
//	for(i = 0; i < 4; i++){
//		printf("%d\n",(*parr[i])(10,5));                   //(*parr[i])(10,5)Ҳ����
//	}
//}

//
//char* my_strcpy(char* dest, const char* src){
//	;
//}
//main(){
//	//����ָ��
//	char *(*pf)(char*, const char*) = my_strcpy;       //char *()(char*, const char*) �Ǻ������� ���ټ�*pf��ʾ��һ��ָ��
//	//����ָ������
//	char *(*pfarr[])(char*, const char*) = {my_strcpy};   ////char *()(char*, const char*) ��Ԫ������ ���ټ�*pf[]��ʾ��һ��ָ������
//}

//����ָ�������Ӧ��
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
//	int (*parr[])(int,int) = {0,Add,Sub,Mul,Div};            //����д���ĺô������ټ�����ѡ��ĺ���ʱֱ����������ӣ�����Ҫȥswitch�ṹ��ӣ����Ӵ��볤�ȣ�
//	int num = sizeof(parr)/sizeof(parr[0]);
//	printf("%d\n",num);
//	do{
//		int i,j;
//		int result;
//		menu();
//		printf("���������ѡ��");
//		scanf("%d",&input);
//		if(input > 0 && input <num){
//			printf("������������������\n");
//			scanf("%d%d",&i,&j);
//			result = parr[input](i,j);
//			printf("�����%d\n",result);
//			Sleep(1000);
//			continue;
//		}else if(input == 0){
//			printf("�˳�\n");
//			break;
//		}else{
//			printf("ѡ�����������ѡ��\n");
//		}
//	}while(input);
//}

//�ص����� ����1���պ���2��ָ�룬�ں���1����ͨ������2��ָ����ú���2
//#include <stdio.h>
//void print(char* arr){              //������ָ����õĺ��� ------�ص�����
//	printf("hehe:%s\n",arr);
//}
//void test(void (*p)(char*)){
//	printf("test\n");
//	p("asd");
//}
//main(){
//	test(print);
//}

//�ص�������ð�������Ӧ��
//#include<stdlib.h>
//#include <stdio.h>
//#include <string.h>
//int float_sort(const void*e1, const void* e2){           //e1>e2 ���ش���0��ֵ   e1<e2 ����С��0��ֵ  e1=e2 ����0
//	if( *(float*)e1 - *(float*)e2 > 0 )
//		return 1;
//	else if( *(float*)e1 - *(float*)e2 == 0)
//		return 0;
//	else
//		return -1;
//	//return *(float*)e1 - *(float*)e2;              //����ֵ��int 0~1��ֵ����0
//}
//void test1(){
//	float f[] = {0.2,8.0,7.0,0.1,0.3};           // ����0.�������޷��Ƚϴ�С,�������жϺ������һ���ж�
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
//	return ((student*)e1)->age - ((student*)e2)->age;   //((student*)e2)���������������ű�ʾһ������
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
//	my_qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);             //ÿ�����͵ıȽϷ�����һ��������Ҫ���ȽϷ���д��һ����������ȥ
//	for(i = 0; i < sz; i ++){								//ÿ�����͵��ֽڳ��Ȳ�һ������������ʱ����ȫ��һ����
//															//����Ҫ�����͵ĳ��Ƚ�ȥ��Ȼ�󻮷ֳ�ÿ���ֽڣ�char�����н���
//		printf("%-10s %d\n",s[i].name,s[i].age);
//	}
//	my_qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);
//	for(i = 0; i < sz; i ++){
//		printf("%-10s %d\n",s[i].name,s[i].age);
//	}
//}
//main(){
//	//test1();	   //������������
//	test2();     //�ṹ�������
//}
//