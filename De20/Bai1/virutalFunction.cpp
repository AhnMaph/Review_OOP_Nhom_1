#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { // Phương thức ảo
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override { // Ghi đè phương thức
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override { // Ghi đè phương thức
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a; // Con trỏ của lớp cơ sở

    Dog d;
    Cat c;

    a = &d; // Gán địa chỉ đối tượng Dog
    a->sound(); // Gọi phương thức của Dog (đa hình động)

    a = &c; // Gán địa chỉ đối tượng Cat
    a->sound(); // Gọi phương thức của Cat (đa hình động)

    return 0;
}
