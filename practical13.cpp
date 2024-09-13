#include <stdio.h>
int main() {
int n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements of the array:\n");
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Selection sort algorithm implementation
for(int i=0;i<n-1;i++){
int minIndex = i;
for(int j=i+1;j<n;j++){
if (arr[j] < arr[minIndex]) {
minIndex = j;
}
}
if (minIndex != i) { // Swap only if necessary
int temp = arr[minIndex];
arr[minIndex] = arr[i];
arr[i] = temp;
}
}
printf("Sorted array: \n");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}