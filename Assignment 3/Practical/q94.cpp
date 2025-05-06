#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class BigNumber {
private:
    string number;

    string addStrings(string a, string b) {
        if (a.length() < b.length()) swap(a, b);

        string result = "";
        int carry = 0, diff = a.length() - b.length();

        for (int i = b.length() - 1; i >= 0; i--) {
            int sum = (a[i + diff] - '0') + (b[i] - '0') + carry;
            carry = sum / 10;
            result += (sum % 10 + '0');
        }

        for (int i = diff - 1; i >= 0; i--) {
            int sum = (a[i] - '0') + carry;
            carry = sum / 10;
            result += (sum % 10 + '0');
        }

        if (carry) result += (carry + '0');
        reverse(result.begin(), result.end());
        return result;
    }

public:
    BigNumber(string num = "0") {
        number = num;
    }

    BigNumber add(BigNumber b) {
        return BigNumber(addStrings(number, b.number));
    }

    void show() {
        cout << number << endl;
    }
};

int main() {
    BigNumber n1("123456789123456789");
    BigNumber n2("987654321987654321");

    BigNumber result = n1.add(n2);

    cout << "Sum = ";
    result.show();

    return 0;
}
