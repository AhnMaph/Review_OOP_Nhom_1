#include <iostream>
#include <cmath>
using namespace std;

// Lớp cơ sở trừu tượng
class Shape {
public:
    // Phương thức thuần ảo
    virtual double getArea() const = 0;    // Tính diện tích
    virtual double getPerimeter() const = 0; // Tính chu vi

    // Destructor ảo
    virtual ~Shape() {}
};

// Lớp dẫn xuất: Hình tròn
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double getArea() const override {
        return M_PI * radius * radius;
    }

    double getPerimeter() const override {
        return 2 * M_PI * radius;
    }
};

// Lớp dẫn xuất: Hình chữ nhật
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() const override {
        return width * height;
    }

    double getPerimeter() const override {
        return 2 * (width + height);
    }
};

// Hàm sử dụng tính đa hình
void printShapeInfo(const Shape& shape) {
    cout << "Area: " << shape.getArea() << endl;
    cout << "Perimeter: " << shape.getPerimeter() << endl;
}

int main() {
    Circle circle(5.0);          // Hình tròn với bán kính 5
    Rectangle rectangle(4.0, 6.0); // Hình chữ nhật với chiều rộng 4 và chiều cao 6

    cout << "Circle:" << endl;
    printShapeInfo(circle);

    cout << "\nRectangle:" << endl;
    printShapeInfo(rectangle);

    return 0;
}
