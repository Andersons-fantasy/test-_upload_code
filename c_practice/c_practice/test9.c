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