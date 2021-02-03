//별찍기 23
#include<iostream>
#include<stdio.h>

using namespace std;

int main() {

	int N;
	int front;
	int interval;
	int middle;

	cin >> N;  

	front = 1; //1씩 증가 N-2까지
	interval = N - 2; //static  
	middle = 2*N-3; // 2씩 감소 1까지   

	//첫줄
	for (int i = 0;i < N;i++) printf("*");
	for (int i = 0;i < middle;i++) printf(" ");
	for (int i = 0;i < N;i++) printf("*");
	printf("\n");

	middle -= 2; 


	//중간 위
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

	
	//중간
	for (int i = 0;i < N-1;i++) printf(" ");
	printf("*");
	for (int i = 0;i < interval;i++) printf(" ");
	printf("*");
	for (int i = 0;i < interval;i++) printf(" ");
	printf("*");
	printf("\n");

	middle = 1;
	front -= 1;
	

	//중간 밑
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


	//맨 밑
	for (int i = 0;i < N;i++) printf("*");
	for (int i = 0;i < middle;i++) printf(" ");
	for (int i = 0;i < N;i++) printf("*");
	//printf("\n");

}



//N에 따른 공백의 규칙을 찾아서 front, interval, middle로 구분함
//한 줄에서 같은 값이 두번 반복된다 생각해서 loop x 2를 돌렸는데 앞의 front 값을 생각 못해서 이상하게 나옴
//front값 빼니까 잘됐음
//근데 출력 형식이 잘못됐다는 오류가 나와서 loop를 아예 빼고 한줄을 loop를 사용하지 않고 출력함 -> 맞음