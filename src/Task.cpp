#include "Task.hpp"
#include <iostream>

using namespace std;


Task::Task(){
  setLabel("NULL");
  setMilestone("");
  setDueDay(0);
  setDueMonth(0);
  setDueYear(0);
  setStatus("");
  setDifficulty(0);
  setComplexity(0);
  setPriorityLevel(0);
}

bool Task::clear(){
  setLabel("NULL");
  setMilestone("");
  setDueDay(0);
  setDueMonth(0);
  setDueYear(0);
  setStatus("");
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

string Task::delim(){
    string contents = "";
    contents += getLabel();
    contents += ",";
    contents += getMilestone();
    contents += ",";
    contents += getDueDay();
    contents += ",";
    contents += getDueMonth();
    contents += ",";
    contents += getDueYear();
    contents += ",";
    contents += getStatus();
    contents += ",";
    contents += getDifficulty();
    contents += ",";
    contents += getComplexity();
    contents += ",";
    contents += getPriorityLevel();
    return contents;
}

bool Task::make(string line){
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
