class Solution {
public:
    int maxProduct(int n) {
        int first=n%10;
        n/=10;
        int second=n%10;
        n/=10;
        if(second>first) swap(first,second);
        while(n!=0){
            int r=n%10;
            if(r>first){
                second=first;
                first=r;
            }
            else if (r>second  ){
                second=r;
            }
            n/=10;

        }
        return first*second;
    }
};
