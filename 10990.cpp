//º°Âï±â 15
#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	int N;
	int front;
	int middle;

	cin >> N;

	front = N - 1;
	middle = 1;

	for (int i = 0;i < front;i++) printf(" ");
	printf("*\n");
	front -= 1;
	


	while (front > -1) {
		for (int i = 0;i < front;i++) printf(" ");
		printf("*");
		for (int i = 0;i < middle;i++) printf(" ");
		printf("*\n");

		front -= 1;
		middle += 2;
	}
}