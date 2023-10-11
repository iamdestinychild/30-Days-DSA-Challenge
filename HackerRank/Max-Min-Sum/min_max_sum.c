#include<stdio.h>

int main(){
    int len,i,j;
    printf("Enter the max length of array:\n");
    scanf("%d",&len);
    int a[len]; //initialising array a[] having lenght len
    for(i=0; i<len; i++){
        scanf("%d", &a[i]); 
    }

    for(i=0; i<len-1; i++){
        for(j=0; j<len-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
for(j=0; j<len; j++){ //sorted array using binary search
    printf("%d\n", a[j]);
}

    int max_sum=0;
    for(j=len-1; j>=len-4; j--){
        max_sum+=a[j];
    }
    
    int min_sum=0;
    for(j=0; j<4; j++){
        min_sum+=a[j];
    }

    printf("%d %d", min_sum,max_sum);

    return 0;
}
