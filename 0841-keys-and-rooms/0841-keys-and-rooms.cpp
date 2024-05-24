class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>visited(n,0);
        stack<int>st;
        for(int i=0;i<rooms[0].size();i++){
            st.push(rooms[0][i]);
        }
        visited[0]=1;
        while(!st.empty()){
            int a=st.top();
            st.pop();
        
                if(visited[a]==0){
                    visited[a]=1;
                    for(int key:rooms[a]){
                        if(visited[key]==0)
                            st.push(key);
                    }
                }      
        }
        for(int v : visited) {
            if (v == 0) return false;
        }
        return true;
    }
};