#include <iostream>
#include <vector>
using namespace std;

class Plugin {
public:
    virtual void execute() = 0;
    virtual ~Plugin() {}
};

class PrintPlugin : public Plugin {
public:
    void execute() override {
        cout << "PrintPlugin: Printing document..." << endl;
    }
};

class SavePlugin : public Plugin {
public:
    void execute() override {
        cout << "SavePlugin: Saving document..." << endl;
    }
};

class ExportPlugin : public Plugin {
public:
    void execute() override {
        cout << "ExportPlugin: Exporting document as PDF..." << endl;
    }
};

void runPlugins(vector<Plugin*>& plugins) {
    for (auto* plugin : plugins)
        plugin->execute();
}

int main() {
    vector<Plugin*> plugins;

    plugins.push_back(new PrintPlugin());
    plugins.push_back(new SavePlugin());
    plugins.push_back(new ExportPlugin());

    runPlugins(plugins);

    for (auto* plugin : plugins)
        delete plugin;

    return 0;
}
