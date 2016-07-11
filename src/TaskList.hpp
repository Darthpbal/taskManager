#ifndef TASKLIST_HPP
#define TASKLIST_HPP

#include <string>
#include "Task.hpp"
#include <iostream>

using namespace std;

/*
the Task list class is a class representation of a task list. The way it's
implemented here, the task list is essentially a task array with helper
functions for operating on the line item level and for handling file operations.

--------------------------------------
taskListCapacity    |the number of tasks that will be able to be tracked by the program
TaskList            | ctor
saveList            |function for saving the contents of the task array to the task file
constructList       |construct the task list from the source file.
getTask             |get task by task number
updateTask          |update task by number
createTask          |create a new task
deleteTask          |delete a task by number
setTask             |set a task by number
clearTask           |set a task to empty based on id number
list                |arra of tasks
--------------------------------------
*/

class TaskList{
public:
    const static int taskListCapacity = 20;
    TaskList(string);             //ctor
    bool saveList();             //save task list to file.

    bool updateTask(int taskNum, string taskLine);
    int createTask(string taskLine);
    bool deleteTask(int taskNum);

private:
    Task list[taskListCapacity];
    string taskFileName;
};

#endif // TASKLIST_HPP
