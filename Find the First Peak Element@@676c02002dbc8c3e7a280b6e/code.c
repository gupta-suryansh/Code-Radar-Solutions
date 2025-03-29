#include<stdio.h>

int peak(int n, int arr[]) {
    // Check for the first element being a peak
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

int main() {
    int n, arr[100];

    // Input number of elements
    scanf("%d", &n);

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the peak element
    int peakElement = peak(n, arr);
    if (peakElement != -1) {
        printf("%d", peakElement);
    } 

    return 0;
}
