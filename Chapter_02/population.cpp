// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.


#include <iostream>
using namespace std;

int main() {
    
    long population = 312032486;

    int secondsPerYear = 365 * 24 * 60 * 60;

    int births = secondsPerYear / 7;
    int deaths = secondsPerYear / 13;
    int immigrants = secondsPerYear / 45;

    for (int year = 1; year <= 5; year++) {
        population = population + births - deaths + immigrants;
        cout << "Year " << year << ": " << population << endl;
    }

    return 0;
}