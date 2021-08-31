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


    if (list1 == NULL) {
        return list2;
    }
    if (list2 == NULL) {
        return list1;
    }
    if (list1 == NULL && list2 == NULL) {
        return NULL;
    }

    if (list1->data < list2->data) {
        if (list1->next == NULL) {
            list1->next = list2;
            return list1;
        }
         


            node* cur = list1;
            node* cur1 = list2;
            node* next = list1->next;
            node* next1 = list2->next;
            while (next && cur1) {

                if ((cur1->data) >= (cur->data) && (cur1->data) <= (next->data)) {
                    next1 = cur1->next;
                    cur->next = cur1;
                    cur1->next = next;


                    cur = cur1;
                    cur1 = next1;
                }
                else {
            
                    if (next->next != NULL) {
                        next = next->next;
                        cur = cur->next;
                    }

                    else {
                        next->next = cur1;
                        return list1;
                    }
                }
            }
            return list1;
        }
    else {
        if (list2->next == NULL) {
            list2->next = list1;
            return list2;
        }



        node* cur = list2;
        node* cur1 = list1;
        node* next = list2->next;
        node* next1 = list1->next;
        while (next && cur1) {

            if ((cur1->data) >= (cur->data) && (cur1->data) <= (next->data)) {
                next1 = cur1->next;
                cur->next = cur1;
                cur1->next = next;


                cur = cur1;
                cur1 = next1;
            }
            else {
                
                if (next->next!= NULL) {
                    next = next->next;
                    cur = cur->next;
                }

            
                else {
                    next->next = cur1;
                    return list2;
                }
            }
        }
        return list2;
    }

   
   
 

	
	
	
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


	
    if (!list1)
        return list2;
    if (!list2)
        return list1;
    if (list1->data < list2->data) {
        if (list1->next == NULL) {
            list1->next = list2;
            return list1;
        }
    }
    


    if (list1->data < list2->data) {
        list1->next = reMergeList(list1->next, list2);
        return list1;
    }
    else {
        list2->next = reMergeList(list1, list2->next);
        return list2;
    }
    if (list1->data < list2->data) {
        list1->next = reMergeList(list1->next, list2);
        return list1;
    }
    else {
        list2->next = reMergeList(list1, list2->next);
        return list2;
    }

	
	
	
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

