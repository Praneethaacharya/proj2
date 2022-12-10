#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printGraph(vector<int> adj[], int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int s : adj[i])
        {
            cout << s << " ";
        }
        cout << endl;
    }
}

void addEdge(vector<int> adj[], int v, int u)
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
    printGraph(adj, V);
    return 0;
}
