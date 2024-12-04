#include <iostream>

using namespace std;

class InvalidIndex : public exception {
private:
    string message;
public:
    InvalidIndex(const string& ex) {
        message = ex;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

class TermonatorExeption : public exception {
private:
    string message;
public:
    TermonatorExeption(const string& ex) {
        message = ex;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

class ZeroDevide : public exception {
private:
    string message;
public:
    ZeroDevide(const string& ex) {
        message = ex;
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

void main() {

    char arr[4]{ 'N','i','g','\0' };
    int x;
    cout << "Write index: ";
    cin >> x;
    cout << endl;
    int num1, num2;
    cin >> num1;
    cin >> num2;
    char symb;
    cin >> symb;



    try {
        if (x > 3) {
            throw InvalidIndex("Invalid index.");
        }
        if (arr[3] != '\0') {
            throw TermonatorExeption("It`s not 0 terminator");
        }
        else {
            cout << int(arr[3]) << endl;
        }

        if (num2 == 0 && symb == '/') {
            throw ZeroDevide("Never give you up");
        }

    }
    catch (InvalidIndex ex) {
        cout << ex.what();
        x = 1;
    }
    catch (TermonatorExeption ex) {
        cout << ex.what();
    }
    catch (ZeroDevide ex) {
        cout << ex.what();
    }
}