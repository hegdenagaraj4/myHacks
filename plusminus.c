#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void plusMinus(int arr[], int n)
{
	double pos=0,neg=0,zero=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			pos++;
		}
		if(arr[i]<0){
			neg++;
		}
		if(arr[i]==0){
			zero++;
		}
	}
	printf("%5f\n",(pos/n));
	printf("%5f\n",(neg/n));
	printf("%5f\n",(zero/n));
}

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    plusMinus(arr,n);
    return 0;
}
