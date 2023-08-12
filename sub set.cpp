#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100
void printSubset(int subset[], int size) {
 printf("Subset: { ");
 for (int i = 0; i < size; i++) {
 printf("%d ", subset[i]);
 }
 printf("}\n");
}
void subsetSumUtil(int set[], int n, int targetSum, int subset[], int subsetSize, int currIndex) {
 if (targetSum == 0) {
 printSubset(subset, subsetSize);
 return;
 }
 if (currIndex == n) {
 return;
 }
 subsetSumUtil(set, n, targetSum, subset, subsetSize, currIndex + 1);
 subset[subsetSize] = set[currIndex];
 subsetSumUtil(set, n, targetSum - set[currIndex], subset, subsetSize + 1, currIndex + 1);
}
void subsetSum(int set[], int n, int targetSum) {
 int subset[MAX_SIZE];
 subsetSumUtil(set, n, targetSum, subset, 0, 0);
}
int main() {
 int set[] = { 10, 7, 5, 18, 12, 20, 15 };
 int n = sizeof(set) / sizeof(set[0]);
 int targetSum = 35;
 printf("Input:\n");
 printf("Set: { ");
 for (int i = 0; i < n; i++) {
 printf("%d ", set[i]);
 }
 printf("}\n");
 printf("Target Sum: %d\n", targetSum);
 printf("\nAll subsets with sum %d:\n", targetSum);
 subsetSum(set, n, targetSum);
 return 0;
}

