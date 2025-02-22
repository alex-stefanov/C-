#include <iostream>
#include <iomanip>

int main() {
    const double LATENCY_IN_SECONDS_PER_15_METERS = 12.5;
    double recordInSeconds, distanceInMeters, metersPerSecond;

    std::cin >> recordInSeconds >> distanceInMeters >> metersPerSecond;

    double totalTime = distanceInMeters * metersPerSecond;
    int delayCount = distanceInMeters / 15;
    double totalDelay = delayCount * LATENCY_IN_SECONDS_PER_15_METERS;

    totalTime += totalDelay;

    std::cout << std::fixed << std::setprecision(2);

    if (totalTime < recordInSeconds) {
        std::cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << std::endl;
    } else {
        double timeDifference = totalTime - recordInSeconds;
        std::cout << "No, he failed! He was " << timeDifference << " seconds slower." << std::endl;
    }

    return 0;
}