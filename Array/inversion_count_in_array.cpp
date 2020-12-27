#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll merge(ll a[], ll l[], ll r[], ll sl, ll sr)
{
    ll i = 0, j = 0, k = 0, c = 0;
    while(i < sl && j < sr)
    {
        if(l[i] <= r[j])
        {
            a[k++] = l[i++];
        }
        else
        {
            a[k++] = r[j++];
            c += (sl-i);
        }
    }
    while(i < sl)
        a[k++] = l[i++];
    while(j < sr)
        a[k++] = r[j++];
    return c;
}

ll mergesort(long long arr[], long long n)
{
    ll cnt = 0;
    if(n > 1)
    {
        ll mid = n/2;
        ll *left = new ll[mid];
        ll *right = new ll[n-mid];
        int j = 0;
        for(int i = 0; i < mid; i++)
            left[i] = arr[j++];
        for(int i = 0; i < (n-mid); i++)
            right[i] = arr[j++];
        cnt += mergesort(left, mid);
        cnt += mergesort(right, n-mid);
        cnt += merge(arr, left, right, mid, n-mid);
    }
    return cnt;
}

long long int inversionCount(long long arr[], long long N)
{
    return mergesort(arr, N);
}

int main() 
{
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        
        cout << inversionCount(A,N) << endl;
    }
    
    return 0;
}