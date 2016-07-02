#ifndef TASKLIST_HPP
#define TASKLIST_HPP

#include <string>
#include "Task.hpp"
#include <iostream>

using namespace std;

class TaskList{
public:
    TaskList(string);             //ctor
    bool saveList();             //save task list to file.
    bool constructList();
    string getTask();
    /*
    	maketask and mytasks array are not declared and currently being deprecated
    	while(!taskFile.eof()){
    	string line;
    	getline(taskFile, line);
    	makeTask(line, myTasks[lineNum);
    OOP list[lineNum].make(line);
    	lineNum++;
  }
    */

    bool updateTask(/*task data*/);
    bool createTask(/*task data*/);
    bool deleteTask(int taskNum);

    bool setTask(int taskNum);   //set task based on task number
    bool clearTask(int taskNum); //clear task by task number
    const static int taskListCapacity = 20;

private:
    Task list[taskListCapacity];
};

#endif // TASKLIST_HPP


