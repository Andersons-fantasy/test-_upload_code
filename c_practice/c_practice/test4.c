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
//}                                    //����һ�ִ�ַ���ã��õ��ÿ���ֱ��ʹ�⺯�����������Ĳ������в���
//void swap(int x, int y){
//	int num = x;
//	x = y;
//	y = num;                            //��ֵ����
//}                                       //�Զ��庯������Ĳ��������һ���ڴ棬���Ҫ�����������ʵ�ʲ������иı�Ĳ�������Ҫ����������Ĳ����ĵ�ַ��ȡ���Զ��庯�������ʽ����
//main(){
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	printf("a = %d, b = %d\n", a, b);
//}
//���ֲ��� �Զ��庯��
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
////			break;                         //---------------����ط���break��û��Ҫ�ˣ�return���Ǻ����Ľ���
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
//	a = binary_search(k, arr, m);                                      //---------arr�����Զ��庯������ֻ�������һ��Ԫ�صĵ�ַ�������Զ��庯������sizeof��arr����arrֻ��һ��ָ��
//	printf("%d\n",a);
//	
//}
//��һ���������4�εĺ�Ϊ8�ĸ���
//#include <time.h>
//#include <stdlib.h>
//main(){
//	int i,j;
//	float x = 0;
//	float y = 0;
//	srand((unsigned int) time(NULL));                   //-------------����ʱ��Ϊһ���������������
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
//ģ��ʵ��strlen����������
//int my_strlen(char* str){               //�˴���������str���ַ������ַ��ĵ�ַ��char*ָ�붼�����ַ
//	int count = 0;
//	while(*str != '\0'){                 //-------------------'\0'ת���ַ������ţ���ĸ�ȵ��ж϶��õ��������������൱��ת��Ϊascii���ڽ��жԱ�
//		count++;                         //*str��ָstr��������ݣ������ַ���ʲô
//		str++;                                     //-----------------�˴�str++����str�ĵ�ַ�������ƣ�+1�����ַ���˳��������
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
//ʵ��strlen�������ǲ�׼����ʱ����
//int my_strlen(char* str){
//	if(*str != '\0'){
//		return 1+my_strlen(++str);     //--------------------(++str��str+1��1+str)�����ԣ�����str++�����ԣ���Ϊ�ȸ�ֵ��++
//	}else{
//		return 0;
//	}
//}
//main(){
//	char ch[] = "adc";
//	int len = my_strlen(ch);
//	printf("%d\n",len);
//}
//�ݹ� �������ÿһλ�ϵ�����
//void output_obo(int a){
//	if(a>9){
//		output_obo(a/10);
//	}
//	printf("%d ",a%10);
//}
//main(){
//	int input_num;
//	printf("������һ�����֣�");
//	scanf("%d",&input_num);                        //----------------&���벻������ɷ��
//	output_obo(input_num);
//}
//
//�ݹ���Ǻ�����ĺ�����ĺ�����ĺ�������������
//���n��쳲�������
//��һ�� �ݹ�
//int fib(int a){
//	if(a<=2){
//		return 1;
//	}else{
//		return fib(a-1)+fib(a-2);
//	}
//}                                           //-------------------------�÷���������̫�����������ʱ����������
//�ڶ��� ѭ��
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
//	printf("������Ҫ���ҵڼ���쳲���������:");
//	scanf("%d",&num);
//	ret = fib(num);
//	printf("%d\n",ret);
//}
