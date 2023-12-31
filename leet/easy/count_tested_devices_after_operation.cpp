#include <iostream>
#include <vector>

int countTestedDevices(std::vector<int> &);

int main(int argc, char *argv[]) {
    std::vector<int> a = {1, 1, 2, 1, 3};
    std::cout << countTestedDevices(a) << std::endl;
}

int countTestedDevices(std::vector<int> &batteryPercentages) {
    int tested_devices = 0;
    for (int i = 0; i < batteryPercentages.size(); i++) {
        if (batteryPercentages[i] > 0) {
            tested_devices++;
            for (int j = i + 1; j < batteryPercentages.size(); j++) {
                if (batteryPercentages[j] > 0) {
                    batteryPercentages[j]--;
                }
            }
        } else
            continue;
    }
    return tested_devices;
}
