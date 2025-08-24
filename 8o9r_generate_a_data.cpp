#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

struct GamePrototype {
    string title;
    int version;
    map<string, int> features; // feature name, completion percentage
    vector<string> todoList;
};

void printPrototypeStatus(const GamePrototype& prototype) {
    cout << "Game Title: " << prototype.title << " (v" << prototype.version << ")" << endl;
    cout << "Features:" << endl;
    for (const auto& feature : prototype.features) {
        cout << " - " << feature.first << ": " << feature.second << "%" << endl;
    }
    cout << "To-Do List:" << endl;
    for (const auto& task : prototype.todoList) {
        cout << " - " << task << endl;
    }
}

int main() {
    GamePrototype prototype;
    prototype.title = "Epic Quest";
    prototype.version = 1;
    prototype.features["Character Creation"] = 30;
    prototype.features["Combat System"] = 60;
    prototype.features["Questing"] = 10;
    prototype.todoList.push_back("Implement character stats");
    prototype.todoList.push_back("Fix combat bug");
    prototype.todoList.push_back("Design questline");

    printPrototypeStatus(prototype);

    return 0;
}