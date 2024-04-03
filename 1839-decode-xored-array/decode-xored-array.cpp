class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>v1;
        v1.push_back(first);
        for(int i=0;i<encoded.size();i++){
            v1.push_back(v1.back()^encoded[i]);
        }
        return v1;
    }
};