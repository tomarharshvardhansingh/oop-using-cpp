#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <string.h>

using namespace std;

void processFile(const char* filename) {
    // Open the file
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        cerr << "Error opening file." << endl;
        return;
    }

    // Get the size of the file
    struct stat fileStats;
    if (fstat(fd, &fileStats) == -1) {
        cerr << "Error getting file stats." << endl;
        close(fd);
        return;
    }

    size_t fileSize = fileStats.st_size;

    // Memory-map the file
    char* mappedMemory = (char*)mmap(NULL, fileSize, PROT_READ, MAP_PRIVATE, fd, 0);
    if (mappedMemory == MAP_FAILED) {
        cerr << "Error mapping file to memory." << endl;
        close(fd);
        return;
    }

    // Process the file (for demonstration, we simply print the content)
    for (size_t i = 0; i < fileSize; ++i) {
        cout << mappedMemory[i];  // Print each byte (character)
    }

    // Unmap the file
    if (munmap(mappedMemory, fileSize) == -1) {
        cerr << "Error unmapping file." << endl;
    }

    // Close the file descriptor
    close(fd);
}

int main() {
    const char* filename = "largefile.txt";  // Replace with your file path

    processFile(filename);

    return 0;
}
