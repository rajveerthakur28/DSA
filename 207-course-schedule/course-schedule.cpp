class Solution {
private: 
    bool dsf(int node ,vector<vector<int>>& adj,vector<int>& vis,vector<int>& visPath){

        vis[node] =1;
        visPath[node] =1;

        for(auto it : adj[node]){
            if(!vis[it]){
               if(dsf(it, adj, vis, visPath)){
                return true;
               }
            }
            else if(visPath[it]){
                return true;
            }
        }

        visPath[node] =0;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);

        for(auto &p : prerequisites){
            adj[p[1]].push_back(p[0]);
        }

        vector<int> vis(numCourses, 0);
        vector<int> visPath(numCourses, 0);

        for(int i = 0; i<numCourses; i++){
            if(!vis[i]){
                if(dsf(i, adj, vis, visPath)){
                        return false;
                }
            }
        }
        
        return true;

        
    }
};