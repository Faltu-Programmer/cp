#include "ADT.h"
#include<iostream>


ADT::ADT(int size)
{
    /// size can not be -ve.
    if(size < 0){size = 0;}
    basePtr = new int[size];
    this->Size = size;
    Length = 0;
}
ADT::ADT() : ADT(0)
{
    //size = length = 0;
}

int ADT::getSize ()
{
    return this->Size;
}
int ADT::getLength()
{
    return this->Length;
}

void ADT::setSize(int size)
{
    /// need to create new array and copy
    ///everything for old to new one.....
    this->Size = size;
    
}
void ADT::setLength(int length)
{
    if(!(length < 0))
    {
        this->Length = length;
    }
}
int* ADT::begin()
{
    return this->basePtr;
}
int* ADT::end()
{
    return this->basePtr+getSize();
}

void ADT::display()
{
    int length = getLength();
    for(int itr = 0; itr < length; ++itr)
    {
        std :: cout << basePtr[itr] << " ";
    }
    std::cout << "\n";
}

void ADT::largerArray ()
{
	int currSize = getSize()<<1;
    int* tempArray = new int [currSize];

    for(int itr = 0; itr < getLength(); itr++)
    {
        tempArray[itr] = basePtr[itr];
    }
    
    setSize(currSize);
    
    delete []basePtr;
    basePtr = tempArray;
    tempArray = nullptr;
}

// /adding a value at the end of the array ....
void ADT::add (int value)
{
    int currSize = getSize();
    int currLength = getLength();
    
    if(currSize == currLength)
    {
    	largerArray();
    }
    
    basePtr[currLength] = value;
    setLength(currLength+1);
}
// /appending a value at the end of the array ....
void ADT::_append (int value)
{
    add(value);
}

// inserting value at a given index ...
void ADT::insert (int index, int value)
{
    int currSize = getSize();
    int currLength = getLength();
    
    if(index > currLength) return;

    if(!(currLength < currSize))
    {
    	largerArray();
    }
    
    for(int i = currLength; i > index; i--)
    {
    	basePtr[i] = basePtr[i-1];
    }
    basePtr[index] = value;
    setLength(currLength+1);
}

/// deleting value at a given index
void ADT::_delete(int index)
{
    int currLength = getLength()-1;
    
    
    if(!(index < currLength))
    {
    	return;
    }
    
    for(int i=index;i<currLength;i++)
    {
    	basePtr[i] = basePtr[i+1];
    }
    
    setLength(getLength()-1);
}

/// searching a value and returning the index, if not present then returning -1
int ADT::search (int value)
{
	int length = getLength();
	int index = -1;
	
	for(int i=0;i<length;i++)
	{
		if(basePtr[i] == value)
		{
			index = i;
			break;
		}
	}
	return index;
} 
/// returning a value at given index ....
int ADT::get(int index)
{
	int currLength = getLength();
	
	if(index > currLength)
	{
		return -1;
	}
	return basePtr[index];
}
void ADT::set (int index, int value)
{
	int currLength = getLength();
	
	if(index > currLength)
	{
		return;
	}
	basePtr[index] = value;
}

int ADT::mx ()
{
	int currLength = getLength();
	int key = basePtr[0];
	for(int i=1;i<currLength;i++)
	{
		int tmp = basePtr[i];
		if(key < tmp)
		{
			key = tmp;
		}
	}
	return key;
}

int ADT::mn ()
{
	int currLength = getLength();
	int key = basePtr[0];
	for(int i=1;i<currLength;i++)
	{
		int tmp = basePtr[i];
		if(key > tmp)
		{
			key = tmp;
		}
	}
	return key;
}

/// Dependent function / helper method ....
void ADT::_swap (int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
// reverseing the array .....
void ADT::reverse ()
{
	int currLength = getLength();
	int length = currLength/2;
	
	for(int i=0;i<length;i++)
	{
		_swap(basePtr[i],basePtr[currLength-1-i]);
	}
}

/// rotate by n index right.....
void ADT::rotate (int index)
{
	int currLength = getLength();
	int currSize = getSize();
	
	int* tmp = new int[currSize];
	
	for(int i=0;i<currLength-index;i++)
	{
		tmp[i+index] = basePtr[i];
	}
	for(int i=0;i<index;i++)
	{
		tmp[i] = basePtr[i+currLength-index];
	}
	delete[] basePtr;
	basePtr = tmp;
	tmp = nullptr;
}
/// shifted by n index right.....
void ADT::shift (int index)
{
	rotate(index);
}

/// Distructor/Dynamic Distructor....
ADT::~ADT()
{
    delete []basePtr;
    basePtr = nullptr;
}

