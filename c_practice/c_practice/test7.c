// дһ���ж��ǲ��������ĺ�������ӡ100-200֮�������
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

// �ж�����
//#include <stdio.h>
//int is_leap_year(int year){
//	if(year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
//		return 1;
//	else
//		return 0;
//}
//main(){
//	int year;
//	printf("��������Ҫ��ѯ�����:");
//	scanf("%d",&year);
//	if(1 == is_leap_year(year)){
//		printf("�����ꡣ");
//	}else{
//		printf("�������ꡣ");
//	}
//}

//���ַ�����Ԫ�������ŷ�
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
////�ڶ��ַ�����ֻ��һ���β�
//void reverse_str1(char* ch){
//	int a = my_strlen(ch);
//	char tmp = *ch;
//	*ch = *(ch+a-1);
//	*(ch+a-1) = '\0';                                // -----------��key point�����Ѿ������������ַ��Ĵ���
//	if(my_strlen(ch + 1) >= 2)
//		reverse_str1(ch + 1);                         //  -------����һ���ַ���ֵ��\0����ǰ��һ���ַ����� ������һ���ַ���
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
//	printf("%s\n",ch);       //�ַ����Ĵ�ӡ  %s
//}

//��ӡһ��ȷ�����ĳ˷��ھ��� ����9�ʹ�ӡ9*9��
//#include <stdio.h>
//main(){
//	int num;
//	int i,j;
//	printf("������Ҫ��ӡ�ĳ˷��ھ����������");
//	scanf("%d",&num);
//	for(i=1;i<=num;i++){
//		for(j=1;j<=i;j++){
//			printf("%d*%d=%-3d",i,j,i*j);
//		}
//		printf("\n");
//	}
//}

//�ݹ��ӡ������ÿһλ
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
//	printf("������һ������:");
//	scanf("%d",&input);
//	print_int(input);
//}

//�ݹ�ʵ��n�Ľ׳�
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
//	printf("��������Ҫ��Ľ׳�����:");
//	scanf("%d",&num);
//	result = factorial(num);
//	printf("%lld",result);
//}

//�ݹ�ʵ��  ����һ��������ÿһλ��ӵĺ�
//#include <stdio.h>
//int DigitSum(int input){
//	if(input % 10 != 0)                               //�˷�����bug���������м���0ʱ���ͻ��м�ϲ㣬��������ּ�ⲻ��,���Ի���a ��= 0
//		return input % 10 + DigitSum(input / 10);
//	else
//		return 0;
// ������
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
// ------------------------C����intռ4����bai�ڣ�һ��32λ����Χ��-2147483648 ~ 2147483647��
//------------------du���������zhi����Χ����dao����ϻ��ȥ4294967296��ʹ��ֵ�����������Χ�ڡ�
// -------------------------���綨��int����a��ֵΪ2147483647���ټ�1����2147483648��������Χ�������Ҫ����4294967296������ӡ��ֵ����-2147483648

//�ݹ�ʵ�� n��k�η�
//#include <stdio.h>
//int num_power(int num, int power){
//	if(power == 1)                         //������
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