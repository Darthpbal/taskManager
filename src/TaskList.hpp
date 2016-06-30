#ifndef TASKLIST_HPP
#define TASKLIST_HPP

#include <string>
#include "Task.hpp"

using namespace std;

class TaskList{
public:
    TaskList();             //ctor
    bool saveList();             //save task list to file.
    bool constructList();
    string getTask();

    bool updateTask(/*task data*/);
    bool createTask(/*task data*/);
    bool deleteTask(int taskNum);

    bool setTask(int taskNum);   //set task based on task number
    bool clearTask(int taskNum); //clear task by task number
    const int taskListCapacity = 20;

private:
    Task list[taskListCapacity];
};

#endif // TASKLIST_HPP
