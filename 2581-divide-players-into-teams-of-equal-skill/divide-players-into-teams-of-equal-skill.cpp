class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        vector<int>v1;
        for(int i=0;i<skill.size();i++){
            v1.push_back(skill[i]);
        }
        sort(begin(skill),end(skill));
        sort(begin(v1),end(v1));
        reverse(begin(v1),end(v1));
        long long n=skill.size();
        long long sum=v1[0]+skill[0];
        long long ans=0;
        for(int i=0;i<n/2;i++){
            if(sum!=v1[i]+skill[i]){
                return -1;
            }
            ans+=(v1[i]*skill[i]);
        }
        return ans;
    }
};