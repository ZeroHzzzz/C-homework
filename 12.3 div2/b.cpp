#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, P, l, t;
        cin >> n >> P >> l >> t;

        int days_rest = 0;
        int points = 0;

        for (int i = 1; i <= n; i++) {
            // Calculate points earned on current day
            int daily_points = (i - 1) * l;

            // Calculate remaining points needed to meet the requirement
            int remaining_points = P - points;

            // Calculate maximum tasks that can be completed on current day
            int max_tasks = min(2, remaining_points / t);

            // Calculate points earned from completing tasks
            int task_points = max_tasks * t;

            // Calculate total points earned on current day
            int total_points = daily_points + task_points;

            // Update total points and check if Monocarp can rest on the current day
            if (total_points >= P) {
                days_rest = n - i + 1;
                break;
            }

            // Update total points for the next iteration
            points += max_tasks * t;
        }

        cout << days_rest << endl;
    }

    return 0;
}
