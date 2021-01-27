//Manish Athreya
//1BG19CS052
//ayerhtahsinam@gmail.com
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
    int n, i = 0, j, k, total = 0, maximum = 0, max_index = 0;
    int arr[50][50], a[10];
    printf("Enter the value of n:>>>");
    scanf("%d",&n);

    for(i = 0;i<n;i++){
        for(j = 0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0;i<n;i++){
        for(j = 0;j<n;j++){
            if (arr[j][i] == 0){
                total = total + 1;
            }
        }
        a[i] = total;
        total = 0;
    }

    maximum = a[0];
    for(k = 0;k<n;k++){
        if (a[k] > maximum){
            maximum = a[k];
            max_index = k;
        }
    }
    printf("The maximum no. of zeros are in index %d",max_index);
}