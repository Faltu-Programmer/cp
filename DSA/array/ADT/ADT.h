#ifndef ADT_H
	#define ADT_H

///#include<iostream>
class ADT
{
private:
    int *basePtr;
    int Size;
    int Length;
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

    void largerArray ();

    /// mutator or manupulator methods
    void add (int);
    void _append (int);

    void insert (int, int);
    void _delete(int);
    int search (int);
    
    int get(int);
    void set (int, int);
    
    int mx();
    int mn();
    
    void reverse ();
    void rotate (int);
    void shift (int);
    void _swap (int&, int&);
    
    ~ADT();
};

#endif 
