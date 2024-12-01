#include <iostream>
#include <string>
using namespace std;

// Lớp cơ sở trừu tượng
class Device {
protected:
    bool isOn; // Trạng thái thiết bị (bật/tắt)
public:
    Device() : isOn(false) {} // Constructor mặc định

    // Phương thức thuần ảo: Bật thiết bị
    virtual void turnOn() = 0;

    // Phương thức thuần ảo: Tắt thiết bị
    virtual void turnOff() = 0;

    // Phương thức hiển thị trạng thái
    virtual void displayStatus() const = 0;

    // Destructor ảo
    virtual ~Device() {}
};

// Lớp dẫn xuất: Tivi
class TV : public Device {
public:
    void turnOn() override {
        isOn = true;
        cout << "TV is now ON." << endl;
    }

    void turnOff() override {
        isOn = false;
        cout << "TV is now OFF." << endl;
    }

    void displayStatus() const override {
        cout << "TV status: " << (isOn ? "ON" : "OFF") << endl;
    }
};

// Lớp dẫn xuất: Máy lạnh
class AirConditioner : public Device {
public:
    void turnOn() override {
        isOn = true;
        cout << "Air Conditioner is now ON." << endl;
    }

    void turnOff() override {
        isOn = false;
        cout << "Air Conditioner is now OFF." << endl;
    }

    void displayStatus() const override {
        cout << "Air Conditioner status: " << (isOn ? "ON" : "OFF") << endl;
    }
};

int main() {
    // Tạo đối tượng
    TV myTV;
    AirConditioner myAC;

    // Sử dụng thiết bị
    myTV.turnOn();
    myTV.displayStatus();

    myAC.turnOff();
    myAC.displayStatus();

    return 0;
}
