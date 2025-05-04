#include <iostream>
#include <queue>
using namespace std;

struct Patient {
    string name;
    int priority;

      bool operator<(const Patient& otherPatient) const {
          if (priority < otherPatient.priority) {
             return true;
        }         
           else {
            return false;
         }
   }
};

int main() {

    priority_queue<Patient> queue;

      for(int i = 0; i < 5; i++) {
           Patient p;

            cout << "Enter name: ";
            getline(cin, p.name);

              cout << "Enter priority (higher number = more urgent): \n";
              cin >> p.priority;
              cin.ignore(); 

              queue.push(p);

      }

           cout << "Order of treatment:\n";
               while (!queue.empty()) {
              Patient current = queue.top();
               queue.pop();
             cout << current.name << endl;
      }
    
    return 0;
}