#ifndef TASK_HPP
#define TASK_HPP

#include <string>

using namespace std;

class Task{
public:
    Task();

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
