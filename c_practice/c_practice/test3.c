//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//void menu(){                               //void不用返回值
//	printf("************************************************************\n");
//	printf("**************  1.start             2.exit       ***********\n");
//	printf("************************************************************\n");
//	printf("请选择：\n");
//}
//void game(){
//	int rand_num, guess_num;
//	//srand((unsigned int) time(NULL));              --------------------srand函数不要重复调用，在主函数调用一次就行了，srand定义一个随机取值的起点
//	rand_num = rand()%100+1;
//	printf("%d\n",rand_num);	
//	do{
//		printf("请输入你猜的数：\n");
//		scanf("%d",&guess_num);
//		if(guess_num == rand_num){
//			printf("恭喜你，猜对了!!\n");
//			break;
//		}
//		if(guess_num > rand_num){
//			printf("猜大了,");
//		}
//		if(guess_num < rand_num){
//			printf("猜小了,");
//		}
//	}while(1);
//
//}
//main(){
//	int input_num = 0;
//	srand((unsigned int) time(NULL));               //----------------------srand()函数用来设置算法的种子，time(NULL)返回当前的时间，先调用dusrand(time(NULL))是把当前的时间作为种子，是程序每次运行产生不同的随机数序列。
//	
//	do{                          //---------------------至少执行一次
//		menu();
//		scanf("%d",&input_num);
//		if(1 == input_num){
//			game();
//		}
//		else if(2 == input_num){
//			break;
//		}
//		else{
//			printf("输入错误");
//		}
//	}while(1);
//
//}
//system("shutdown -s -t 60")； --------------------------- 60s后关机