#include <iostream>
#include <vector>
using namespace std;

int knapsackRec(vector<int>& weight,vector<int>&value,int W, int n)
{
    if (n == 0 || W == 0)
        return 0;

    if (weight[n - 1] > W)
        return knapsackRecursive(weight, value, W, n - 1);

    return max(value[n - 1] + knapsackRecursive(weight, value, W - weight[n - 1], n - 1),knapsackRecursive(weight, value, W, n - 1));
}

int main()
{
    int n, W;

    cout << "Enter number of items: ";
    cin >> n;

    vector<int> weight(n);
    vector<int> value(n);

    cout << "Enter weights of " << n << " items: ";
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    cout << "Enter values of " << n << " items: ";
    for (int i = 0; i < n; i++)
        cin >> value[i];

    cout << "Enter knapsack capacity: ";
    cin >> W;

    int maxValue = knapsackRecursive(weight, value, W, n);

    cout << "Maximum value = " << maxValue << endl;

    return 0;
}