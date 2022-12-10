#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> arr[], int V, int s)
{
    bool visited[V + 1];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : arr[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int v = 5;
    vector<int> adj[v];
    // addEdge(adj, 0, 1);
    // addEdge(adj, 0, 2);
    // addEdge(adj, 1, 2);
    // addEdge(adj, 2, 3);
    // addEdge(adj, 3, 2);
    // addEdge(adj, 3, 4);
    // addEdge(adj, 2, 4);

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    bfs(adj, 5, 0);
    return 0;
}