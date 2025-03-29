#include<stdio.h>
int peak(int n,int arr[],int a,int b,int c){
    if (arr[0] > arr[1]) {
        return arr[0];
    }

    // Check for the last element being a peak
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    // Check for the peak in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }

    return -1; // No peak found

}
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int peakElement = peak(n, arr);
    if (peakElement != -1) {
        printf("Peak element: %d\n", peakElement);
    } else {
        printf("No peak element found\n");
    }
    return 0;
}