#include <cmath>
#include <iostream>
#include <map>
using namespace std;

class Calculator {
   private:
    double x, y;
    string cal;

   public:
    Calculator(double x, string c, double y) {
        this->x = x;
        cal = c;
        this->y = y;
    }
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double mul(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return -1;
        }
        return a / b;
    }
    double squareRoot(double x) {
        if (x < 0) {
            cout << "Error: Square root of negative number!" << endl;
            return -1;  // 返回不是一个数字
        }
        return sqrt(x);
    }

    // 常用对数
    double commonLog(double x) { return log10(x); }

    // 自然对数
    double naturalLog(double x) { return log(x); }

    // 幂
    double power(double base, double exponent) { return pow(base, exponent); }

    // 正弦
    double sine(double angle) { return sin(angle); }

    // 余弦
    double cosine(double angle) { return cos(angle); }
};

int main() {
    map<string, double (Calculator::*)(double, double)>
        doubleFunctionMap_couple;
    map<string, double (Calculator::*)(double)> doubleFunctionMap_single;

    doubleFunctionMap_couple["+"] = &Calculator::add;
    doubleFunctionMap_couple["-"] = &Calculator::subtract;
    doubleFunctionMap_couple["*"] = &Calculator::mul;
    doubleFunctionMap_couple["/"] = &Calculator::divide;
    doubleFunctionMap_couple["^"] = &Calculator::power;

    doubleFunctionMap_single["sqrt"] = &Calculator::squareRoot;
    doubleFunctionMap_single["Log10"] = &Calculator::commonLog;
    doubleFunctionMap_single["Ln"] = &Calculator::naturalLog;

    doubleFunctionMap_single["sin"] = &Calculator::sine;
    doubleFunctionMap_single["cos"] = &Calculator::cosine;

    double a, b;
    string cal;
    cin >> a >> cal >> b;

    Calculator calc(a, cal, b);

    if (doubleFunctionMap_single.find(cal) != doubleFunctionMap_single.end()) {
        cout << (calc.*(doubleFunctionMap_single[cal]))(a) << endl;
    } else if (doubleFunctionMap_couple.find(cal) !=
               doubleFunctionMap_couple.end()) {
        cout << (calc.*(doubleFunctionMap_couple[cal]))(a, b) << endl;
    } else {
        cout << "Unknown operation!" << endl;
    }

    return 0;
}
