#include <iostream>
#include <fstream>
using namespace std;

class FileHandling {
public:
    fstream obj;
    char ch[100];

    void writeFile() {
        obj.open("extra.txt", ios::out);   // write mode
        obj << "this is the example";
        obj.close();
        cout << "Data written successfully of file handling\n";
    }

    void readFile() {
        obj.open("extra.txt", ios::in);    // read mode
        while (obj.getline(ch, 100)) {
            cout << ch;
        }
        obj.close();
    }
};

int main() {
    FileHandling f;
    f.writeFile();
    f.readFile();
    return 0;
}
