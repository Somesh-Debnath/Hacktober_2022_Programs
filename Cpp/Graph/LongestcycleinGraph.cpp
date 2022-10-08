//Q : Length of Longest Cycle in a Graph

/*You are given a directed graph of n nodes numbered from 0 to n - 1, where each node has at most one outgoing edge.
The graph is represented with a given 0-indexed array edges of size n, indicating that there is a directed edge from node i to node edges[i]. If there is no outgoing edge from node i, then edges[i] == -1.
Return the length of the longest cycle in the graph. If no cycle exists, return -1*/

//Leetcode problem link : https://leetcode.com/problems/longest-cycle-in-a-graph/

#include<bits/stdc++.h>
using namespace std;

int longestCycle(vector<int>& edges) 
{
        int n=edges.size();
        vector<bool> vis(n,false);
        int anslen=-1,g;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {

                unordered_map<int,int> mp;
                vis[i]=true;
                mp[i]=1;
                g=1;
                while(edges[i]!=-1)
                {
                    i=edges[i];
                   // cout<<i<<"@";
                    if(vis[i])
                    {
                        if(mp.find(i)==mp.end())break;
                        anslen=max(anslen,g-mp[i]+1);break;
                    }
                    else
                    {
                        g++;
                        vis[i]=true;
                        mp[i]=g;
                    }
                }
            }
        }
        return anslen;
}
int main()
{
    int n; //number of nodes
    vector<int> edges; //edge from node i to node edges[i]
    cin>>n;
    int t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        edges.push_back(t);
    }
    //cout<<edges[0];
    cout<<"Length of the longest cycle is : "<<longestCycle(edges)<<"\n";
    return 0;
}
