#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#include<iterator>

using namespace std;

struct Employee{
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp){
    cout<<"id : "<<emp.id<<", Name: "<<emp.name<<", Salary : $"<<emp.salary<<endl;
}

int main(){
    vector<Employee> employees = { //containers for storage
        {101,"Chetan",1000.00},
        {102,"Hitesh",2000.00},
        {103,"Shubam",900.00},
        {104,"Prafull",950.00},
        {105,"Dipak",1100.00}

    };

    //lambadas sorting []() denoted
    sort(employees.begin(),employees.end(), [](const Employee& e1, Employee& e2){ 
        return e1.salary > e2.salary;
    });

    cout<<"Employees sorted by salary : (Highest ---> lowest)"<<endl;
    //for each loop for iteration.
    for_each(employees.begin(),employees.end(),displayEmployee);


    //for filtering the employees whose salary is greater than 1000 and storing them inside the highEarners vector
    vector<Employee> highEarners;
    copy_if(employees.begin(),employees.end(),back_inserter(highEarners),[](const Employee e){
        return e.salary >= 1000;
    });


    cout<<"Employees Who are hign earners : "<<endl;
    //for each loop for iteration.
    for_each(highEarners.begin(),highEarners.end(),displayEmployee);


    //accumulat reduce
    double totalSalaty = accumulate(employees.begin(),employees.end(), 0.0, [](double sum,const Employee &e){
        return sum = e.salary;
    });

    double avgSalary = totalSalaty / employees.size();

    auto highestPaid = max_element(employees.begin(),employees.end(),[](const Employee e1,Employee e2){
        return e1.salary < e2.salary; 
    })

}
