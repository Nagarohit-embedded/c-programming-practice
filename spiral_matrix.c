#include<stdio.h>
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i;
    int top = 0, bottom = 2, left = 0, right = 2;
    while(top<=bottom && left <=right){
        for(i=left;i<=right;i++){
            printf("%d ",arr[top][i]);
        }
        top++;
        for(i=top;i<=bottom;i++){
            printf("%d ",arr[i][right]);
        }
        right--;
        if(top<=bottom){
        for(i=right;i>=left;i--){
            printf("%d ",arr[bottom][i]);
        }
        bottom--;
    }
    if(left<=right){
        for(i=bottom;i>=top;i--){
            printf("%d ",arr[i][left]);
        }
        left++;
    }
    }
    return 0;
}
