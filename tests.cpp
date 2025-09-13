#include <algorithm>
#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include <vector>
#include "Node.h"

using namespace std;

TEST_CASE("Function: IQR 1") {
	// testing duplicate values
	vector<int> v = {1,1,2,2,3,3};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 2);

    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
	cout<<"Test 1 passed" <<endl;
}

TEST_CASE("Function: IQR 2") {
	// testing odd list num
	vector<int> v = {2, 3, 4, 5,6};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 3);

    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
	cout<<"Test 2 passed" <<endl;
}

TEST_CASE("Function: IQR 3", ) {
	// 10 random positive vaslue
	vector<int> v = {11,12,4124,24124131,21123,123,1231,2312,3,123};
	sort(v.begin(), v.end());
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 4112);

    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
	cout<<"Test 3 passed" <<endl;
}

TEST_CASE("Function: IQR 4") {
	// list of size 5 with negative numbers
	vector<int> v = {-1,-2,-3,-4,-5};

	sort(v.begin(), v.end());

	Node* head = nullptr;

	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 3);

    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
	cout<<"Test 4 passed" <<endl;
}

TEST_CASE("Function: IQR 5", "[output_hidden]") {
	//mix of positive and negative numbers of list size 5
	vector<int> v = {-2,-1,0,1,2};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 3);

    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
	cout<<"Test 5 passed" <<endl;
}
