#include <iostream>

using namespace std;

int getbit(int n, int i){          //bool getBit(int n, int pos) {
    return ((n & (1 << i)) != 0);                  //return ((n & (1 << pos)) != 0);
}

int setbit(int n, int i){
    return(n | (1<<i));
}

int clearbit(int n, int i){
    int mask = ~(1<<i);
    return(n & mask);
}

int togglebit(int n, int i){
    return(n ^ (1<<i));
}

int updatebit(int n, int i, int val){
    int mask = ~(1<<i);
    n = n & mask;
    return(n | (val<<i));
}
int numberOfOnes(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count ++;
    }
    return count;
}

bool ispowerOfTwo(int n){
    return (n && !(n & (n-1)));
}

void subset(int arr[], int n){
    int i, j;
    for(i=0; i<(1<<n); i++){
        for(j=0; j<n; j++){
            if(i & (1<<j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}
void two_unique(int arr[], int n){
    int xorsum=0, i;

    for(i=0; i<n; i++)
        xorsum = xorsum ^ arr[i];
    cout<<xorsum<<endl;
    for(i=0; i<64; i++)
        if(getbit(xorsum, i))
            break;
    cout<<i<<endl;

    int newxor=0, j;
    for(j=0; j<n; j++)
        if(getbit(arr[j], i))
            newxor = newxor ^ arr[j];

    int temp = xorsum ^ newxor;
    cout<<newxor<<" "<<temp;
}

int unique_element(int arr[], int n){
    int xorsum=0, i;
    for(i=0; i<n; i++)
        xorsum = xorsum ^ arr[i];
    return xorsum;
}

int unique_3(int arr[], int n){
    int i, j;
    int ans=0;
    for(i=0; i<4; i++){
        int cnt =0;
        for(j=0; j<n; j++){
            if(getbit(arr[j], i))
                cnt++;
        }
        cnt = cnt%3;
        ans = updatebit(ans, i, cnt);
    }
    return ans;
}b

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    // int arr[] = {2,4,6,8};
    // subset(arr, 4);
    // int a, b;
    // cin >>a >>b;

int arr[] = {1,1,1,2,2,2,3,3,3,4};
    //two_unique(arr, 10);
    cout<<unique_3(arr, 10);
    // cout<< getbit(a, b) << endl;
    // cout<< setbit(a, b) << endl;
    // cout<< clearbit(a, b) << endl;
    // cout<< togglebit(a, b) << endl;
    // cout<< updatebit(a, b, 0) << endl;

    return 0;
}