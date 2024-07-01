#include <bits/stdc++.h>
#define int long long
using namespace std;
 
const int MAX_N = 2e5 + 121;
int n;
int a[MAX_N];
int element;
int cnt;
 
main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    cin >> n;
    if(n == 1)return cout << 1 << endl, 0;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
 
    sort(a + 1, a + n + 1);
    element = a[1];
    cnt = 1;
    int mx_cnt = 0, cnt_answer = 0;
    for(int i = 2; i <= n; ++i){
        if(a[i] > element){
            if(cnt > mx_cnt){
                mx_cnt = cnt;
                cnt_answer = 1;
            }else
            if(cnt == mx_cnt){
                ++cnt_answer;
            }
            cnt = 1;
            element = a[i];
        }else ++cnt;
    }
 
    if(cnt > mx_cnt){
        mx_cnt = cnt;
        cnt_answer = 1;
    }else
    if(cnt == mx_cnt){
        ++cnt_answer;
    }
 
    cout << cnt_answer << '\n';
 
	return 0;
}