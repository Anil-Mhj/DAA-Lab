// c program to implement floyd warshall algorithm
#include <stdio.h>

#define INF 999

void floydWarshall(int graph[10][10], int n)
{
    int i, j, k;
    int dist[10][10];

    // Initialize distance matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            dist[i][j] = graph[i][j];
        }
    }

    // Floyd–Warshall algorithm
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Print shortest distance matrix
    printf("\nShortest Distance Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", dist[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, i, j;
    int graph[10][10];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }
    floydWarshall(graph, n);
    return 0;
}