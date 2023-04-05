// Managing Console I/O Oprations

/*
getline() Function:
    We can read and display a line of text more efficiently using the line-oriented 
    input/output functions getline() and write().
    The getline() function reads a whole line of text that ends with a newline character
    (transmitted by the RETURN key). This function can be invoked by using the object cin as follows

    cin.getline(line, size);

    This function call invokes the function getline() which reads character input into
    the variable line. The reading is terminated as soon as either the newline character
    '\n' is encountered or size-1 characters are read (whichever occures first).
    The newline character is read but saved. Instead, it is  replaced by null character.
*/

// Ex. Reading string with getline()

#include<iostream>

int main()
{
    int size = 20;
    char city[20];

    std::cout << "Enter city name: \n";
    std::cin >> city;
    std::cout << "City name: " << city << "\n\n";

    std::cout << "Enter city name again: \n";
    std::cin.getline(city, size);
    std::cout << "City name now: " << city << "\n\n";

    std::cout << "Enter another city name: \n";
    std::cin.getline(city, size);
    std::cout << "New city name: " << city << "\n\n";

    return 0;
}

/*
NOTE:
    During the first run, the newline charcter '\n' at the end of "Delhi" which is waiting in the
    input queue is read by the getline() that follows immediately and therefore it does
    not wait for any response to the prompt 'Enter city name again'. The character '\n'
    is read as an empty line. During the second run, the word "Delhi" (that was not read
    by cin) is read by the function getline() and, therefore, here again it does not wait 
    for any input to the prompt 'Enter city name again'. Note that the line of text
    "Greater Bombay" is correctly read by the second cin.getline(city, size); statement.
*/