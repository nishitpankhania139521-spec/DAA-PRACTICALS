#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of vertices: ";
    cin >> n;

    int graph[10][10];

    cout << "Enter the adjacency matrix:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    int selected[10] = {0};
    int totalCost = 0;

    selected[0] = 1;

    cout << "\nEdges in Minimum Spanning Tree:\n";

    for (int edge = 0; edge < n - 1; edge++)
    {
        int min = INT_MAX;
        int x = 0, y = 0;

        for (int i = 0; i < n; i++)
        {
            if (selected[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if (!selected[j] && graph[i][j] != 0)
                    {
                        if (graph[i][j] < min)
                        {
                            min = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }

        cout << x << " - " << y
             << " : " << graph[x][y] << endl;

        totalCost += graph[x][y];
        selected[y] = 1;
    }

    cout << "\nMinimum Cost = " << totalCost;

    return 0;
}