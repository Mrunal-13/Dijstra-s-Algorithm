#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>dis(n+1,inf);
    vector<pair<int,int>>graph[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    int starting;
    cin>>starting;
    dis[starting]=0;
    set<vector<int>> s;
    s.insert({0,starting});
    while(!s.empty())
    {
        cout<<"now the set is:"<<endl;
        for(set< std::vector<int> >::iterator itr=s.begin(); itr!=s.end(); itr++)
        {
            vector<int>v=*itr;
            for(int i=0; i<v.size(); i++)
            {
                 std::cout << v[i]; 
                 cout<<" ";
                 
            }
            cout<<endl;
        }
        auto top= *(s.begin());
        s.erase(top);
        for(vector<pair<int,int>> :: iterator it=graph[top[1]].begin();it!=graph[top[1]].end();it++)
        {

            if(dis[it->first]>dis[top[1]]+it->second)
            {
                s.erase({dis[it->first],it->first});
                dis[it->first]=top[0]+it->second;
                s.insert({dis[it->first],it->first});

            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(dis[i]<inf)
        {
            cout<<"shortest distance of node "<<i<<" from "<<starting<<" is "<<dis[i]<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}