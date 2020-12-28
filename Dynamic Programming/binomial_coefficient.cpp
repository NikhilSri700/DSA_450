const long long int m = 1e9+7;
int LRU[1001][801];
class Solution{
public:
    int nCr(int n, int r){
        if(r > n)
            return LRU[n][r];
        if(n == r || r == 0)
            return 1;
        if(LRU[n][r] != 0)
            return LRU[n][r];
        LRU[n][r] = ((nCr(n-1, r)%m) + (nCr(n-1, r-1)%m))%m;
            return LRU[n][r];
    }
};
