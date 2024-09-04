# Pointers
# THEORY
A pointer in C++ is a variable that stores the memory address of another variable. Pointers are used for dynamic memory allocation, arrays, and functions.
When we increment a pointer, we increase the pointer by the size of the data type to which it points. ANd since an arrays data is in a contigious manner, if we increment the pointer, the index also gets incremented.

How do we use pointers?
1. Define a pointer variable
2. Assigning the address of a variable to a pointer using the unary operator (&) which returns the address of that variable.
3. Accessing the value stored in the address using unary operator (*) which returns the value of the variable located at the address specified.
# Syntax
data_type *pointer_name;







    
    

    #include<iostream>
    using namespace std;
    int main()
    {
    int var = 10;
    int *ptr;
    ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}

# Algorithm

Start.
1. Declare an integer variable var and initialize it to 10.
2. Declare an integer pointer ptr.
3. Assign the address of var to ptr using the address-of operator &.
4. Display the value of var.
5. Display the address of var.
6. Display the value stored in ptr (which is the address of var).
7. Display the value pointed to by ptr using the dereference operator.
8. End.
