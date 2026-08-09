#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        
        return {kelvin, fahrenheit};
    }
};

int main() {
    Solution sol;

    // Test Case 1: 36.50 C
    double celsius1 = 36.50;
    vector<double> res1 = sol.convertTemperature(celsius1);
    cout << fixed << setprecision(5);
    cout << "Test Case 1: Kelvin = " << res1[0] << ", Fahrenheit = " << res1[1] 
         << " (Expected: [309.65000, 97.70000])" << endl;

    // Test Case 2: 122.11 C
    double celsius2 = 122.11;
    vector<double> res2 = sol.convertTemperature(celsius2);
    cout << "Test Case 2: Kelvin = " << res2[0] << ", Fahrenheit = " << res2[1] 
         << " (Expected: [395.26000, 251.79800])" << endl;

    return 0;
}