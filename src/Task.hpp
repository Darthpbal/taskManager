#ifndef TASK_HPP
#define TASK_HPP

#include <string>

using namespace std;


/*
A task class with representing a single task on a hypothetical todo list.
--------------------------------------
make pending date, so that, if set, a task goes into pending until that date
--------------------------------------
For te purpose of using the multi line function on atom better, this class uses
a naming convention for getters and setters as follows:
  member variable name: myVar
  member getter name: getMyVar()
  member setter name: setMyVar()

Task has interface and attributes:
  string label;         |the name of the task
  int dueMonth;         |integer representing the month portion of the task due date
  int dueYear;          |integer representing the year of the task due date
  int dueDay;           |integer representing the day of the task due date
  string status;        |the status of the task, should be something like "complete", "in progress", "not started", "stuck", "pending"
  string milestone;     |a string that should group tasks by a higher level. This may be better as a class by itself
  int difficulty;       |difficulty rating higher is harder
  int complexity;       |complexity rating higher is more complex
  int priorityLevel;    |priority Level, number 1 is highest priority.
--------------------------------------
*/

class Task{
public:
    Task();
    void dispContents();//send the contents of the task to stdout
    string delim();//return a delimited string of the task contents.
    bool clear();  //clears the task like new ****this seems to be messing up!!!****
    bool make(string line);// taskes in a line

    //getters
    string getLabel();
    string getMilestone();
    int getDueDay();
    int getDueMonth();
    int getDueYear();
    string getStatus();
    int getDifficulty();
    int getComplexity();
    int getPriorityLevel();

    //setters
    bool setLabel(string pLabel);
    bool setMilestone(string pMilestone);
    bool setDueDay(int pDueDay);
    bool setDueMonth(int pDueMonth);
    bool setDueYear(int pDueYear);
    bool setStatus(string pStatus);
    bool setDifficulty(int pDifficulty);
    bool setComplexity(int pComplexity);
    bool setPriorityLevel(int pPriorityLevel);

private:
    string label;
    int dueMonth;
    int dueYear;
    int dueDay;
    string status;
    string milestone;
    int difficulty;
    int complexity;
    int priorityLevel;
};

#endif // Task_HPP
