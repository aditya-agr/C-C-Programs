#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

struct edge{
    int src, dest;
};

class graph{
public:
    vector<vector<int>> adjList;

    graph(vector<edge> const &edges, int n){
        adjList.resize(n);
        for(auto &edge: edges){
            adjList[edge.src].push_back(edge.dest);
            adjList[edge.dest].push_back(edge.src);
        }
    }
};

void BFS(graph const &g, int v, vector<bool> &visited){
    queue<int> q;
    visited[v] = true;
    q.push(v);
    while(!q.empty()){
        v = q.front();
        q.pop();
        cout<<v<<" ";
        for(int u: g.adjList[v]){
            if(!visited[u]){
                visited[u] = true;
                q.push(u);
            }
        }
    }
}

void recursiveBFS(graph const &g, queue<int> &q, vector<bool> &visited){
    if(q.empty())
        return;
    int v = q.front();
    q.pop();
    cout<<v<<" ";
    for(int u: g.adjList[v]){
        if(!visited[u]){
            visited[u] = true;
            q.push(u);
        }
    }
    recursiveBFS(g, q, visited);

}

void DFS(graph const &g, int v, vector<bool> &visited){
    stack<int> st;
    st.push(v);

    while(!st.empty()){
        v = st.top();
        st.pop();
        if(visited[v])
            continue;
        visited[v] = true;
        cout<<v<<" ";
        for(auto u: g.adjList[v]){
            if(!visited[u])
                st.push(u);
        }
    }
}

void recursiveDFS(vector<vector<int>> &adjList, int v, vector<bool> &visited, stack<int> &s){
    visited[v] = true;
    for(auto u: adjList[v]){
        if(!visited[u])
            recursiveDFS(adjList, u, visited, s);
    }
    s.push(v);
}
vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
        vector<bool> visited(numCourses, 0);
        stack<int> st;
        vector<vector<int>> adjList(numCourses);

        for(auto &edge: prerequisites)
            adjList[edge[1]].push_back(edge[0]);

        
        for(int i=0; i<numCourses; i++)
            if(!visited[i])
                recursiveDFS(adjList, i, visited, st);


        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return {};
    }

int main()
{
    vector<edge> grp = {{1,2}, {1,3}, {1, 4}, {2, 5}, {2, 6}, {5, 9},
		{5, 10}, {4, 7}, {4, 8}, {7, 11}, {7, 12}};

    int n=15;
    graph g(grp,n);
    queue<int> q;
    vector<bool> visited(n, false);
    // for(int i=0; i<n; i++){
    //     if(visited[i] == false)
    //         q.push(i);
    //         visited[i] = true;
    //         recursiveBFS(g, q, visited);
    // }  
    // for(int i=0; i<n; i++){
    //     if(visited[i] == false)
    //         BFS(g, i, visited);
    // }  
    // for(int i=0; i<n; i++){
    //     if(visited[i] == false)
    //         recursiveDFS(g, i, visited);
    // }  
    for(int i=0; i<n; i++){
        if(visited[i] == false)
            DFS(g, i, visited); 
    }  
    return 0;
}