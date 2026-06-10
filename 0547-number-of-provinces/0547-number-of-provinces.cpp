class Solution {
private:
    void dfs(int node, vector<vector<int>>& isConnected, vector<int>& vis) {
        vis[node] = 1;
        
  
        for (int neighbor = 0; neighbor < isConnected.size(); neighbor++) {
           
            if (isConnected[node][neighbor] == 1 && !vis[neighbor]) {
                dfs(neighbor, isConnected, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n, 0); 
        int cnt = 0;           
        
        for (int i = 0; i < n; i++) {
            
            if (!vis[i]) {
                cnt++;
                dfs(i, isConnected, vis); 
            }
        }
        return cnt;
    }
};
