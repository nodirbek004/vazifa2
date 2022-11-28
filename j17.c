#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    void rand_num(int nums[], int n){
        for(int i=0;i<n;i++){
            nums[i]=-4+rand()%25;
        }
    }
    void toldir(int nums[], int n ){
        for(int i=0;i<n;i++){
            printf("%d ",nums[i]);
        }
    }
    void hisob(int nums[], int n){
        int sum=1;

        for(int i=n-1;i>=0;i--){
            if(nums[i]<0){
                break;
            }
            else if(nums[i]>0){
                sum*=nums[i];
            }
        }
        printf("%d",sum);
    }
    int main(){
        srand(time(NULL));
    int n;
    printf("son kiriting"); scanf("%d",&n);
    int nums[n];
    rand_num(nums,n);
    toldir(nums,n);
    hisob(nums,n);




    return 0;
}