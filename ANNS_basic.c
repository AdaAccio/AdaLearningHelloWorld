#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define ETA 0.05//ѧϰ��
#define N 3//ѧϰ����
static double w1=0.8, w2=0.5, w3=0.9, w4=0.4, w5=0.2;//��ʼȨ��
int main()
{
	double sigmoid(double);//�����
	double summary(int,int,int,int,int);//�Գ˻�����ͺ���
	double updateSita(int, double[], double[]);
	double updateW(int,int[], double);
	double evaluate(int, double[], double[]);
	
	int sita;//��ֵ
	int color[1000] = { 0 }, root[1000] = { 0 }, sound[1000] = { 0 }, shape[1000] = { 0 }, weight[1000] = { 0 };
	double t[1000] = { 0 };//��ʵ���
	double y[1000] = { 0 };//Ԥ�����
	double sum=0;
	int n = 0;
	double E=0;

	printf("�����ʼȨ�أ�\n");
	//scanf("%lf%lf%lf%lf%lf", &w1, &w2, &w3, &w4, &w5);
	
	printf("������ֵ��\n");
	//scanf("%d", &sita);
	sita = 3;
	freopen("trail.txt", "r", stdin);
	for (int i = 0; i < N;i++)
	{
		int m;
		//printf("���ϸ�����\n");
		scanf("%d", &m);
		for (int j = 0; j < m; j++)
		{
			//printf("���������ϵĸ�����ֵ\n");
			//printf("˳��Ϊ ɫ�� ���� ���� ��״ ���� ��ʵ���\n");
			scanf("%d %d %d %d %d %lf",
				&color[j], &root[j], &sound[j], &shape[j], &weight[j], &t[j]);
			sum += summary(color[j], root[j], sound[j], shape[j], weight[j]);
			sum -= sita;
			y[j] = sigmoid(sum);
			
		}
		sita += updateSita(m, t, y);
		w1 += updateW(m,color, sita);//ÿ������һ��ѧϰ �Ͱ�Ȩ��ֵ���и���
		w2 += updateW(m,root, sita);
		w3 += updateW(m,sound, sita);
		w4 += updateW(m,shape, sita);
		w5 += updateW(m,weight, sita);
		E = evaluate(m, y, t);
		printf("������ģ��Ԥ�����ܵ�����ֵΪ��%lf\n", E);
	}
	
	return 0;
}
double sigmoid(double x)
{
	float y;
	y = 1 / (1 + exp(-x));
	return y;
}
double summary(int a,int b,int c,int d,int e)
{
	
	double sum = 0;
	
	sum = a * w1 + b * w2 + c * w3 + d * w4 + e * w5;
	return sum;
}
double updateSita(int m, double t[], double y[])
{
	double sum=0;
	for (int i = 0; i < m; i++)
	{
		sum = sum - (y[i] * (1 - y[i]) * (t[i] - y[i]));
	}
	return sum*ETA;
}
double updateW(int m,int a[], double sita)
{
	int sum=0;
	for (int i = 0; i < m; i++)
	{
		sum += a[i] * (-sita);
	}
	return ETA*sum;
}
double evaluate(int m, double y[], double t[])//�����ʽ��MSE��ʽ
{
	double E = 0;
	for (int i = 0; i < m; i++)
	{
		E += (y[i] - t[i]) * (y[i] - t[i]) / 2.0;
	}
	E /= m;
	return E;
}