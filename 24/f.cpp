// #include<iostream>
// #include<algorithm>
// #include<cstdio>
// using namespace std;
// struct node{
//     string name;
//     double score;
//     string num;
//     int l;
// }mp[200];
// int main(){
//     int n;
//     cin>>n;
//     double ans = 0.0;
//     for(int i=1;i<=n;i++){
//         cin>>mp[i].num>>mp[i].name>>mp[i].score;
//         ans += mp[i].score;
//     }
//     double avg = ans / n;
//     printf("%.2lf\n", avg);
//     int tmp = 0;
//     for(int i=1;i<=n;i++){
//         if(mp[i].score <  avg) {
//             cout<<mp[i].name<<" "<<mp[i].num<<endl;
//             tmp ++;
//         }
//         if(tmp == 2) break;
//     }
//     return 0;
// }
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct Student {
    string id;
    string name;
    int score;
};

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);

    // Input student information
    for (int i = 0; i < N; ++i) {
        cin >> students[i].id >> students[i].name >> students[i].score;
    }

    // Calculate average score
    double average = 0.0;
    for (const Student &student : students) {
        average += student.score;
    }
    average /= N;

    // Output average score with 2 decimal places
    cout << fixed << setprecision(2) << average << endl;

    // Output students below average
    for (const Student &student : students) {
        if (student.score < average) {
            cout << student.name << " " << student.id << endl;
        }
    }

    return 0;
}
