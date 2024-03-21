#include <iostream>
using namespace std;

class CDateInfo {
   private:
    int year;
    int month;
    int day;

   public:
    // 无参数构造函数
    CDateInfo() {
        year = 2024;
        month = 3;
        day = 21;
        cout << "无参构造函数被调用" << endl;
    }

    // 带参数构造函数
    CDateInfo(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
        cout << "有参构造函数被调用" << endl;
    }

    // 设置日期
    void setDate(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }

    // 获取日期并输出
    void getDate() {
        cout << "当前日期为：" << year << "-" << month << "-" << day << endl;
    }

    // 析构函数
    ~CDateInfo() { cout << "析构函数被调用" << endl; }
};

int main() {
    // 使用无参数构造函数创建对象
    CDateInfo date1;
    date1.getDate();  // 输出日期

    // 使用带参数构造函数创建对象
    CDateInfo date2(2023, 4, 15);
    date2.getDate();  // 输出日期

    // 使用成员函数设置日期
    date1.setDate(2025, 6, 8);
    date1.getDate();  // 输出日期

    return 0;
}
