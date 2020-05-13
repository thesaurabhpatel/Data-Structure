#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[], int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printgraph(vector<int> adj[], int n) //N is number of Vertices
{
    for(int v=0;v<n;v++)
    {
        cout<<"\n Adjacnecy list of Vertex"<<v<<"\n head";
         
         for(auto x:adj[v])
         {
             cout<<"->"<<x;
         } 
         cout<<endl;
    }
}

int main()
{
    int n=5;
    vector<int> adj[n];
    addedge(adj,0,1);
    addedge(adj,0,4);
    addedge(adj,1,2);
    addedge(adj,1,3);
    addedge(adj,1,4);
    addedge(adj,2,3);
    addedge(adj,3,4);
    printgraph(adj,n);
    return 0;
}