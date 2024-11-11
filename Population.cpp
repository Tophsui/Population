#include <iostream>
#include <iomanip>  // for std::setprecision

int main() {
    int startSize;
    double dailyIncrease;
    int days;

    // Input: starting number of organisms
    do {
        std::cout << "Enter the starting number of organisms (minimum 2): ";
        std::cin >> startSize;
        if (startSize < 2) {
            std::cout << "Error: Starting size must be at least 2.\n";
        }
    } while (startSize < 2);

    // Input: average daily population increase as a percentage
    do {
        std::cout << "Enter the average daily population increase (percentage, e.g., 10 for 10%): ";
        std::cin >> dailyIncrease;
        if (dailyIncrease < 0) {
            std::cout << "Error: Daily increase cannot be negative.\n";
        }
    } while (dailyIncrease < 0);

    // Input: number of days the organisms will multiply
    do {
        std::cout << "Enter the number of days they will multiply (minimum 1): ";
        std::cin >> days;
        if (days < 1) {
            std::cout << "Error: Number of days must be at least 1.\n";
        }
    } while (days < 1);

    // Calculate and display population size for each day
    double population = startSize;
    std::cout << "\nDay\tPopulation Size\n";
    std::cout << "-----------------------\n";

    for (int day = 1; day <= days; ++day) {
        std::cout << day << "\t" << std::fixed << std::setprecision(2) << population << "\n";
        population += population * (dailyIncrease / 100);
    }

    return 0;
}
