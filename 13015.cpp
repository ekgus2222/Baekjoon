//����� 23
#include<iostream>
#include<stdio.h>

using namespace std;

int main() {

	int N;
	int front;
	int interval;
	int middle;

	cin >> N;  

	front = 1; //1�� ���� N-2����
	interval = N - 2; //static  
	middle = 2*N-3; // 2�� ���� 1����   

	//ù��
	for (int i = 0;i < N;i++) printf("*");
	for (int i = 0;i < middle;i++) printf(" ");
	for (int i = 0;i < N;i++) printf("*");
	printf("\n");

	middle -= 2; 


	//�߰� ��
	for(int j=0;j<N-2;j++)
	{
		for (int i = 0;i < front;i++) printf(" ");


		printf("*");
		for (int i = 0;i < interval;i++) printf(" ");
		printf("*");
		for (int i = 0;i < middle;i++) printf(" ");
		printf("*");
		for (int i = 0;i < interval;i++) printf(" ");
		printf("*");

		
		middle -= 2;
		front += 1;
		printf("\n");
	}

	
	//�߰�
	for (int i = 0;i < N-1;i++) printf(" ");
	printf("*");
	for (int i = 0;i < interval;i++) printf(" ");
	printf("*");
	for (int i = 0;i < interval;i++) printf(" ");
	printf("*");
	printf("\n");

	middle = 1;
	front -= 1;
	

	//�߰� ��
	while (middle < 2*N-3)
	{	
		
		for (int i = 0;i < front;i++) printf(" ");

		
		printf("*");
		for (int i = 0;i < interval;i++) printf(" ");
		printf("*");
		for (int i = 0;i < middle;i++) printf(" ");
		printf("*");
		for (int i = 0;i < interval;i++) printf(" ");
		printf("*");


		middle += 2;
		front -= 1;
		printf("\n");
		
	}


	//�� ��
	for (int i = 0;i < N;i++) printf("*");
	for (int i = 0;i < middle;i++) printf(" ");
	for (int i = 0;i < N;i++) printf("*");
	//printf("\n");

}



//N�� ���� ������ ��Ģ�� ã�Ƽ� front, interval, middle�� ������
//�� �ٿ��� ���� ���� �ι� �ݺ��ȴ� �����ؼ� loop x 2�� ���ȴµ� ���� front ���� ���� ���ؼ� �̻��ϰ� ����
//front�� ���ϱ� �ߵ���
//�ٵ� ��� ������ �߸��ƴٴ� ������ ���ͼ� loop�� �ƿ� ���� ������ loop�� ������� �ʰ� ����� -> ����