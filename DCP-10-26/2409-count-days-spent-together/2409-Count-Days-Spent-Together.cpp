class Solution {
private:
    int dateKey(const string& date) {
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        return month * 100 + day;
    }

public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        int aStart = dateKey(arriveAlice);
        int aEnd = dateKey(leaveAlice);
        int bStart = dateKey(arriveBob);
        int bEnd = dateKey(leaveBob);

        const int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int answer = 0;
        for (int month = 1; month <= 12; ++month) {
        for (int day = 1; day <= daysInMonth[month - 1]; ++day) 
        {
             int current = month * 100 + day;
                if (aStart <= current && current <= aEnd && bStart <= current &&
                    current <= bEnd) {
                    ++answer;
                }
            }
        }

        return answer;
    }
};