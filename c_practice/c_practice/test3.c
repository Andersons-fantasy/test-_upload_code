//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//void menu(){                               //void���÷���ֵ
//	printf("************************************************************\n");
//	printf("**************  1.start             2.exit       ***********\n");
//	printf("************************************************************\n");
//	printf("��ѡ��\n");
//}
//void game(){
//	int rand_num, guess_num;
//	//srand((unsigned int) time(NULL));              --------------------srand������Ҫ�ظ����ã�������������һ�ξ����ˣ�srand����һ�����ȡֵ�����
//	rand_num = rand()%100+1;
//	printf("%d\n",rand_num);	
//	do{
//		printf("��������µ�����\n");
//		scanf("%d",&guess_num);
//		if(guess_num == rand_num){
//			printf("��ϲ�㣬�¶���!!\n");
//			break;
//		}
//		if(guess_num > rand_num){
//			printf("�´���,");
//		}
//		if(guess_num < rand_num){
//			printf("��С��,");
//		}
//	}while(1);
//
//}
//main(){
//	int input_num = 0;
//	srand((unsigned int) time(NULL));               //----------------------srand()�������������㷨�����ӣ�time(NULL)���ص�ǰ��ʱ�䣬�ȵ���dusrand(time(NULL))�ǰѵ�ǰ��ʱ����Ϊ���ӣ��ǳ���ÿ�����в�����ͬ����������С�
//	
//	do{                          //---------------------����ִ��һ��
//		menu();
//		scanf("%d",&input_num);
//		if(1 == input_num){
//			game();
//		}
//		else if(2 == input_num){
//			break;
//		}
//		else{
//			printf("�������");
//		}
//	}while(1);
//
//}
//system("shutdown -s -t 60")�� --------------------------- 60s��ػ�