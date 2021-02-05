#pragma once
#include <iostream>
#include <string>

// STRUCTURE's STRUCTURE
/*
   struct type_name {
       member_type1 member_name1;
	   member_type2 member_name2;
       member_type3 member_name3;
	   .
	   .
	   .
   } object_names;
*/

struct mystruct_example {
public: // default visibility
	int data; // 1

} mystruct_variable;

struct mystruct_example_2 {
public: // default visibility
	int data; // 2

};

struct mystruct_example_3 {
public: // default visibility
	int data; // 3

};

struct movie {
public: // default visibility
	int year;
	std::string name;

	void print() {
		std::cout << "(Name: " << name << ", year of release: " << year << ")" << std::endl;
	}
};

struct person {
public: // default visibility
	int age;
	std::string name;
	movie favorite_movie;

	void print() {
		std::cout << "Person with name " << name << " is of age " << age << " and has a favorite film: ";
		favorite_movie.print();
	}

private:
	void private_function() {};
};


void example_struct_function() {
	

	// Simple example
	mystruct_variable.data = 1;

	mystruct_example_2 mystruct_variable_2;
	mystruct_variable_2.data = 2;

	mystruct_example_3 mystruct_variable_3;
	mystruct_variable_3.data = 3;

	std::cout << "Mystruct example 1 has data: " << mystruct_variable.data   << std::endl;
	std::cout << "Mystruct example 2 has data: " << mystruct_variable_2.data << std::endl;
	std::cout << "Mystruct example 3 has data: " << mystruct_variable_3.data << std::endl;

	// Pointers to structures
	mystruct_example   * mystruct_example_ptr   = &mystruct_variable;
	mystruct_example_2 * mystruct_example_2_ptr = &mystruct_variable_2;
	mystruct_example_3 * mystruct_example_3_ptr = &mystruct_variable_3;

	std::cout << "Mystruct example 1 has data using pointer: " << mystruct_example_ptr->data   << std::endl;
	std::cout << "Mystruct example 2 has data using pointer: " << mystruct_example_2_ptr->data << std::endl;
	std::cout << "Mystruct example 3 has data using pointer: " << mystruct_example_3_ptr->data << std::endl;

	// Nested structures and pointers
	movie movie_1;
	movie_1.name = "Apocalypto";
	movie_1.year = 2005;

	person misho;
	misho.name = "Mihail";
	misho.age = 21;
	misho.favorite_movie = movie_1;
	
	// misho.private_function(); cannot call a private function

	misho.print();

	movie* movie_ptr = &(misho.favorite_movie); // taking the address of misho's favorite movie and assigning it to the movie_ptr variable

	// print misho's favorive movie using the movie pointer
	std::cout << "Misho's favorite movie using a pointer: ";
	movie_ptr->print();
}