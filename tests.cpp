#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include "Node.h"

using namespace std;

TEST_CASE("Function: IQR 1") {
	vector<int> v = {1,2,3};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 2.00);

    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
//
//TEST_CASE("Function: IQR 2", "[given]") {
//	std::vector<int> v = {2, 3, 4, 5};
//	Node* head = nullptr;
//	for(int i: v)
//		head = insertEnd(head, i);
//
//	REQUIRE(interQuartile(head) == 3.5);
//
//    while (head != nullptr)
//    {
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//    }
//}
//
//TEST_CASE("Function: IQR 3", "[output_hidden]") {
//	std::vector<int> v = {1, 8, 15, 43, 82, 101, 110, 2456, 55345, 137556};
//	Node* head = nullptr;
//	for(int i: v)
//		head = insertEnd(head, i);
//
//	REQUIRE(interQuartile(head) == ?);
//
//    while (head != nullptr)
//    {
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//    }
//}
//
//TEST_CASE("Function: IQR 4", "[output_hidden]") {
//	std::vector<int> v = {2, 4, 4, 5, 6, 7, 8, 9, 10};
//	Node* head = nullptr;
//	for(int i: v)
//		head = insertEnd(head, i);
//
//	REQUIRE(interQuartile(head) == ?);
//
//    while (head != nullptr)
//    {
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//    }
//}
//
//TEST_CASE("Function: IQR 5", "[output_hidden]") {
//	std::vector<int> v = {1, 8, 15, 43, 82, 101, 110, 2456, 55345, 137556, 137576};
//	Node* head = nullptr;
//	for(int i: v)
//		head = insertEnd(head, i);
//
//	REQUIRE(interQuartile(head) == ?);
//
//    while (head != nullptr)
//    {
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//    }
//}
