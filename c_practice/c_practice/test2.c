#include <stdio.h>
//void test(){
//	static int a = 1;    //static���ξֲ�������ʱ�� ��������ֲ� ���������٣��ֲ��������������ڱ䳤��
//	a++;                 //static����ȫ�ֱ���ʱ �ı��˸ñ����������� ֻ���ڶ����˸ñ�����Դ�ļ���ʹ��
//	printf("%d\n",a);
//}
//main(){
//	int i = 0;
//	while(i<5){
//		test();
//		i++;
//	}
//}
//extern int add(int, int);    //Ҫʹ����һ��Դ�ļ��еĺ����������������ú�������ʹ��  //���static���κ������ı��˺������������ԣ��ⲿ�������Ա�����ڲ��������ԣ�
//main(){
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = add(a , b);
//	printf("%d\n", c);
//}
//#define MAX(a,b) (a > b ? a: b) //�궨��
//int Max(int a , int b){         //��������
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
//	c = MAX(a , b);              //cǰ�����������;Ͳ�����������
//	printf("%d\n", c);
//}
//main(){
//	int a = 10;              //-------ָ��
//	int* p;                       //int* ������ *����ָ�� int*����ָ��ָ��int���͵ı��� p��ָ���������
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
//	char name[20];      //------[]�����ǳ���
//	short price;
//};                   //-------------�����ṹ������ʱ}��������зֺ�
//main(){
//	struct Book b1 = {"c���Գ������", 55};
//	
//	struct Book* pb = &b1;
//	printf("%s\n",b1.name);
//	printf("%d\n",b1.price);            //----------c���Թ涨��������Ҫ�ڴ�����ǰ�� ����ᱨ��
//	printf("%s\n",(*pb).name);
//	printf("%d\n" ,(*pb).price);
//	b1.price = 50;
//	printf("%d\n",b1.price);  
//	//  b1.name = "c++"; -----------����ִ��
//	strcpy(b1.name, "c++");           //�ַ������޸Ĳ���ֱ�Ӹ�ֵ  ��Ҫ��strcpy
//	printf("%s\n",b1.name);  
//}
//main(){
//	char* p = "hello";
//	printf("%s\n", p);
//}
// if(5 == num)  ---------һ�������ͱ���֮����жϰѳ���д��ǰ�棺1.Ϊ������ֵ��� 2.���ٴ���
// ��ϰ1 �ж�һ�����ǲ�������
//main(){
//	int a;
//	printf("������һ������\n");
//	scanf("%d", &a);
//	if(a % 2 == 0){
//		printf("%d��һ��ż��\n", a);
//	}else{
//		printf("%d��һ������\n", a);
//	}
//}
//��ϰ2 ����1-100֮�������
//main(){
//	int i;
//	for(i = 0; i<=99; i++){
//		if(i%2==1){
//			printf("%d\n", i);
//		}
//	}
//}
//switch(){                 ------------------------------- switch()��������������ͱ��ʽ��
//case 1:              ------------------------------------- case 1��case 2�������ֶ������ͣ��涨��
//	printf();
//	break;      
//case 2;
//	....
//default:
//	printf("�������");
//  break;
//}
// -------------------------------------------
//while(a <= 5){
//	if(a == 3){
//		break;                    --------------------break������ֹѭ����continue��������ѭ������ִ��continue����ĸ�ѭ������䣬ֱ��ִ����һ��ѭ��
//	}
//	printf("%d\n", a);
//	a++;
//}
//main(){
//	char ch;
//    while((ch = getchar())!=EOF)//----------------------EOF:end of file(����ctrl+z����ֹѭ��)
//	{
//		putchar(ch);
//	}
//}
//main(){
//	int ch;
//	while((ch = getchar()) != EOF){    //-----------��!=EOF������ָ������CTRL+Z�ͻ�һֱѭ��
//		if(ch < '0' || ch > '9'){
//			continue;
//		}
//		putchar(ch);
//	}
//}
//��ϰһ ����׳�
//main(){
//	int num;
//	int ret = 1;
//	int i;
//	printf("������һ������:\n");
//	scanf("%d", &num);                   //scanf("")  ""���治Ҫ��\n ����ͻ�ɨ��һ���س�����ȥ
//	printf("%d\n", num);
//	for(i = 1 ; i<=num ; i++){
//		ret *= i;
//	}
//	printf("%d�Ľ׳���%d\n", num, ret);
//}
//��ϰ�� ����1��+2��....+10��
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
//�����ķ�����
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
//��ϰ
//main(){                                  //  --------------------�÷���������Ч�� ����һ��һ���ı��������������������ö��ַ�
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k,i;
//	printf("��������Ҫ���ҵ�����:\n");
//	scanf("%d", &k);
//	for(i=0;i<(sizeof(arr)/sizeof(arr[o]));i++){
//		if(k == arr[i]){
//			printf("�������������е�λ���ǵ�%d��\n",i+1);
//			break;
//		}
//	}
//	if(i == sizeof(arr)){
//		printf("�����ֲ�����\n");
//}
//}
//���ַ�����
//main(){
//	int arr[]={1,2,3,4,5,6,8,9,10,11,12};
//	int a = sizeof(arr)/sizeof(arr[0]);
//	int k = 7;
//	int left = 0;
//	int right = a - 1;
//	while(1 != right - left){                      //----------------Ҳ������left<=right  ��Ӧ����
//		int mid = (left + right) / 2;
//		if(k > arr[mid]){
//			left = mid ;                            //-------------   ��Ӧ���� ��Ӧ����left = mid + 1����Ϊ��������left<right������ͱ���+1������Ͳ�������������
//		}else if(k < arr[mid]){
//			right = mid;
//		}else if(k == arr[mid]){
//			printf("���ҵ�����Ԫ���±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if(1 == right - left){
//		printf("δ�ҵ�\n");
//	}
//}
//��ϰ ���������м����һ���ַ���
//#include <string.h>
//main(){
//	char ch[]="hello world";
//	int a = sizeof(ch)/sizeof(ch[0]);
//	printf("%d\n", sizeof(ch));
//	printf("%d\n", a);
//	printf("%d\n", sizeof(ch[0]));                  //����һ���������������ռ���ڴ��ֽ��� ����������\0
//	printf("%d\n",strlen(ch));						//�����ַ����ĳ���  ��������������\0
//}
//��ϵͳͣ��ʱ��
//#include <Windows.h>
//Sleep(1000);                                     //ֹͣ1000����
//�����Ļ
//#include <stdlib.h>
//system("cls");                                   //ִ��ϵͳ�����һ������ cls�����Ļ
//�ַ����ıȽ�
//if(strcmp��str1��str2��==0)                       //���str1��str2��ͬ�ͷ���0������ͬ�ͷ���һ������0��С��0������
////��ϰ�� �û���¼ 3�λ���
//#include <string.h>
//main(){
//	char password[] = "li709984654";
//	int i,j;
//	int a = strlen(password);
//	char input[11];
//	printf("%d\n", a);                        
//	for(i=0;i<3;i++){
//		if(i == 0)
//			printf("���������룺");
//		else
//			printf("�������������룺");
////		scanf("%s",&input);                              //-------�˴�����һ��������Ҫ����Ŀ ���� c/c++ �������� ��������ʱ��� ��ΪĬ��ֵ
////		for(j=0;j<a;j++){                                 //--------------ɷ�Ҵ��룬һ��strcmp�������
////			if(input[j] != password[j]){
////				printf("�������,");
////				break;
////			}
////		}
////		if(j == a){
////			printf("������ȷ\n");
////			break;
////		}
//		scanf("%s", &input);
//		if(strcmp(password, input) == 0){
//			printf("����������ȷ");
//			break;
//		}else{
//			printf("�����������");
//		}
//	}
//	if(i == 3){
//		printf("�����������\n");
//	}
//	return 0;
//}
// -------------------------------------------0��ʾ�٣���0��ʾ��
//----------------------------------------------------���case����û��break;�ͻ�һֱִ����ȥ,ֱ����breakΪֹ;�����û�оͻ�ִ�е�default���,����switch���
//�������ֵ�����ֵ
//int Max(int a, int b){            ---------------------ɷ�Ҵ���
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
//	printf("�������������֣�");
//	scanf("%d %d %d",&a,&b,&c);          //  ----------"%d%d%d"�м�ʲô�������������ʱ����ÿո����
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
//��ϰ �������������Լ�� 9��6�����Լ������3
//main(){                    //-------------------շת�����
//	int m = 5;
//	int n = 15;
//	int a;
//	while(a = m%n){                  //�����������ͬʱ���� +�ж� �����ǲ�����������
//		m = n;
//		n = a;
//	}
//	printf("%d\n",n);         //------------��Ϊ��m%n����������Ŀ϶���С��n
//}
//��ϰ ����1/1-1/2+1/3.......-1/100��ֵ
//main(){
//	float sum = 0;
//	int i;
//	for(i=1; i<=100; i++){
//		if(i%2 == 1){
//			sum += (1.0/i);                  //---------С��/int  ==float
//			printf("%lf\n",sum);
//		}
//		if(i%2 == 0){
//			sum += -(1.0/i);
//			printf("%f\n",sum);
//		}
//	}
//}
//  ---------------------------------------------------- 0x��ͷ����16��������
//unsigned ----------------------------------------�����޷���
