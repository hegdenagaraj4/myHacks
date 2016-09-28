#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, sum_left=0, sum_right=0; 
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    int a_i=0;
    for(int a_j = 0; a_j < n; a_j++){
        if(a_i==a_j){
            sum_left = sum_left + a[a_i][a_j];   
        }       
        a_i++;           
    }
    
    a_i=0;
    for(int a_j=n-1; a_j>=0; a_j--){
        sum_right = sum_right + a[a_i][a_j];
        a_i++;
    }
    
    if(sum_right > sum_left){
        printf("%d\n",sum_right-sum_left);
    } else{
        printf("%d\n",sum_left-sum_right);
    }
    return 0;
}