#include "Task.hpp"
#include <iostream>

using namespace std;


Task::Task(){
  setLabel("NULL");
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
