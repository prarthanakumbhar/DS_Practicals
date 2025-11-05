//DFS
#include <iostream>
#define MAX 10
using namespace std;

int adj[MAX][MAX], visited[MAX];

void dfs(int v, int n) {
    visited[v] = 1;
    printf("\n Indexed page: %d", v);
    for (int i = 0; i < n; i++)
        if (adj[v][i] && !visited[i])
            dfs(i, n);
}

int main() {
    int n, e, from, to, start;
    printf("Enter number of web pages (max 10): ");
    scanf("%d", &n);
    printf("\nEnter number of hyperlinks: ");
    scanf("%d", &e);
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = 0;
    
    printf("\nEnter links (from to):\n");
    for (int i = 0; i < e; i++) {
        scanf("%d %d", &from, &to);
        adj[from][to] = 1;
    }
    
    printf("\nEnter seed (start) page number: ");
    scanf("%d", &start);
    printf("\n\nStarting DFS web crawling from page: %d\n", start);
    dfs(start, n);
    return 0;
}
