class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        // just print the topo sort if all indegree at the end are zero
        
        vector<int>indegree(numCourses, 0);
        vector<int>adj[numCourses];
        vector<int>ans;
        for(auto it : prerequisites){
            adj[it[1]].push_back(it[0]); // created graph
            indegree[it[0]]++; // created indegree array
        }
        queue<int>q;
        for(int i = 0; i < numCourses; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int top = q.front();
            ans.push_back(top);
            q.pop();
            for(auto it : adj[top]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        for(int i = 0; i < numCourses; i++){
            if(indegree[i] != 0){
                vector<int> dummy;
                return dummy;
            }
        }
        return ans;
    }
};
