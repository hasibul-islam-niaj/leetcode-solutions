class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int minMoves = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int difference = 0;
        for (int i = 0; i<seats.size(); i++) {
            difference = abs(seats[i] - students[i]);
            minMoves += difference;
        }
        return minMoves;
    }
};