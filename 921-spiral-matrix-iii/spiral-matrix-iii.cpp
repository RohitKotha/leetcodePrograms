class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>>v1;
        v1.push_back({0,1});
        v1.push_back({1,0});
        v1.push_back({0,-1});
        v1.push_back({-1,0});
        vector<vector<int>>res;
        res.push_back({rStart,cStart});
        int dir=0;
        int steps=0;
        while(res.size()<rows*cols){

            if(dir==0 or dir==2){
                steps++;
            }

            for(int i=0;i<steps;i++){
                rStart+=v1[dir][0];
                cStart+=v1[dir][1];
                if(rStart>=0 and rStart<rows and cStart>=0 and cStart<cols){
                    res.push_back({rStart,cStart});
                }
               
            }
 dir=(dir+1)%4;
        }
        return res;
    }
};