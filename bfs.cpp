#include "bits/stdc++.h"

using namespace std; 

const int N = 1e5+2; 
bool visited[N]; 
vector<int> adj[N]; 
 
int main() 
{ 
    for(int i=0;i<N; i++)
    { 
        //marking all unvisited at first 
        visited[i] = 0;
    }  
        //inputs
        int n,m; 
        cin >> n >> m;

        int x, y; 
        for(int i = 0;i<m;i++)
        { 
            cin >> x >> y; 

            adj[x].push_back(y); 
            adj[y].push_back(x); 
        }


        queue<int> q; 
        q.push(1); 
        visited[1] = true; 

        while(!q.empty())
        { 
            int node = q.front(); 

            q.pop(); 
            cout << node << endl; 

            vector<int> :: iterator it; 
            for(it = adj[node].begin(); it !=adj[node].end(); it++)
            { 
                if(!visited[*it])
                { 
                    visited[*it] = 1 ;
                    q.push((*it)); 
                }
            }
        }
    
    return 0; 
}
