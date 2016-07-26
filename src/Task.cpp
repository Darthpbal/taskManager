#include "Task.hpp"
#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;


Task::Task(){
  setLabel("NULL");
  setMilestone("NULL");
  setDueDay(0);
  setDueMonth(0);
  setDueYear(0);
  setStatus("NULL");
  setDifficulty(0);
  setComplexity(0);
  setPriorityLevel(0);
}

bool Task::clear(){
  setLabel("NULL");
  setMilestone("NULL");
  setDueDay(0);
  setDueMonth(0);
  setDueYear(0);
  setStatus("NULL");
  setDifficulty(0);
  setComplexity(0);
  setPriorityLevel(0);
}

void Task::dispContents(){
  cout << getLabel() << endl;
  cout << getMilestone() << endl;
  cout << getDueDay() << endl;
  cout << getDueMonth() << endl;
  cout << getDueYear() << endl;
  cout << getStatus() << endl;
  cout << getDifficulty() << endl;
  cout << getComplexity() << endl;
  cout << getPriorityLevel() << endl;
}

//Using stream stream allows me to treat the string like stdin or stdout and
//appears to handle concatenating integers alongside strings easier.
string Task::delim(){
    stringstream contents;
    contents << getLabel() << delim;
    contents << getMilestone() << delim;
    contents << getDueDay() << delim;
    contents << getDueMonth() << delim;
    contents << getDueYear() << delim;
    contents << getStatus() << delim;
    contents << getDifficulty() << delim;
    contents << getComplexity() << delim;
    contents << getPriorityLevel();
    return contents.str();
}

bool Task::make(string line){
  //careful about order
  int columnPos = 0;
  string columnName = "";
  for(int currentCharPos = 0; currentCharPos < line.size(); currentCharPos++){
    if(line[currentCharPos] == delim) {
      //label
      if(columnPos == 0){
        setLabel(columnName.c_str());
        columnName.clear();
      }
      //milestone
      else if(columnPos == 1){
        setMilestone(columnName.c_str());
        columnName.clear();
      }
      //dueDay
      else if(columnPos == 2){
        setDueDay(atoi(columnName.c_str()));
        columnName.clear();
      }
      //dueMonth
      else if(columnPos == 3){
        setDueMonth(atoi(columnName.c_str()));
        columnName.clear();
      }
      //dueYear
      else if(columnPos == 4){
        setDueYear(atoi(columnName.c_str()));
        columnName.clear();
      }
      //status
      else if(columnPos == 5){
        setStatus(columnName.c_str());
        columnName.clear();
      }
      //difficulty
      else if(columnPos == 6){
        setDifficulty(atoi(columnName.c_str()));
        columnName.clear();
      }
      //complexity
      else if(columnPos == 7){
        setComplexity(atoi(columnName.c_str()));
        columnName.clear();
      }
      //priorityLevel
      else if(columnPos == 8){
        setPriorityLevel(atoi(columnName.c_str()));
        columnName.clear();
      }
      else {
        cout << "column unknown... quitting task creation on task line \n ";
        cout << line << endl;
      }
      columnPos++;
      continue;
    }
    else{
      columnName += line[currentCharPos];
    }
  }
  return true;
}



/*
GETTERS
*/
string Task::getLabel(){
  return label;
}

int Task::getDueMonth(){
  return dueMonth;
}

int Task::getDueYear(){
  return dueYear;
}

int Task::getDueDay(){
  return dueDay;
}

string Task::getStatus(){
  return status;
}

string Task::getMilestone(){
  return milestone;
}

int Task::getDifficulty(){
  return difficulty;
}

int Task::getComplexity(){
  return complexity;
}

int Task::getPriorityLevel(){
  return priorityLevel;
}


/*
SETTERS
*/
bool Task::setLabel(string pLabel){
  label = pLabel;
  return (label == pLabel)? true: false;
}

bool Task::setDueMonth(int pDueMonth){
  dueMonth = pDueMonth;
  return (dueMonth == pDueMonth)? true: false;
}

bool Task::setDueYear(int pDueYear){
  dueYear = pDueYear;
  return (dueYear == pDueYear)? true: false;
}

bool Task::setDueDay(int pDueDay){
  dueDay = pDueDay;
  return (dueDay == pDueDay)? true: false;
}

bool Task::setStatus(string pStatus){
  status = pStatus;
  return (status == pStatus)? true: false;
}

bool Task::setMilestone(string pMilestone){
  milestone = pMilestone;
  return (milestone == pMilestone)? true: false;
}

bool Task::setDifficulty(int pDifficulty){
  difficulty = pDifficulty;
  return (difficulty == pDifficulty)? true: false;
}

bool Task::setComplexity(int pComplexity){
  complexity = pComplexity;
  return (complexity == pComplexity)? true: false;
}

bool Task::setPriorityLevel(int pPriorityLevel){
  priorityLevel = pPriorityLevel;
  return (priorityLevel == pPriorityLevel)? true: false;
}
