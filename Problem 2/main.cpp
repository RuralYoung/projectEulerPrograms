#include <iostream>

using namespace std;

int main() {
    int total = 2; //Starts at two to compensate for the two at the beginning of the sequence
    int temp;
    int fibSeq1 = 1;
    int fibSeq2 = 2;

    while (fibSeq2 < 4000000) {
        temp = fibSeq2;

        fibSeq2 = fibSeq1 + fibSeq2;
        fibSeq1 = temp;

        if (fibSeq2 % 2 == 0) 
            total += fibSeq2;
    }

    cout << "Your total is: " << total << endl;

    return 0;
}