//º°Âï±â 20
#include<iostream>

using namespace std;

int main() {
	int N;
	
	int k = 1;
	
	cin >> N;
	for (int i = 0;i < N;i++) 
	{
		if (k % 2 == 0)
		{
			printf(" ");
		}

		for (int j = 0;j < N;j++)
		{
			printf("* ");
		}
		printf("\n");
		
		k++;
	}

}