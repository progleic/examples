# Examples [![Run on Repl.it](run_on_replit.svg)](https://repl.it/github/progleic/examples)

[Programação (LEIC.009)](https://moodle2324.up.pt/course/view.php?id=5284) @ [LEIC](https://paginas.fe.up.pt/~estudar/cursos/licenciatura-engenharia-informatica/)

To compile the programs, execute `make` at the top level directory
or individually per each directory of examples.

## Hello C++

- ["Hello world!"](https://github.com/progleic/examples/blob/main/01/hello.cpp)
- ["Hello world!" - variant without "using namespace std"](https://github.com/progleic/examples/blob/main/01/hello2.cpp)
- ["Hello world!" - variant with chaotic indentation](https://github.com/progleic/examples/blob/main/01/hello-not-indented.cpp)
- [Factorial](https://github.com/progleic/examples/blob/main/01/factorial.cpp)

## Variables, primitive types, expressions

- [Primitive integer types - representation size and constants defined by `<climits>`](https://github.com/progleic/examples/blob/main/02/sizeof_and_climits.cpp)
- [Use of `auto`](https://github.com/progleic/examples/blob/main/02/auto.cpp)

## Control flow

- [Factorial (again)](https://github.com/progleic/examples/blob/main/03/factorial.cpp) (`factorial`)
- [Maximum of two `int` values](https://github.com/progleic/examples/blob/main/03/max.cpp) (`max`)
- [Leap years](https://github.com/progleic/examples/blob/main/03/is_leap_year.cpp) (`is_leap_year`)
- [Days in a month](https://github.com/progleic/examples/blob/main/03/days_in_month.cpp) (`days_in_month`)
- [Prime number check](https://github.com/progleic/examples/blob/main/03/days_in_month.cpp) (`is_prime`)
- [Reference variables](https://github.com/progleic/examples/blob/main/03/reference_variables.cpp) 
- [Call-by-reference](https://github.com/progleic/examples/blob/main/03/get_min_max.cpp)  (`get_min_max`)

## `struct` types, arrays, C-strings

- [`point2d` struct type](https://github.com/progleic/examples/blob/main/04/point2d.cpp)
- [`interval` struct type](https://github.com/progleic/examples/blob/main/04/interval.cpp)
- [`struct` memory alignment and padding](https://github.com/progleic/examples/blob/main/04/struct_alignment.cpp)
- [`struct` types and arrays combined](https://github.com/progleic/examples/blob/main/04/structs_and_arrays.cpp)
- [`reverse` function over `int` arrays](https://github.com/progleic/examples/blob/main/04/reverse.cpp)
- [`length`, `copy` and `concat` C-string functions](https://github.com/progleic/examples/blob/main/04/cstring_functions.cpp)
- [Range-based `for` loops](https://github.com/progleic/examples/blob/main/04/range_based_for_loops.cpp)
- [Buffer overflow - example 1](https://github.com/progleic/examples/blob/main/04/buffer_overflow_1.cpp)
- [Buffer overflow - example 2](https://github.com/progleic/examples/blob/main/04/buffer_overflow_2.cpp)

## Pointers

- [Pointer basics - the `&` and `*` operators](https://github.com/progleic/examples/blob/main/05/pointer_basics.cpp)
- [Pointers and arrays](https://github.com/progleic/examples/blob/main/05/pointers_and_arrays.cpp)
- [Pointers and buffer overflows!](https://github.com/progleic/examples/blob/main/05/pointer_buffer_overflow.cpp)
- [Arrays of pointers](https://github.com/progleic/examples/blob/main/05/arrays_of_pointers.cpp)
- [`argc` and `argv` parameters for `main` (another array-of-pointers example)](https://github.com/progleic/examples/blob/main/05/main_with_args.cpp)
- [Pointers and `struct` types](https://github.com/progleic/examples/blob/main/05/pointers_and_structs.cpp)
- [`nullptr`: the null pointer !](https://github.com/progleic/examples/blob/main/05/null_pointer.cpp)
- [`envp` parameter for `main` (example of `nullptr` use)](https://github.com/progleic/examples/blob/main/05/main_with_env_args.cpp)
- [`nullptr` access (don't do it!)](https://github.com/progleic/examples/blob/main/05/null_pointer_access.cpp)
- [Pointer arithmetic](https://github.com/progleic/examples/blob/main/05/pointer_arithmetic.cpp)
- [C-string functions making use of pointer arithmetic](https://github.com/progleic/examples/blob/main/05/cstring_functions.cpp)
- [`reverse` function making use of pointer arithmetic](https://github.com/progleic/examples/blob/main/05/reverse.cpp)

## Dynamic memory

- ["reverse print" program](https://github.com/progleic/examples/blob/main/06/reverse_print.cpp)
- [The `simple_vector` data type](https://github.com/progleic/examples/blob/main/06/simple_vector.cpp)
- [Singly-linked lists](https://github.com/progleic/examples/blob/main/06/sll.cpp)
- [Doubly-linked lists](https://github.com/progleic/examples/blob/main/06/dll.cpp)
- [Binary search trees](https://github.com/progleic/examples/blob/main/06/bst.cpp)

## Template functions and structs

- [`abs_diff` template function](https://github.com/progleic/examples/blob/main/07/abs_diff.cpp)
- [`get_min_max_sum` template function](https://github.com/progleic/examples/blob/main/07/get_min_max_sum.cpp)
- [`contains` template function](https://github.com/progleic/examples/blob/main/07/contains.cpp)
- [Use of `std::sort` over `int` array](https://github.com/progleic/examples/blob/main/07/sort1.cpp)
- [Use of `std::sort` using custom comparison function](https://github.com/progleic/examples/blob/main/07/sort2.cpp)
- [`point2d` template type and associated functions](https://github.com/progleic/examples/blob/main/07/point2d.cpp)
- [Use of `std::pair`, `typedef` and `auto`](https://github.com/progleic/examples/blob/main/07/pair.cpp)
- [`simple_vector` template type](https://github.com/progleic/examples/blob/main/07/simple_vector_template.cpp)

## Use of classes and objects - introduction

- [Small code fragments involving `std::string`](https://github.com/progleic/examples/blob/main/08/string_examples.cpp)
- [`std::string` and range-based `for` loops](https://github.com/progleic/examples/blob/main/08/string_range_based_for_loops.cpp)
- [Heterogram test - anoter `std::string` example](https://github.com/progleic/examples/blob/main/08/heterogram.cpp)
- [Read and sort values - example use of `std::vector`](https://github.com/progleic/examples/blob/main/08/read_and_sort_values.cpp)
- [Stream-based I/O - sum values in a file (several variants)](https://github.com/progleic/examples/blob/main/08/ifstream_sum.cpp)
- [Stream-based I/O - error recovery](https://github.com/progleic/examples/blob/main/08/error_recovery.cpp)

## Definition of classes

- [`fraction`](https://github.com/progleic/examples/blob/main/09/fraction.hpp)
- [Use of `fraction`](https://github.com/progleic/examples/blob/main/09/fraction_example.cpp)
- [`polynomial`](https://github.com/progleic/examples/blob/main/09/polynomial.hpp)
- [Use of `polynomial`](https://github.com/progleic/examples/blob/main/09/polynomial_example.cpp)


## Separate compilation

- [Makefile illustrating separate compilation](https://github.com/progleic/examples/blob/main/10/Makefile)
- `fraction`: [header](https://github.com/progleic/examples/blob/main/10/fraction.hpp), [implementation](https://github.com/progleic/examples/blob/main/10/fraction.cpp)
- `polynomial`: [header](https://github.com/progleic/examples/blob/main/10/polynomial.hpp), [implementation](https://github.com/progleic/examples/blob/main/10/polynomial.cpp)
- [Use of `fraction`](https://github.com/progleic/examples/blob/main/10/fraction_example.cpp)
- [Use of `polynomial`](https://github.com/progleic/examples/blob/main/10/polynomial_example.cpp)

## Template classes

- `simple_vector`: [definition](https://github.com/progleic/examples/blob/main/11/simple_vector.hpp) 
and [test program](https://github.com/progleic/examples/blob/main/11/vector_example)
- `pair`: [definition](https://github.com/progleic/examples/blob/main/11/pair.hpp) 
and [test program](https://github.com/progleic/examples/blob/main/11/pair_example)

## Class inheritance

- `person` and `teacher` example: [header](https://github.com/progleic/examples/blob/main/12/persons.hpp), [implementation](https://github.com/progleic/examples/blob/main/12/persons.cpp), and [small test program](https://github.com/progleic/examples/blob/main/12/test_persons.cpp)
- `shape` abstract class example: [header](https://github.com/progleic/examples/blob/main/12/shapes.hpp), [implementation](https://github.com/progleic/examples/blob/main/12/shapes.cpp), and [small test program](https://github.com/progleic/examples/blob/main/12/test_shapes.cpp)


## Operator overloading

- `fraction`: [header](https://github.com/progleic/examples/blob/main/13/fraction.hpp), [implementation](https://github.com/progleic/examples/blob/main/13/fraction.cpp)
- `polynomial`: [header](https://github.com/progleic/examples/blob/main/13/polynomial.hpp), [implementation](https://github.com/progleic/examples/blob/main/13/polynomial.cpp)
- [Use of `fraction`](https://github.com/progleic/examples/blob/main/13/fraction_example.cpp)
- [Use of `polynomial`](https://github.com/progleic/examples/blob/main/13/polynomial_example.cpp)

## STL

- [Using `std::deque`](https://github.com/progleic/examples/blob/main/14/deque_example.cpp)
- [Iterators and `std::vector`](https://github.com/progleic/examples/blob/main/14/vector_iterators.cpp)
- [Reverse iterator example](https://github.com/progleic/examples/blob/main/14/reverse_iterator_example.cpp)
- [Iterators and `erase` + `insert`](https://github.com/progleic/examples/blob/main/14/erase_and_insert.cpp)
- [Iterators and `erase`](https://github.com/progleic/examples/blob/main/14/erase_example.cpp)
- [Use of `std::sort`](https://github.com/progleic/examples/blob/main/14/sorting_examples.cpp)
- [Use of `std::sort` (2)](https://github.com/progleic/examples/blob/main/14/sorting_examples2.cpp)
- [Use of `set`](https://github.com/progleic/examples/blob/main/14/set_example.cpp)
- [Use of `map`](https://github.com/progleic/examples/blob/main/14/map_example.cpp)
- [Use of `multiset`](https://github.com/progleic/examples/blob/main/14/multiset_example.cpp)
- [Use of `multimap`](https://github.com/progleic/examples/blob/main/14/multimap_example.cpp)
