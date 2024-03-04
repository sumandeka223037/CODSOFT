#include <iostream>
#include <stack>
#include <string>
using namespace std;

void addTask(stack<string> &tdList) {
    string task1;
    cout << "Enter task to add: ";
    cin.ignore();
    getline(cin, task1);
    tdList.push(task1);
    cout << "Task added successfully!" << endl;
}

void completedTask(stack<string> &tdList) {
    if (tdList.empty()) {
        cout << "No tasks to complete." << endl;
        return;
    }
    cout << "Completed task: " << tdList.top() << endl;
    tdList.pop();
}

void displayTasks(stack<string> tdList) {
    if (tdList.empty()) {
        cout << "No tasks to display." << endl;
        return;
    }
    cout << "Tasks to do:" << endl;
    stack<string> temp;
    while (!tdList.empty()) {
        cout << tdList.top() << endl;
        temp.push(tdList.top());
        tdList.pop();
    }
    //restoring
    while (!temp.empty()) {
        tdList.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<string> tdList;
    int choice;
    
    do {
        cout << "\n***** To-Do List *****" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Complete Task" << endl;
        cout << "3. Display Tasks" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                addTask(tdList);
                break;
            case 2:
                completedTask(tdList);
                break;
            case 3:
                displayTasks(tdList);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    
    return 0;
}




//making of a TODO LIST IN C++.......
