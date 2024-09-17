#include <iostream>
#include <thread>
#include <string>

using namespace std;

int main() {
    cout << "Hello, pal. Hell of the first day!" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    cout << "How about having fun? [N] or [Y]: ";
    string input;
    cin >> input;

    if (input == "Y") {
        string longdash(1000, '-');
        cout << "Welcome to the \"DID\" dressing!" << longdash << endl;
        while (true) {
            std::this_thread::sleep_for(std::chrono::milliseconds(1600));
            cout << "Who am I?" << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            cout << "Loading..." << endl;
        }
    }
    else {
        cout << "Bye." << endl;
    }

    return 0;
}
