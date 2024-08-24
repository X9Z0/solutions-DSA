class Solution
{
private:
    void dfsTraversal(int node,int vis[], vector<int> adj[],int V){
        vis[node] = 1;
        for(auto adjNode: adj[node]){
            if(!vis[adjNode]){
                dfsTraversal(adjNode,vis,adj,V);
            }
        }

    }
public:
    int numProvinces(vector<vector<int>> adj) {
        int V = adj.size();
        vector<int> adjM[V];
        int count = 0;
        for(int i = 0; i< V;i++){
            for(int j = 0; j< V;j++){
                if(adj[i][j] == 1 && i != j){
                    adjM[i].push_back(j);
                }
            }
        }
        int vis[V] = {0};
        for(int i = 0; i< V; i++){
            if(!vis[i]){
                count++;
                dfsTraversal(i,vis,adjM,V);
            }
        }
        return count;
    }
};
