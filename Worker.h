//
// Created by kesem on 12/20/2022.
//

#ifndef CAR_RENTAL_WORKER_H
#define CAR_RENTAL_WORKER_H

#endif //CAR_RENTAL_WORKER_H
#include <iostream>;
#include<fstream>;
#include <string>
#include <stdio.h>
using namespace std;


class Worker
{
private:
    string name;
    long id;
    int seniority;
    float hours;
public:
    Worker() { name = " "; id = 0; seniority = 0; hours = 0.0; }
    Worker(const Worker& worker) { this->name = worker.name; this->id = worker.id; this->seniority = worker.seniority; this->hours = worker.hours;}
    void set(string name, long id, int seniority, float hours) { this->name = name; this->id = id; this->seniority = seniority; this->hours = hours; }
    ~Worker() {}
    void setHours(float h) { hours = h; }
    string getName() { return name; }
    float getHours() { return hours; }
    long getID() { return id; }
    int getSeniority() { return seniority; }
    float getSal() { float h = getHours(); float sal = (h * 35) + float(seniority * 1000); return sal; }
    void print() { cout << name << " " << id << " " << seniority << " " << hours << endl; }
};