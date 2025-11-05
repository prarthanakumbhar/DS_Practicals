//BFS
#include <iostream>
#define MAX 10
using namespace std;

int queue[MAX], front = -1, rear = -1, visited[MAX] = {0}, adj[MAX][MAX];

void enqueue(int v) {
    if (rear == MAX - 1) printf("Queue Overflow\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = v;
    }
}

int dequeue() {
    return (front == -1 || front > rear) ? -1 : queue[front++];
}

void bfs(int start, int n) {
    enqueue(start);
    visited[start] = 1;
    printf("\nIndexing pages starting from: %d\n", start);
    while (front <= rear) {
        int v = dequeue();
        printf("Indexed page: %d\n", v);
        for (int i = 0; i < n; i++)
            if (adj[v][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
    }
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
    
    printf("\nEnter seed/start page number: ");
    scanf("%d", &start);
    bfs(start, n);
    return 0;
}
