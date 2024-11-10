#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int AmanSolution(int N, int X) {
    vector<int> digits(N + 1);
    int totalDigits = 0;

    for (int i = 0; i <= N; ++i) {
        digits[i] = (i == 0) ? 1 : (int)(log(i) / log(X)) + 1;
        totalDigits += digits[i];
    }
    return totalDigits;
}

int main(int argc, char *argv[]) {
    int N = atoi(argv[1]);
    int X = atoi(argv[2]);
    cout << AmanSolution(N, X) << "\n";
    return 0;
}