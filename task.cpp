#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void showTasks( vector<string> &tasks)
{
    cout << "To-Do List:" << endl;
    for (int i = 0; i < tasks.size(); ++i)
    {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

int main()
{
    vector<string> tasks;
    string task;
    char choice;

    // Load existing tasks from file
    ifstream inputFile("tasks.txt");
    while (getline(inputFile, task))
    {
        tasks.push_back(task);
    }
    inputFile.close();

    do
    {
        cout << "A - Add a task" << endl;
        cout << "V - View tasks" << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 'A':
        case 'a':
            cout << "Enter a task: ";
            cin.ignore(); // Clears the input buffer
            getline(cin, task);
            tasks.push_back(task);
            break;
        case 'V':
        case 'v':
            showTasks(tasks);
            break;
        }
    } while (choice != 'Q' && choice != 'q');

    // Save tasks to file
    ofstream outputFile("tasks.txt");
    for (const auto &t : tasks)
    {
        outputFile << t << endl;
    }
    outputFile.close();

    return 0;
}