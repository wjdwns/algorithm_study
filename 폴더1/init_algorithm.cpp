#include <iostream>
#include <list>
#include <vector>
using namespace std;

void findNonConsecutiveRanges(const vector<int>& numbers) {
    int start = numbers[0];
    int end = numbers[0];

    std::cout << "Non-consecutive ranges:" << std::endl;

    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] != end + 1) {
            if (start != end) {
                std::cout << start << "-" << end << std::endl;
            }
            start = numbers[i];
        }
        end = numbers[i];
    }

    if (start != end) {
        std::cout << start << "-" << end << std::endl;
    }
}
int main() {
    vector<int> numbers;
    for()
    findNonConsecutiveRanges(numbers);

    return 0;
}






