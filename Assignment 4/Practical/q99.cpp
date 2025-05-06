#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class AlgorithmBase {
public:
    virtual void execute() = 0;
    virtual ~AlgorithmBase() {}
};

template <typename T>
class Sorter : public AlgorithmBase {
private:
    vector<T> data;
public:
    Sorter(const vector<T>& input) : data(input) {}

    void execute() override {
        sort(data.begin(), data.end());
        cout << "Sorted data: ";
        for (const T& item : data)
            cout << item << " ";
        cout << endl;
    }
};

template <typename T>
class Searcher : public AlgorithmBase {
private:
    vector<T> data;
    T target;
public:
    Searcher(const vector<T>& input, T t) : data(input), target(t) {}

    void execute() override {
        auto it = find(data.begin(), data.end(), target);
        if (it != data.end())
            cout << "Element " << target << " found at index " << distance(data.begin(), it) << endl;
        else
            cout << "Element " << target << " not found" << endl;
    }
};

int main() {
    vector<int> numbers = {5, 2, 9, 1, 6};
    vector<string> words = {"apple", "banana", "cherry", "date"};

    AlgorithmBase* alg1 = new Sorter<int>(numbers);
    AlgorithmBase* alg2 = new Searcher<int>(numbers, 9);
    AlgorithmBase* alg3 = new Sorter<string>(words);
    AlgorithmBase* alg4 = new Searcher<string>(words, "kiwi");

    alg1->execute();
    alg2->execute();
    alg3->execute();
    alg4->execute();

    delete alg1;
    delete alg2;
    delete alg3;
    delete alg4;

    return 0;
}
