//#include "mineSweeper.h"
// //----------------------------------------------------------�����Ķ���
//void menu(){
//	printf("************************************************************\n");
//	printf("****************|--------------------------|****************\n");
//	printf("****************|     1.start    0.quit    |****************\n");
//	printf("****************|--------------------------|****************\n");
//	printf("************************************************************\n");
//	printf("************************************************************\n");
//	printf("******************|----------------------|******************\n");
//	printf("******************|    ���������ѡ��  |******************\n");
//	printf("******************|----------------------|******************\n");
//	printf("************************************************************>>>>");
//}
//void init_arr(char arr[ROW][COL],int row,int col){                     //�˴�[][]������õ���ͷ�ļ���define��ȫ�ֱ���
//	int i,j;
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			arr[i][j] = '@';
//		}
//	}
//}
//void random_mine(char arr[ROW][COL], int row,int col){
//	int i,j,x,y;
//	//�Ƚ��÷��������Ԫ�ظ�ֵ' '
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			arr[i][j] = ' ';
//		}
//	}
//	//�������mine_num�����꣬��ֵ'#'
//	for(i=0;i<mine_num;i++){
//		x = rand()%ROW;               //x,y��ֵ���뱣֤��������
//		y = rand()%COL;
//		//�����������' '�͸�ֵ��������Ǿ�i--����ѭ���˴θ�ֱֵ�����겻�ظ�
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
//	//��ӡ�к�
//	for(i=0;i<=col;i++){
//		printf("%d ",i);
//	}
//	printf("\n");
//	for(i=0;i<row;i++){
//		//��ӡ�к�
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
//			//������ʣ��nime_num��'@'��ʤ��
//			if(arr[i][j] == '@')
//				count++;
//		}
//	}
//	//�ж�count������
//	if(count == mine_num)
//		return 0;
//	else
//		return 1;
//}
////���Ų���Χ�м����׵ķ���Ч�ʵͣ�ÿ�ν�ȥ��Ҫ�ж��Ƿ�Խ��
////����������һȦ���Ͳ������Խ�������
//char mine_around(char arr[ROW][COL],int row,int col,int a,int b){
//	int count1 = 48;
//	int i,j;
//	//�����Ͻǿ�ʼ����
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
//		//��Χû����
//		arr1[a][b] = ' ';
//		//չ���հ׵ķ��� ����һ ѭ������ 
//		for(i=a-1;i<=a+1;i++){
//			for(j=b-1;j<=b+1;j++){
//				if(i>=0 && i<ROW && j>=0 && j<COL && arr1[i][j] == '@')
//					find_mine_around(arr1,arr2,i,j);
//			}
//		}
//		//������ һ��һ���Աȣ�8����
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
//		//��Χ����
//		arr1[a][b] = ret2;
//}
//void findMine(char arr1[ROW][COL],char arr2[ROW][COL],int row,int col){
//	int x,y;
//	int ret,ret1=1;
//	int i,j;
//	do{
//		
//		printf("**********************�������������꣺**********************>>>>");
//		scanf("%d%d",&x,&y);
//		if(x<=ROW && y<=COL && arr1[x-1][y-1] == '@'){
//			//�жϸ������ǲ�������
//			ret = ismine(arr2,x,y);   //����1�������ף�����0������
//		}else{
//			printf("*******************�����������������!********************\n");
//			continue;
//
//		}
//		if(ret == 1){
//			//ɨ���ף���ӡ���������׵�λ�ö���ʾ���������˳���Ϸ
//			for(i=0;i<ROW;i++){
//				for(j=0;j<COL;j++){
//					if(arr2[i][j] == '#')
//						arr1[i][j] = '!';
//				}
//			}
//			display_arr(arr1,ROW,COL);
//			printf("*******************�������ˣ���Ϸʧ��!**********************\n");
//			break;
//
//		}else{
//			//û���׾ͽ�'@'��Ϊ' ' ,������������ж��Ƿ�ʤ��
//			//---------------------------------û���׵Ļ�Ҫ�Ÿ����긽���ж����ף��ж����׾ʹ�ӡ���ּ�,
//			//�����Χ��û���ף����Ų���Χ�˸�����Χ��û���ף���Χû���׾ͽ���λ�ø�ֵ' '�������Χ���׾͸�Ϊ�׵�����
//			x--;
//			y--;
//			find_mine_around(arr1,arr2,x,y);
//			//չʾ
//			display_arr(arr1,ROW,COL);
//			//�ж��Ƿ�ʤ��
//			ret1 = iswin(arr1,ROW,COL);
//			//����0����ʤ��������1�ͼ���
//			if(ret1 == 0){
//				printf("************************��Ϸʤ����**************************\n");
//				break;
//			}
//		}
//	}while(ret1);
//}
