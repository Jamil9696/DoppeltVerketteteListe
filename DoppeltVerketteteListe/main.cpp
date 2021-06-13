// DoppeltVerketteteListe.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.

#include <conio.h>
#include <iostream>
#include "Person.h"
#include "LinkedList.h"
#include "OwnFunctions.h"

int main() try {

    Person* p1 = new Person("Farouq", 20);
    Person* p2 = new Person("Jamil", 20);
    Person* p3 = new Person("Alex", 20);
    Person* p4 = new Person("Kevin", 20);
    Person* p5 = new Person("Felix", 20);
    Person* p6 = new Person("Lukas", 20);
    Person* p7 = new Person("Thomax", 20);
    Person* p8 = new Person("Ben", 20);
    Person* p9 = new Person("Sven", 20);
    Person* p10 = new Person("Steven", 20);

   
    LinkedList<Person> personenList;
    LinkedList<Person> personenList2;
 

    personenList.push(p1);
    personenList.push(p2);
    personenList.push(p3);
    personenList.push(p4);
    personenList.push(p5);
    
    personenList2.push(p6);
    personenList2.push(p7);
    personenList2.push(p8);
    personenList2.push(p9);
    personenList2.push(p10);

    
    personenList2 = mergeToOne(personenList, personenList2);
    
    
    

    for (int i = 0; i < personenList2.getSize(); i++) {
        std::cout << "Name: " << personenList2.at(i)->getName() << ", Alter: " << personenList2.at(i)->getAlter() << "\n";
    }

    std::cout << "\n";

    personenList.mergeSort(0, personenList.getSize());

    //personenList.insertAfter(p9, true);// sorted insert

    for (int i = 0; i < personenList.getSize(); i++) {
        std::cout << "Name: " << personenList.at(i)->getName() << ", Alter: " << personenList.at(i)->getAlter() << "\n";
    }
    std::cout << "\n";

    personenList.insertAfter(2, p2);

    for (int i = 0; i < personenList.getSize(); i++) {
        std::cout << "Name: " << personenList.at(i)->getName() << ", Alter: " << personenList.at(i)->getAlter() << "\n";
    }

    personenList.insertAfter(personenList.getSize(), p1);
    personenList.delAt(2);

    for (int i = 0; i < personenList.getSize(); i++) {
        std::cout << "Name: " << personenList.at(i)->getName() << ", Alter: " << personenList.at(i)->getAlter() << "\n";
    }
    int j = personenList.getSize();
   
    personenList.del();
    personenList.pop();
    personenList.del();
    personenList.pop();
    personenList.del();
    personenList.pop();
    personenList.del();
    personenList.pop();
    personenList.del();
    personenList.pop();
    personenList.del();
    personenList.pop();
    int i = personenList.getSize();

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;
    delete p7;
    delete p8;
    delete p9;

    // if memory leak detected then print 
    Test::detectMemoryLeak();
    
    return 0;
}
catch (std::string& s) {
    std::cout << s;
    while (!_kbhit());
    return 1;
}

