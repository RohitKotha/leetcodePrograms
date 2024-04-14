

using namespace std;

class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
     
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        
        vector<int> v1;
        int n = points.size();
        int start = points[0][0]; // Starting x-coordinate of the current segment
        
       
        for (int i = 0; i < n; ++i) {
         
            if (points[i][0] - start > w) {
                v1.push_back(i - 1); 
                start = points[i][0]; 
            }
        }
        
       
        if (n > 0)
            v1.push_back(n - 1);
        
       
        return v1.size();
    }
};
