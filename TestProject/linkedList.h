#include "general.h"

template <class T>
class LinkedList
{
	public:
	T data;

	LinkedList *next;

	LinkedList(T dataIn)
	{
		data = dataIn;
		next = NULL;
	}

	~LinkedList()
	{
	}


	void Add(LinkedList* newItem){
		
		LinkedList* oldNext = next;
		next = newItem;
		newItem->next = oldNext;
	}

	void Remove(LinkedList* itemToRemove){

		LinkedList* prevItem = NULL;

		// Seek item which owns item we want to remove
		if (itemToRemove == this){
			// End of recursion
			return this;
		}else if (next != NULL){
			// If next item contained item remove it item before
			// it.	
			LinkedList* foundItem = next->Remove(itemToRemove);
			if ( foundItem != NULL){
				// Remove
				this->next = foundItem->next;
				// creator will remove class instance
			}

			return NULL; // Return null to rest of recursion
		}else{
			// End of recursion
			return NULL;
		}
		
	}

	// Recursice
	LinkedList* FindItem(LinkedList* itemToFind)
	{
		if (itemToFind == this){
			// End of recursion
			return this;
		}else if (next != NULL){
			return next->FindItem(itemToFind);
		}else{
			// End of recursion
			return NULL;
		}
	}

	void PrintLinkedList();
};

	template <class T> void LinkedList<T>::PrintLinkedList()
	{
		LinkedList iterA;

	       iterA = this;
               int counterA = 0;

	       while(iterA){
        	        T dataA = iterA->data;

                	printf("Item %d : [create specialization for datatype] \r\n", counterA);

	                iterA = iterA->next;
        	        counterA++;
	        }	

	}

	// Specialized function to print int typed linked list
	// Didnt work
	/*
	template <> void  LinkedList<int>::PrintLinkedList()
	{
		LinkedList iterA;

	       iterA = this;
               int counterA = 0;

	       while(iterA){
        	        int dataA = iterA->data;

                	printf("Item %d : %d \r\n", counterA, dataA);

	                iterA = iterA->next;
        	        counterA++;
	        }	
	}
*/
