//#define _CRT_SECURE_NO_WARNINGS
//#define STACKMAXSIZE 100
//#include<stdio.h>
//#include<malloc.h>
//#include<stdbool.h>
//typedef struct
//{
//	int data[STACKMAXSIZE];
//	int top;
//}Stack;
//void initStack(Stack *newstack)
//{
//	newstack->top = -1;
//}
//bool push(Stack *s, int t)
//{
//	if (s->top == STACKMAXSIZE - 1)
//	{
//		return false;
//	}
//	s->data[++s->top] = t;
//	return true;
//}
//int top(Stack* s)
//{
//	return s->data[s->top];
//}
//bool pop(Stack* s, int* x)
//{
//	if (s->top < 0)
//		return false;
//	s->top--;
//	x = s->data[s->top];
//	return true;
//	
//}
//int main()
//{
//	Stack* mystack=(Stack*)malloc(sizeof(Stack));
//	initStack(mystack);
//	push(mystack, 1);
//	push(mystack, 2);
//	int a = 77;
//	pop(mystack, &a);
//	printf("%d ", a);
//	printf("%d", top(mystack));
//	return 0;
//}