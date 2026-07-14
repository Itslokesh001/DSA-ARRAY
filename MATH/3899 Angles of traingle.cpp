#include<cmath>
class Solution {
    double findangle(double a){
        return acos(a);
    }
    
public:
    vector<double> internalAngles(vector<int>& sides) {
        const double pi=3.14159265358979323846;
        vector<double>ans(3);
        sort(sides.begin(),sides.end());
        if(sides[0]+sides[1]<=sides[2]) return {};
        double angleA=(1.0*sides[0]*sides[0] +1.0*sides[1]*sides[1]-1.0*sides[2]*sides[2])/(2.0*sides[0]*sides[1]);
        double A=findangle(angleA);
        A=(A*180.0)/pi;
        ans[0]=A;
        double angleB=(1.0*sides[1]*sides[1] +1.0*sides[2]*sides[2]-1.0*sides[0]*sides[0])/(2.0*sides[1]*sides[2]);
        double B=findangle(angleB);
        B=(B*180.0)/pi;
        ans[1]=B;
        double C=180.0-(A+B);
        ans[2]=C;
        
        
sort(ans.begin(),ans.end());;
        return ans;

    }
};
