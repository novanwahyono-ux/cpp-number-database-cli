# C++ Number Database CLI

A simple command-line application written in C++ that allows users to store numbers dynamically and search for a specific value using linear search.

## 🚀 Features

* Input numbers into a dynamic database (std::vector)
* Perform linear search to find the index of a number
* Input validation and error handling
* Clean and efficient memory usage (no unnecessary copies)

## 🛠️ Technologies Used

* C++
* STL (Standard Template Library)

  * `std::vector`
  * `std::cin / std::cout`

## 📌 How It Works

1. User inputs numbers into the database
2. Input stops when a sentinel value is entered
3. User enters a number to search
4. Program returns the index if found, or -1 if not found

## 💡 Key Concepts Demonstrated

* Passing vector by reference (`const std::vector<int>&`)
* Linear search algorithm
* Input validation (`std::cin.fail()`, buffer clearing)
* Efficient looping using `size_t`

## ▶️ Example

```
Input Number (-1 to stop): 10
Input Number (-1 to stop): 20
Input Number (-1 to stop): 30
Input Number (-1 to stop): -1

Search number: 20
Found at index: 1
```

## 📈 Future Improvements

* Replace linear search with binary search
* Add sorting functionality
* Convert into interactive menu system
* Add file/database persistence

## 👤 Author

Developed as part of a C++ learning journey toward high-performance systems and software engineering.
