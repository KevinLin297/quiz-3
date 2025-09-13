#include <iostream>
#include <iomanip>
#include "main.h"

using namespace std;

class Node {
    public:
        int value;
        Node* next = nullptr;
};

Node* insertEnd(Node* head, int key)
{
    Node* temp = new Node();
    temp->value = key;
    if(head == nullptr)
        head = temp;
    else
    {
        Node* curr = head;
        while(curr->next != nullptr)
            curr = curr->next;
        curr->next = temp;
    }
    return head;
}

float interQuartile(Node* head)
{

    Node* fast = head ;
    Node* median = fast;
    Node* q1prev = fast;
    Node* q3prev = fast;
    Node* q1 = fast;
    Node* q3 = fast;
    double Q1val = 0;
    double Q3val = 0;
    double medianval = 0;

    int count = 1;

    while (fast->next != nullptr){
        fast = fast->next;
        count++;
        if (count%2 == 0) {
            median = median->next;
        }
        if (count%4 == 1) {
            q1prev = q1;
            q1 = q1->next;
        }
        if (count%4 != 3) {
            q3prev = q3;
            q3 = q3->next;
        }
    }

    long long temp1 =0;
    long long temp2 =0;
    long long temp3= 0;

    if (count > 5) {
      float temp = 0;
        if (count%2 ==0) {
            temp3 += median->value;
            temp3 += median->next->value;
            medianval = (temp3)/2.0;
            temp = (count)/2.0;
            if(int(temp) == temp && int(temp)%2 == 0){
              temp1 += q1->value;
              temp1 += q1->next->value;
              temp2 += q3->value;
              temp2 += q3->next->value;
              Q1val = (temp1)/2.0;
              Q3val = (temp2)/2.0;
            }
            else{
              Q1val = q1->value;
              Q3val = q3->value;
            }
        }
        else {
            medianval = median->value;
            if(((count-1)/2)%2 == 0){
              temp1 += q1->value;
              temp1 += q1prev->value;
              temp2 += q3->value;
              temp2 += q3->next->value;
              Q1val = (temp1)/2.0;
              Q3val = (temp2)/2.0;
            }
            else{
              Q1val = q1->value;
              Q3val = q3->next->value;
            }
        }

    }
    else {
        if (count%2 ==0) {
            medianval = (median->value + median->next->value)/2.0;
            temp1 += q1->value;
            temp1 += q1->next->value;
            Q1val = (temp1)/2.0;
            temp2 += q3->value;
            temp2 += q3->next->value;
            Q3val = (temp2)/2.0;
        }
        else if (count==3){
            Q1val = q1->value;
            Q3val = q3->next->value;
            medianval = median->value;
        }
        else if (count ==5) {
            temp1 += q1->value;
            temp1 += q1prev->value;
            Q1val = temp1/2.0;
            temp2 += q3->value;
            temp2 += q3->next->value;
            Q3val = temp2/2.0;
            medianval = median->value;
        }

    }
        //cout<< "Median: "<< medianval << " : " << median->value << "| Q1 value: " << Q1val <<"| Q3val: " << Q3val <<"| count: " << count << endl;
        return Q3val - Q1val;
}

int main() {
    return 30;
}