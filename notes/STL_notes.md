# Vectors

*Prerequisites:* include the `vector` header

__Functions:__
* push_back(element) --> adds an element to the *end* of the vector
* size() --> returns the # of elements in the vector
* empty() --> _checks_ if the vector is empty
* clear() --> _removes_ all elements from the vector
* resize() --> resizes the vector to contain a specified number of elements
* pop_back() --> _removes ONE_ element (can specify)

__Interating:__
```cpp

// Range-based Loop

for(int value: myVector) {
    std::cout << value << " ";
}

// Iterators

for(auto it = myVector.begin(); it != myVector.end(); it++){
    std::cout << *it << " ";
}
```

