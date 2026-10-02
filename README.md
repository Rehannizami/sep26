  #### 1. C++ Fundamentals & Control Flow

  • Basic I/O & Types: Input/output with std::cin / std::cout,
  arithmetic operations, and string concatenation in p1.cpp.
  • Conditional Branching & Loops: if/else logic, for, while, and do-
  while loops, along with loop interruption (break) in p1.cpp:24-45.
  • Nested Loops & Pattern Printing: Generating 2D star patterns and
  handling coordinate loops in p9.cpp (pattern1, pattern2) and
  test.cpp:28.

  #### 2. Arrays, Strings & STL Containers

  • Static & Sized Arrays: Array initialization, calculating memory
  sizes with sizeof, array traversals, and cumulative sums in p4.cpp,
  p14.cpp, and test.cpp.
  • Dynamic Sizing with STL Vector: Safe dynamic arrays using
  std::vector, calculating size (.size()), and sum/average
  calculations in p2.cpp:4 and p3.cpp.
  • String Manipulation & Algorithms:
      • Two-pointer in-place string reversal and palindrome validation
      in p10.cpp:25-49, hasnat.cpp, and megha.cpp.
      • Array statistical operations (finding min, max, sum, average)
      in test.cpp:81-111.


  #### 3. Pointers & Memory Management

  • Pointer Basics: Address-of operator (&), pointer declarations, and
  dereferencing (*) in pointers.cpp (create, dereferencing).
  • Double Pointers: Pointers to pointers (int** ptr2 = &ptr1;) in
  p8.cpp:136-140.
  • Dynamic Memory Allocation: Dynamic memory management using new[]
  and delete[] within class constructors/destructors in agy.cpp:37-42.

  #### 4. Structures & Object-Oriented Programming (OOP)

  • Structures (struct): Grouping heterogeneous data attributes and
  state management in p8.cpp:89 and p10.cpp:7.
  • Class Basics & Encapsulation:
      • Defining classes, access specifiers (public, private,
      protected), and getters/setters in p5.cpp:3 (Book, Car) and
      p6.cpp:44 (Employee).
      • Inline vs. out-of-line method definitions using the scope
      resolution operator (::).
      • Default and parameterized constructor overloading in p6.cpp:23
      (Car, Phones).
  • Friend Functions: Granting non-member functions access to private
  members via friend in p6.cpp:63 (Employee2).
  • Inheritance Varieties:
      • Single inheritance: Vehicle -> Car1.
      • Multi-level inheritance: Family -> MyChild -> MyGrandchild.
      • Multiple inheritance: father, mother -> offspring.
  • Polymorphism:
      • Compile-time: Function overloading (in Mixy) and operator
      overloading (operator+ in Complex).
      • Run-time (Dynamic Binding): Virtual functions (virtual),
      method overriding (override), and calling derived behavior
      through base class pointers (Base*) in p7.cpp:72-99 (Base,
      Derived).


  #### 5. Generic Programming & Templates

  • Function Templates: Generic functions with single and multiple
  type parameters in p8.cpp:4 (myMax), p13.cpp (findMax, printPair),
  and p15.cpp.
  • Class Templates: Generic classes with single and multiple types in
  p8.cpp:15 (tempy, tempy1) and p13.cpp:58 (Box).
  • Default Template Arguments: Assigning default types in class
  templates in p8.cpp:58 (tempy2) and p13.cpp:87 (KeyValuePair).
  • Template Specialization: Full/explicit specialization for specific
  types (e.g. char) in p13.cpp:117 (Printer<char>).
  • Non-Type Template Parameters: Value-based compile-time parameters
  in p13.cpp:132 (StaticArray).
  • Template Metaprogramming & Variable Templates: Compile-time
  constant expressions and recursive factorial computation (Factorial,
  pi).

  #### 6. Custom Generic Data Structures

  • Generic Linear Search: Searching elements across arrays of
  arbitrary types in agy.cpp:6 (findIndex).
  • Generic Stack Implementation: Custom array-based generic stack ADT
  with push, pop, peek, bounds verification (overflow/underflow), and
  dynamic capacity management in agy.cpp:31 (Stack).
