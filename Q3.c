#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    average = (float)sum / n;
    printf("The average is: %f", average);
    return 0;
}