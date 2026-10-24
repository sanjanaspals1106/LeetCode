class Solution {
private:
    const vector<int> daysInMonths = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int dateToDayOfYear(const string dateStr) {
        int month = stoi(dateStr.substr(0, 2));
        int day = stoi(dateStr.substr(3, 2));
        
        int totalDays = day;
        for (int i = 0; i < month - 1; ++i) {
            totalDays += daysInMonths[i];
        }
        return totalDays;
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int startA = dateToDayOfYear(arriveAlice);
        int endA = dateToDayOfYear(leaveAlice);
        int startB = dateToDayOfYear(arriveBob);
        int endB = dateToDayOfYear(leaveBob);
        
        int overlapStart = std::max(startA, startB);
        int overlapEnd = std::min(endA, endB);
        
        return std::max(0, overlapEnd - overlapStart + 1);
        
    }
};