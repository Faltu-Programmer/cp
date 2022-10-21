#include<iostream>
class ADT
{
private:
    int *basePtr;
    int size;
    int length;
public:
    ADT();
    ADT(int);

    /// getter methods ... 
    int getSize ();
    int getLength();

    /// setter methods ... 
    void setSize(int);
    void setLength(int);

    /// iterator methods
    int* begin();
    int* end();

    /// Display method ...
    void display ();

    void largerArray (int);

    /// mutator or manupulator methods
    void add (int);
    void _append (int);

    void insert (int, int);
    
    void _delete(int);


    
    ~ADT();
};

ADT::ADT(int size)
{
    /// size can not be -ve.
    if(size < 0){size = 0;}
    basePtr = new int[size];
    this->size = size;
    length = 0;
}
ADT::ADT() : ADT(0)
{
    //size = length = 0;
}

int ADT::getSize ()
{
    return this->size;
}
int ADT::getLength()
{
    return this->length;
}

void ADT::setSize(int size)
{
    if(!(size <= getSize()))
    {
        /// need to create new array and copy everything for old to new one.....
        this->size = size;
    }
}
void ADT::setLength(int length)
{
    if(!(length < 0))
    {
        this->length = length;
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
        std :: cout << *(begin()+itr) << " ";
    }
    std::cout << "\n";
}

void ADT::largerArray (int largerSize)
{
    int* tempArray = new int [largerSize];

    for(int itr = 0; itr < getLength(); itr++)
    {
        tempArray[itr] = basePtr[itr];
    }
    delete []basePtr;
    basePtr = tempArray;
    tempArray = nullptr;
    setSize(largerSize);
}

void ADT::add (int value)
{
    int currSize = getSize();
    int currLength = getLength();
    if(currSize == currLength)
    {
        largerArray(currSize*2);
    }
    basePtr[currLength] = value;
    setLength(currLength+1);
}
void ADT::_append (int value)
{
    add(value);
}

void ADT::insert (int index, int value)
{
    int currSize = getSize();
    int currLength = getLength();

    if(index < currSize)


}

void ADT::_delete(int)
{
    
}




ADT::~ADT()
{
    delete []basePtr;
    basePtr = nullptr;
}













int main ()
{
    ADT obj(5);
    for (int i=0; i < 3; i++)
    {
        obj._append (i+1);
    }
	obj.insert(4,45);
    obj.display();
    std::cout << obj.getLength() << " " << obj.getSize() << "\n";

	return 0;	
}





