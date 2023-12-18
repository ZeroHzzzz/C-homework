#include<iostream>
#include <string.h>
using namespace std;

const int N = 5;

struct Course {
    char Course_Name[20];
    float Course_Score;
};

struct Student {
    char name[20];
    Course score[3];
};

void find(Student array[], int n, char* cour, char* name, float* score) {
    int i, j;
    for (j = 0; j < 3; j++)
        if (strcmp(cour, array[0].score[j].Course_Name) == 0) break;

    *score = array[0].score[j].Course_Score;
    strcpy(name, array[0].name);

    for (i = 1; i < n; i++) {
        if (array[i].score[j].Course_Score > *score) {
            *score = array[i].score[j].Course_Score;
            strcpy(name, array[i].name);
        }
    }
}

int main() {
    Student array[N];
    char coursename[20];
    char name[20];
    float score;

    for (int i = 0; i < N; i++) {
        cin >> array[i].name;
        for (int j = 0; j < 3; j++) {
            cin >> array[i].score[j].Course_Name >> array[i].score[j].Course_Score;
        }
    }

    cin >> coursename;
    find(array, N, coursename, name, &score);
    cout << name << " " << score << endl;

    return 0;
}
