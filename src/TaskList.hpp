#ifndef TASKLIST_HPP
#define TASKLIST_HPP

using namespace std;

class TaskList{
public:
    TaskList();             //ctor
    saveList();             //save task list to file.

    updateTask(/*task data*/);
    createTask(/*task data*/);
    deleteTask(int taskNum);

    setTask(int taskNum);   //set task based on task number
    clearTask(int taskNum); //clear task by task number


private:
    int TaskListCapacity;
    Task TaskList[TaskListCapacity]
};

#endif // TASKLIST_HPP
