#include <stdio.h>
#include <stdlib.h>

void stairCaseRight(int n)
{
	int wid =1;
	int w = n-1;
	int s=0;
	for(int i=1; i<=n; i++){
		s = w;
		for (int j=0; j<s; j++){
			printf(" ");
		}
		for(int k=0;k<i;k++){
			printf("#");
		}
		s--;
		
		printf("\n");
	}
	
}

void stairCaseLeft(int n)
{
	int wid =1;
	int w = n-1;
	
	for(int i=0; i<n; i++){
		for (int j=0; j<w; j++){
			printf(" ");
		}
		for(int k=0;k<wid;k++){
			printf("#");
		}
		w--;
		wid++;		
		printf("\n");
	}	
}

int main(int args, char* argv[])
{
	int n;
	scanf("%d", &n);
	// stairCaseRight(n);
	stairCaseLeft(n);
}