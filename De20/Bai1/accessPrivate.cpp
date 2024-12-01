#include <iostream>
using namespace std;

// Lớp Demo
class Demo {
private:
    int value; // Biến private chỉ có thể truy cập từ bên trong lớp

public:
    // Constructor
    Demo(int v) : value(v) {}

    // Getter: Truy cập giá trị của 'value' từ bên ngoài
    int getValue() const {
        return value;
    }

    // Setter: Thay đổi giá trị của 'value' từ bên ngoài
    void setValue(int v) {
        value = v;
    }

    // Khai báo hàm bạn
    friend void displayPrivateValue(const Demo& obj);
};

// Hàm bạn có quyền truy cập trực tiếp thành phần private
void displayPrivateValue(const Demo& obj) {
    cout << "Private value: " << obj.value << endl;
}

int main() {
    Demo obj(42); // Tạo đối tượng Demo với giá trị ban đầu là 42

    // Truy cập private thông qua các phương thức public
    cout << "Accessing via getter: " << obj.getValue() << endl;

    // Thay đổi giá trị private thông qua setter
    obj.setValue(100);
    cout << "After setting new value: " << obj.getValue() << endl;

    // Truy cập private trực tiếp thông qua hàm bạn
    displayPrivateValue(obj);

    return 0;
}
