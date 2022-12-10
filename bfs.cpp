#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[], int V, int s)
{
    bool visitor[V + 1];
    for (int i = 0; i < V; i++)
    {
        visitor[i] = false;
    }
    queue<int> q;
    visitor[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (visitor[v] == false)
            {
                visitor[v] = true;
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
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    bfs(adj, V, 1);
    return 0;
}