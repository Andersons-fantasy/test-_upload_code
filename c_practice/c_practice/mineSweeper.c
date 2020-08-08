//#include "mineSweeper.h"
// //----------------------------------------------------------函数的定义
//void menu(){
//	printf("************************************************************\n");
//	printf("****************|--------------------------|****************\n");
//	printf("****************|     1.start    0.quit    |****************\n");
//	printf("****************|--------------------------|****************\n");
//	printf("************************************************************\n");
//	printf("************************************************************\n");
//	printf("******************|----------------------|******************\n");
//	printf("******************|    请输入你的选择：  |******************\n");
//	printf("******************|----------------------|******************\n");
//	printf("************************************************************>>>>");
//}
//void init_arr(char arr[ROW][COL],int row,int col){                     //此处[][]里面调用的是头文件里define的全局变量
//	int i,j;
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			arr[i][j] = '@';
//		}
//	}
//}
//void random_mine(char arr[ROW][COL], int row,int col){
//	int i,j,x,y;
//	//先将该方阵的所有元素赋值' '
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			arr[i][j] = ' ';
//		}
//	}
//	//随机生成mine_num个坐标，赋值'#'
//	for(i=0;i<mine_num;i++){
//		x = rand()%ROW;               //x,y的值必须保证在棋盘内
//		y = rand()%COL;
//		//如果该坐标是' '就赋值，如果不是就i--重新循环此次赋值直到坐标不重复
//		if(arr[x][y] == ' '){
//			arr[x][y]='#';
//		}else{
//			i--;
//		}
//	}
//}
//int ismine(char arr[ROW][COL],int x, int y){
//	if(arr[x-1][y-1] == '#'){
//		return 1;
//	}else{
//		return 0;
//	}
//}
//void display_arr(char arr[ROW][COL],int row, int col){
//	int i,j;
//	//打印列号
//	for(i=0;i<=col;i++){
//		printf("%d ",i);
//	}
//	printf("\n");
//	for(i=0;i<row;i++){
//		//打印行号
//		printf("%d ",i+1);
//		for(j=0;j<col;j++){
//			
//			printf("%c ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int iswin(char arr[ROW][COL],int row, int col){
//	int i,j;
//	int count = 0;
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			//如果最后剩余nime_num个'@'就胜利
//			if(arr[i][j] == '@')
//				count++;
//		}
//	}
//	//判断count的数量
//	if(count == mine_num)
//		return 0;
//	else
//		return 1;
//}
////该排查周围有几个雷的方法效率低，每次进去都要判断是否越界
////将数组扩大一圈，就不会存在越界的问题
//char mine_around(char arr[ROW][COL],int row,int col,int a,int b){
//	int count1 = 48;
//	int i,j;
//	//从左上角开始遍历
//	for(i=a-1;i<=a+1;i++){
//		for(j=b-1;j<=b+1;j++){
//			if(i>=0 && i<ROW && j>=0 && j<COL && arr[i][j] == '#')
//				count1++;
//		}
//	}
//	return count1;
//}
//void find_mine_around(char arr1[ROW][COL],char arr2[ROW][COL],int a,int b){
//	int ret2;
//	int i,j;
//	ret2 = mine_around(arr2,ROW,COL,a,b);
//	if(ret2 == 48){
//		//周围没有雷
//		arr1[a][b] = ' ';
//		//展开空白的方法 方法一 循环遍历 
//		for(i=a-1;i<=a+1;i++){
//			for(j=b-1;j<=b+1;j++){
//				if(i>=0 && i<ROW && j>=0 && j<COL && arr1[i][j] == '@')
//					find_mine_around(arr1,arr2,i,j);
//			}
//		}
//		//方法二 一个一个对比（8个）
//		/*if((a-1)>=0 && (b-1)>=0 && arr1[a-1][b-1] == '@')
//			find_mine_around(arr1,arr2,a-1,b-1);
//		if((a-1)>=0 && arr1[a-1][b] == '@')
//			find_mine_around(arr1,arr2,a-1,b);
//		if((a-1)>=0 && (b+1)<ROW && arr1[a-1][b+1] == '@')
//			find_mine_around(arr1,arr2,a-1,b+1);
//		if((b-1)>=0 && arr1[a][b-1] == '@')
//			find_mine_around(arr1,arr2,a,b-1);
//		if((b+1)<COL && arr1[a][b+1] == '@')
//			find_mine_around(arr1,arr2,a,b+1);
//		if((b-1)>=0 && (a+1)<ROW && arr1[a+1][b-1] == '@')
//			find_mine_around(arr1,arr2,a+1,b-1);
//		if((a+1)<ROW && arr1[a+1][b] == '@')
//			find_mine_around(arr1,arr2,a+1,b);
//		if((a+1)<ROW && (b+1)<COL && arr1[a+1][b+1] == '@')
//			find_mine_around(arr1,arr2,a+1,b+1);*/
//		
//	}
//	else
//		//周围有雷
//		arr1[a][b] = ret2;
//}
//void findMine(char arr1[ROW][COL],char arr2[ROW][COL],int row,int col){
//	int x,y;
//	int ret,ret1=1;
//	int i,j;
//	do{
//		
//		printf("**********************请输入排雷坐标：**********************>>>>");
//		scanf("%d%d",&x,&y);
//		if(x<=ROW && y<=COL && arr1[x-1][y-1] == '@'){
//			//判断该坐标是不是有雷
//			ret = ismine(arr2,x,y);   //返回1就是有雷，返回0就是无
//		}else{
//			printf("*******************输入错误，请重新输入!********************\n");
//			continue;
//
//		}
//		if(ret == 1){
//			//扫出雷，打印（将所有雷的位置都显示出来），退出游戏
//			for(i=0;i<ROW;i++){
//				for(j=0;j<COL;j++){
//					if(arr2[i][j] == '#')
//						arr1[i][j] = '!';
//				}
//			}
//			display_arr(arr1,ROW,COL);
//			printf("*******************遇到雷了，游戏失败!**********************\n");
//			break;
//
//		}else{
//			//没有雷就将'@'改为' ' ,在输出方阵，在判断是否胜利
//			//---------------------------------没有雷的话要排该坐标附近有多少雷，有多少雷就打印数字几,
//			//如果周围还没有雷，就排查周围八个的周围有没有雷，周围没有雷就将该位置赋值' '；如果周围有雷就改为雷的数字
//			x--;
//			y--;
//			find_mine_around(arr1,arr2,x,y);
//			//展示
//			display_arr(arr1,ROW,COL);
//			//判断是否胜利
//			ret1 = iswin(arr1,ROW,COL);
//			//返回0就是胜利，返回1就继续
//			if(ret1 == 0){
//				printf("************************游戏胜利！**************************\n");
//				break;
//			}
//		}
//	}while(ret1);
//}
