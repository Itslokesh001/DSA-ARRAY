class Solution {
    int productdigit(int n){
        int product=1;
        while(n!=0){
            int r=n%10;
            product*=r;
            n/=10;


        }
        return product;
    }
public:
    int smallestNumber(int n, int t) {
        int x=n;
        for(int i=0;i<11;i++){
            if(productdigit(x+i)%t==0) return x+i;
        }
        return n;
    }
};
