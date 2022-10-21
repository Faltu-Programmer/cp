#ifndef T_ADT_H
	#define T_ADT_H

///#include<iostream>
template<class T>
class T_ADT
{
private:
    T *basePtr;
    int Size;
    int Length;
public:
    T_ADT();
    T_ADT(int);

    /// getter methods ... 
    int getSize ();
    int getLength();

    /// setter methods ... 
    void setSize(int);
    void setLength(int);

    /// iterator methods
    T* begin();
    T* end();

    /// Display method ...
    void display ();

    void largerArray ();

    /// mutator or manupulator methods
    void add (T);
    void _append (T);

    void insert (int, T);
    void _delete(int);
    int search (T);
    
    T get(int);
    void set (int, T);
    
    T mx();
    T mn();
    
    void reverse ();
    void rotate (int);
    void shift (int);
    
    /// Dependent function / helper method ....     
    void _swap (T&, T&);
    
    ~T_ADT();
};

#endif 
