class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin,fashrenheit;
        kelvin = celsius + 273.15;
        fashrenheit = celsius*1.80 + 32.00;
        return {kelvin,fashrenheit};
    }
};