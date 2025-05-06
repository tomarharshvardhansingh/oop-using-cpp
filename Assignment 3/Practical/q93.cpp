#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

    void normalize() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
    }

public:
    Time() {
        hours = minutes = seconds = 0;
    }

    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
        normalize();
    }

    void input() {
        cout << "Enter hours, minutes and seconds: ";
        cin >> hours >> minutes >> seconds;
        normalize();
    }

    void display() {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }

    Time add(Time t) {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;
        result.normalize();
        return result;
    }

    Time subtract(Time t) {
        int total1 = hours * 3600 + minutes * 60 + seconds;
        int total2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
        int diff = abs(total1 - total2);
        Time result;
        result.hours = diff / 3600;
        diff %= 3600;
        result.minutes = diff / 60;
        result.seconds = diff % 60;
        return result;
    }

    void compare(Time t) {
        int total1 = hours * 3600 + minutes * 60 + seconds;
        int total2 = t.hours * 3600 + t.minutes * 60 + t.seconds;

        if (total1 > total2)
            cout << "First time is greater." << endl;
        else if (total1 < total2)
            cout << "Second time is greater." << endl;
        else
            cout << "Both times are equal." << endl;
    }
};

int main() {
    Time t1, t2, sum, diff;

    cout << "Enter first time:" << endl;
    t1.input();

    cout << "Enter second time:" << endl;
    t2.input();

    sum = t1.add(t2);
    diff = t1.subtract(t2);

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    t1.compare(t2);

    return 0;
}
