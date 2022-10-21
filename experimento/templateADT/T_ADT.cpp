#include "T_ADT.h"
#include<iostream>


template<class T>
T_ADT<T>::T_ADT (int size)
{
    /// size can not be -ve.
    if(size < 0){size = 0;}
    basePtr = new int[size];
    this->Size = size;
    Length = 0;
}
template<class T>
T_ADT<T> :: T_ADT() : T_ADT(0)
{
    //size = length = 0;
}

template<class T>
int T_ADT<T> :: getSize ()
{
    return this->Size;
}
template<class T>
int T_ADT<T> :: getLength()
{
    return this->Length;
}

template<class T>
void T_ADT<T> :: setSize(int size)
{
    /// need to create new array and copy
    ///everything for old to new one.....
    this->Size = size;
    
}
template<class T>
void T_ADT<T> :: setLength(int length)
{
    if(!(length < 0))
    {
        this->Length = length;
    }
}

template<class T>
T* T_ADT<T> :: begin()
{
    return this->basePtr;
}
template<class T>
T* T_ADT<T> :: end ()
{
    return this->basePtr+getSize();
}

template<class T>
void T_ADT<T> :: display ()
{
    int length = getLength();
    for(int itr = 0; itr < length; ++itr)
    {
        std :: cout << basePtr[itr] << " ";
    }
    std::cout << "\n";
}

template<class T>
void T_ADT<T> :: largerArray ()
{
	int currSize = getSize()<<1;
    T* tempArray = new T [currSize];

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
template<class T>
void T_ADT<T> :: add (T value)
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
template<class T>
void T_ADT<T> :: _append (T value)
{
    add(value);
}

// inserting value at a given index ...
template<class T>
void T_ADT<T> :: insert (int index, T value)
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
template<class T>
void T_ADT<T> :: _delete (int index)
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
template<class T>
int T_ADT<T> :: search (T value)
{
	int length = getLength();
	int index = -1;
	
	for (int i=0;i<length;i++)
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
template<class T>
T T_ADT<T> :: get (int index)
{
	int currLength = getLength();
	
	if(index > currLength)
	{
		return -1;
	}
	return basePtr[index];
}
template<class T>
void T_ADT<T> :: set (int index, T value)
{
	int currLength = getLength();
	
	if(index > currLength)
	{
		return;
	}
	basePtr[index] = value;
}

template<class T>
T T_ADT<T> :: mx ()
{
	int currLength = getLength();
	T key = basePtr[0];
	for(int i=1;i<currLength;i++)
	{
		T tmp = basePtr[i];
		if(key < tmp)
		{
			key = tmp;
		}
	}
	return key;
}

template<class T>
T T_ADT<T> :: mn ()
{
	int currLength = getLength();
	T key = basePtr[0];
	for(int i=1;i<currLength;i++)
	{
		T tmp = basePtr[i];
		if(key > tmp)
		{
			key = tmp;
		}
	}
	return key;
}

/// Dependent function / helper method ....
template<class T>
void T_ADT<T> :: _swap (T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
}

// reverseing the array .....
template<class T>
void T_ADT<T> :: reverse ()
{
	int currLength = getLength();
	int length = currLength/2;
	
	for(int i=0;i<length;i++)
	{
		_swap(basePtr[i],basePtr[currLength-1-i]);
	}
}

/// rotate by n index right.....
template<class T>
void T_ADT<T> :: rotate (int index)
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
template<class T>
void T_ADT<T> :: shift (int index)
{
	rotate(index);
}

/// Distructor/Dynamic Distructor....
template<class T>
T_ADT<T> :: ~T_ADT()
{
    delete []basePtr;
    basePtr = nullptr;
}

