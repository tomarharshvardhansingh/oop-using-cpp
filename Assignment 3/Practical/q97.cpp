#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Cache {
private:
    unordered_map<string, string> cache;

public:
    // Store data in cache
    void storeData(const string& key, const string& value) {
        cache[key] = value;
        cout << "Data stored: " << key << " -> " << value << endl;
    }

    // Retrieve data from cache
    void retrieveData(const string& key) {
        if (cache.find(key) != cache.end()) {
            cout << "Data retrieved: " << key << " -> " << cache[key] << endl;
        } else {
            cout << "No data found for key: " << key << endl;
        }
    }

    // Display all cached data
    void displayCache() {
        if (cache.empty()) {
            cout << "Cache is empty.\n";
            return;
        }

        cout << "Cache contents:\n";
        for (const auto& entry : cache) {
            cout << entry.first << " -> " << entry.second << endl;
        }
    }

    // Clear cache
    void clearCache() {
        cache.clear();
        cout << "Cache cleared.\n";
    }
};

int main() {
    Cache myCache;

    myCache.storeData("username", "john_doe");
    myCache.storeData("password", "12345");
    myCache.storeData("email", "john@example.com");

    myCache.displayCache();

    myCache.retrieveData("username");
    myCache.retrieveData("password");
    myCache.retrieveData("address");

    myCache.clearCache();
    myCache.displayCache();

    return 0;
}
