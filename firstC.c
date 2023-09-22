#include /*c预处理指令*/<stdio.h>//所有编译器软件包都提供stdio.h文件，包含编译器的输入、输出函数。该文件名的含义是输入、输出头文件（h）
//头文件：C程序顶部的信息集合，包含了 编译器创建最终可执行程序要用到的信息（可以定义一些常量、指明函数名以及如何正确使用它们）
//函数有对应头文件 printf（）函数必须包含stdio.h头文件
//不用头文件也行，但是不太好
int/*main的返回类型，返回的值是整数*/ main/*必须是开始的函数*/(void/*包含一些传入函数的信息，但是void啥也没有*/)//（）用于识别main是一个函数
//有多种写法 但是请坚持标准模式
{//{}标记函数体的开始和结束
	int/*关键字keyword*/ num;//声明 1.函数中有一个叫num的变量 2.int表示num是一个整数
	//所有变量必须先声明才能使用
	num = 1;//为num赋值 表达式语句

	printf("I am a simple");//printf（）是标准函数
	printf(" computer\n"/*换行符是一个转义序列 表示难以表示或无法输入的字符*/);
	printf("My favorite number is %d because it is first.\n", num);
	getchar();
	return 0;//跳转语句
}