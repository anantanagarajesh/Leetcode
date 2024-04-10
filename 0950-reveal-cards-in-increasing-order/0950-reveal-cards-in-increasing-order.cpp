class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int> ans(deck.size());
        deque<int> indices;
        
        int n=deck.size();
        
        
        for(int i=0;i<n;i++){
            indices.push_back(i);
        }
        
        for(int card:deck){
            int index=indices.front();
            indices.pop_front();
            ans[index]=card;
            if(!indices.empty()){
                indices.push_back(indices.front());
                indices.pop_front();
            }
        }
        return ans;
    }
};