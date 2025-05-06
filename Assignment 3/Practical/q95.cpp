#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileCompressor {
public:
    void compress(const string& inputFile, const string& outputFile) {
        ifstream in(inputFile);
        ofstream out(outputFile);

        if (!in || !out) {
            cout << "File error.\n";
            return;
        }

        char ch, prev;
        int count = 1;

        in.get(prev);
        while (in.get(ch)) {
            if (ch == prev) {
                count++;
            } else {
                out << prev << count;
                prev = ch;
                count = 1;
            }
        }
        out << prev << count;

        in.close();
        out.close();
    }

    void decompress(const string& inputFile, const string& outputFile) {
        ifstream in(inputFile);
        ofstream out(outputFile);

        if (!in || !out) {
            cout << "File error.\n";
            return;
        }

        char ch;
        int count;

        while (in >> ch >> count) {
            for (int i = 0; i < count; i++)
                out << ch;
        }

        in.close();
        out.close();
    }
};

int main() {
    FileCompressor fc;

    fc.compress("input.txt", "compressed.txt");
    fc.decompress("compressed.txt", "decompressed.txt");

    cout << "Compression and decompression done.\n";

    return 0;
}
