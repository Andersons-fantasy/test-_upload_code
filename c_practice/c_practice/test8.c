//ָ���ȥָ��
//main(){
//	int arr[] = {1,2,3,4,5,6,7};
//	int* p1 = &arr[0];
//	int* p2 = &arr[3];
//	printf("%d\n",p2-p1);                //��������ָ���ȥָ���൱���±�֮��ļ���
//}

//
//main(){
//	int arr[] = {6,7,8,9,10};
//	int* p = arr;
//	*(p + 3) += 3;            //*(p + 3) = *(p + 3) + 3    .......*��p+3��������Ԫ�ص�ַ����3��Ԫ�صĵ�ַ    *p+3�Ŵ���������������������ݵ�ַ
//	printf("%d %d\n",*p,*(p+3));
//}

//ˮ�ɻ�
//#include <stdio.h>
//#include <math.h>
//int digit_count(int a){
//	int count = 0;
//	while(a != 0){
//		a = a / 10;
//		count ++;
//	}
//	return count;
//}
//int is_special_num(int a){
//	int n = digit_count(a);
//	int result = 0;
//	/*while(a % 10 != 0){   */                 //�˷�������ѧ���м���0ʱ����ɶϲ�
//	while(a != 0){
//		result += pow(a%10,n);//���η�����ʽ��������д��(a % 10)^n;   ������   ����pow����
//		a = a / 10;
//	}
//	return result;
//}
//main(){
//	int i;
//	for(i = 0; i <= 100000; i ++){
//		int ret = is_special_num(i);
//		if(ret == i)
//			printf("%d ",i);
//	}
//}

////��7*7�ķ��������һ������
//#include <stdio.h>
//main(){
//	int i,j;
//	int row,col;
//	scanf("%d%d",&row,&col);
//	for(i=1;i<=row;i++){
//		if(i>(row/2+1)){
//			int k = row + 1 - i;
//			for(j=1;j<=col;j++){
//				if(j>((row - (k*2-1)) / 2 + (k*2-1)))
//					printf(" ");
//				else if(j<=(row - (k*2-1)) / 2)
//					printf(" ");
//				else
//					printf("*");
//			}
//		}else{
//			for(j=1;j<=col;j++){
//				if(j>((row - (i*2-1)) / 2 + (i*2-1)))
//					printf(" ");
//				else if(j<=(row - (i*2-1)) / 2)
//					printf(" ");
//				else
//					printf("*");
//			}
//		}
//		printf("\n");
//	}
//}

//
//#include <stdio.h>
//void test(int* arr){
//	printf("%d\n",arr[0]);
//}
//main(){
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int* b = &arr[1];
//	test(arr);
//	test(b);
//	printf("%d\n",b[0]);
//	printf("%d\n",arr[0]);
//}