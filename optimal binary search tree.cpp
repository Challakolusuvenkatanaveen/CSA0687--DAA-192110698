#include <stdio.h>
#include <limits.h>
int optimalBST(int keys[], int freq[], int n) {
 int dp[n + 1][n + 1];
 for (int i = 0; i < n; i++) {
 dp[i][i] = freq[i];
 }
 for (int L = 2; L <= n; L++) {
 for (int i = 0; i <= n - L + 1; i++) {
 int j = i + L - 1;
 dp[i][j] = INT_MAX;
 int sum = 0;
 for (int k = i; k <= j; k++) {
 sum += freq[k];
 }
 for (int k = i; k <= j; k++) {
 int cost = ((k > i) ? dp[i][k - 1] : 0) +
 ((k < j) ? dp[k + 1][j] : 0) + sum;
 if (cost < dp[i][j]) {
 dp[i][j] = cost;
 }
 }
 }
 }
 return dp[0][n - 1];
}
int main() {
 int n;
 printf("Enter the number of keys: ");
 scanf("%d", &n);
 int keys[n], freq[n];
 printf("Enter the keys: ");
 for (int i = 0; i < n; i++) {
 scanf("%d", &keys[i]);
 }
 printf("Enter the frequencies: ");
 for (int i = 0; i < n; i++) {
 scanf("%d", &freq[i]);
 }
 int optimalCost = optimalBST(keys, freq, n);
 printf("Optimal cost of binary search tree is: %d\n", optimalCost);
return 0;
}
