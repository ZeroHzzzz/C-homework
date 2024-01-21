// #include<iostream>
// #include<cstdio>

// using namespace std;
// char s[10010];
// char f;
// int n;
// bool flag = false;
// void loc(int l, int r){
//     // cout<<l<<" "<<r<<endl;
//     // cout<<s[3]<<endl;
//     // return;
//     if(flag == true) return;
//     if(l == r){
//         if(s[l] == f){
//             cout<<l<<endl;
//             flag = true;
//             return;
//         }
//         return;
//     }
//     int mid = (l + r) / 2;
//     loc(l, mid);
//     loc(mid+1, r);
// }
// int main(){
//     cin>>n;
//     for(int i=1;i<=n;i++) cin>>s[n-i+1];
//     cin>>f;
//     loc(1,n);
//     return 0;
// }

#include <iostream>
#include <vector>

int findLastOccurrence(std::vector<char>& sequence, char x) {
    for (int i = sequence.size() - 1; i >= 0; --i) {
        if (sequence[i] == x) {
            return sequence.size() - i;
        }
    }
    return 0;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<char> sequence(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> sequence[i];
    }

    char x;
    std::cin >> x;

    int result = findLastOccurrence(sequence, x);

    std::cout << result << std::endl;

    return 0;
}
