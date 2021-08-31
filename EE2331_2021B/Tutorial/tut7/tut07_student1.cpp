/*
 * Instructions:
 *
 * 1. Only complete the functions specified below. Do not create any additional function.
 * 2. Use Visual Studio 2019 to build, test and run your code.
 * 3. Do not include any additional header or library.
 * 4. This is an exercise of linked list operations. Do not copy linked lists to arrays for manipulation.
 * 5. Implement the functions mergeList() and reMergeList() as specified below.
 * 6. All linked lists in this exercise are singly-linked, non-circular and without header node.
 *
 */

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;

/* Linked list node */
struct node {
    int data;
    node* next;
};

//-------------------------- functions to be implemented by you

/*
 * The function takes two lists, each of which is sorted in ascending order, and
 * iteratively merges them into one list with ascending order. The head of the merged list is
 * returned.
 *
 * Time complexity: O(n)
 * Space complexity: O(1)
 *
 */
node* mergeList(node* list1, node* list2) {
    node* templist1 = list1;
    node* templist2 = list2;
    node* curr=NULL;
   
   
    if (templist1 != NULL || templist2 != NULL) {
        if (templist1 != NULL && templist1->data <= templist2->data) {
            curr = templist1;
            templist1 = templist1->next;
        }
        else {
            curr = templist2;
            templist2 = templist2->next;
        }
    }
    node* templist = curr;

    
    
    while (templist1 != NULL && templist2 != NULL) {
        if (templist1->data <= templist2->data) {
            curr->next = templist1;
            curr = curr->next;
            templist1 = templist1->next;
        }
        else {
            curr->next= templist2;
            curr = curr->next;
            templist2 = templist2->next;
        }

    }
    
    if (templist1 == NULL)
        if(templist2!=NULL)
        curr->next = templist2;
    if (templist2 == NULL)
        if(templist1!=NULL)
        curr->next = templist1;
        



        
    return templist;
	
}

/*
 * The recursive function takes two lists, each of which is sorted in ascending order, and 
 * recursively merges them into one list with ascending order. The head of the merged list is
 * returned. 
 * 
 * Time complexity: O(n)
 * Space complexity: O(n)
 * 
 */
node* reMergeList(node* list1, node* list2) {

    
    node* templist1 = list1;
    node* templist2 = list2;
    node* curr = NULL;


    if (templist1 != NULL || templist2 != NULL) {
        if (templist1 != NULL && templist1->data <= templist2->data) {
            curr = templist1;
            templist1 = templist1->next;
        }
        else {
            curr = templist2;
            templist2 = templist2->next;
        }
    }
    node* templist = curr;



    while (templist1 != NULL && templist2 != NULL) {
        if (templist1->data <= templist2->data) {
            curr->next = templist1;
            curr = curr->next;
            templist1 = templist1->next;
        }
        else {
            curr->next = templist2;
            curr = curr->next;
            templist2 = templist2->next;
        }

    }

    if (templist1 == NULL)
        if (templist2 != NULL)
            curr->next = templist2;
    if (templist2 == NULL)
        if (templist1 != NULL)
            curr->next = templist1;





    return templist;
	
	
	
	
	
}

//-------------------------- functions prepared for you

 /*
  * Helper class for creating/printing a list from an array.
  */
class ListHelper {
public:
    // build a list based on array input
    static node* newList(int* arr, int n) {

        node dummy = { n, NULL };
        node* cur = &dummy;
        for (int i = 0; i < n; i++) {
            cur->next = new node({ arr[i], NULL });
            cur = cur->next;
        }
        return dummy.next;      // without dummy header
    }

    //print nodes in a given linked list
    static void printList(node* list) {
        while (list != NULL) {
            printf("[%d]-> ", list->data);
            list = list->next;
        }
        cout << "NULL" << endl;
    }

    //delete nodes in a given linked list
    static void deleteList(node* list) {
        node* temp;
        while (list != NULL) {
            temp = list;
            list = list->next;
            delete temp;
        }
    }
};

/*
 * Driver program
 *
 * Read the test cases from the input file and use them to test
 * your functions' implementation.
 *
 */
int main(int argc, char** argv) {

    ifstream fin("tut07_input.txt");
    if (!fin) {
        cout << "Input file not found.";
        exit(1);
    }

    int testcase = 0;
    fin >> testcase;

    for (int i = 0; i < testcase; i++) {

        int n1, n2;
        fin >> n1 >> n2;

        int* arr1 = new int[n1];
        for (int j = 0; j < n1; j++)
            fin >> arr1[j];

        int* arr2 = new int[n2];
        for (int j = 0; j < n2; j++)
            fin >> arr2[j];

        cout << "Case " << i + 1 << endl;

        node* list1 = ListHelper::newList(arr1, n1);
        cout << "List 1: \t";
        ListHelper::printList(list1);

        cout << "List 2: \t";
        node* list2 = ListHelper::newList(arr2, n2);
        ListHelper::printList(list2);

        cout << "Merged list: \t";
        node* result1 = mergeList(list1, list2);
        ListHelper::printList(result1);

        // re-create list1 and list2
        list1 = ListHelper::newList(arr1, n1);
        list2 = ListHelper::newList(arr2, n2);
        
        cout << "Remerged list: \t";
        node* result2 = reMergeList(list1, list2);
        ListHelper::printList(result2);
        cout << endl;

        ListHelper::deleteList(result1);
        ListHelper::deleteList(result2);
        delete[] arr1;
        delete[] arr2;
    }

    return 0;
}

