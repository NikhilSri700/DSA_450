
#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int *, int, int, int);
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        cout<<kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}

int partition(int a[], int l, int r)
{
    int x = a[r], ind = l;
    for(int j = l; j < r; j++)
    {
        if(a[j] <= x)
        {
            swap(a[j], a[ind]);
            ind++;
        }
    }
    swap(a[ind], a[r]);
    return ind;
}

int randPartition(int a[], int l , int r)
{
    int n = r-l + 1;
    int piv = rand() % n;
    swap(a[l + piv], a[r]);
    return partition(a, l, r);
}

int kthSmallest(int arr[], int l, int r, int k) 
{
    int p = randPartition(arr, l, r);
    if(p-l == k-1)
        return arr[p-l];
    else if(p-l > k-1)
        return kthSmallest(arr, l, p-1, k);
    else
        return kthSmallest(arr, p+1, r, k);
}
