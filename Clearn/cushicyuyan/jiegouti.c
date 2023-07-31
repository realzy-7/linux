#include<stdio.h>
#include<string.h>
//定义一个结构体类型
struct Book
{
	char name[20];
	int price;
};
int main()
{
	//新建一个结构体Book类型的变量
	struct Book b1 = { "c语言程序设计",15 };
	struct Book* pb = &b1;
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	printf("书名：%s\n", (*pb).name);
	printf("价格：%d\n", (*pb).price);//. 结构体变量.成员
	printf("书名：%s\n", pb->name);// ->  结构体指针->成员
	printf("价格：%d\n", pb->price);
	b1.price = 20;
	printf("修改之后的价格为：%d\n", b1.price);
	pb->price = 25;
	printf("第二次修改之后的价格为：%d\n", b1.price);
	(*pb).price = 30;
	printf("第三次修改之后的价格为：%d\n", b1.price);
    strcpy(b1.name,"c++");
	printf("书名：%s\n", b1.name);


	return 0;
}
