#include <iostream>
using namespace std;

class CDurationSpan {
private:
    int hour;   // Giờ
    int minute; // Phút
    int second; // Giây

public:
    CDurationSpan() : hour(0), minute(0), second(0) {}                     // Constructor mặc định
    CDurationSpan(int h, int m, int s) : hour(h), minute(m), second(s) {} // Constructor tham số

    int ToSeconds() const { // Chuyển thời điểm thành tổng số giây
        return hour * 3600 + minute * 60 + second;
    }

    bool operator<(const CDurationSpan& other) const { // So sánh hai thời điểm
        return this->ToSeconds() < other.ToSeconds();
    }

    friend istream& operator>>(istream& in, CDurationSpan& t) { // Nhập thời điểm
        in >> t.hour >> t.minute >> t.second;
        return in;
    }

    friend ostream& operator<<(ostream& out, const CDurationSpan& t) { // Xuất thời điểm
        out << t.hour << ":" << t.minute << ":" << t.second;
        return out;
    }
};

class CRobot {
private:
    CDurationSpan startTime; // Thời điểm bắt đầu
    CDurationSpan endTime;   // Thời điểm kết thúc

public:
    CRobot() : startTime(), endTime() {} // Constructor mặc định

    void SetActive(const CDurationSpan& t1, const CDurationSpan& t2) { // Nhập thời gian hoạt động
        startTime = t1;
        endTime = t2;
    }

    int TimeElapsed() const { // Tính khoảng thời gian hoạt động
        return endTime.ToSeconds() - startTime.ToSeconds();
    }
};

int main() {
    CDurationSpan t1;               // Thời điểm mặc định 0:0:0
    CDurationSpan t2(23, 55, 15);   // Thời điểm 23:55:15
    CRobot r;                       // Robot

    cin >> t1;
    cin >> t2;

    if (t1 < t2) {
        r.SetActive(t1, t2); // Đặt thời gian hoạt động cho Robot
        cout << "Thoi gian Robot hoat dong la: " << r.TimeElapsed();
    } else {
        cout << "Thie lap thoi gian khong hop le!";
    }
    return 0;
}
