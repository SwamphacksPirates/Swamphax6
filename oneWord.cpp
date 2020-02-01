// this file outputs to std::out one word at a time from a text input to
// std::in.
//acts as a basic unix filter with "<" functionality
// #ifdef LINUX
// #include <unistd.h>
// #endif
// #ifdef WINDOWS
// #include <windows.h>
// #endif


#include <chrono>
#include <ctime>
#include <iostream>
// #include <queue>
#include <string>
#include <cctype>
#include <iterator>
#include <map>

using namespace std;

// void mySleep(unsigned long long sleepMs)
// {
//     #ifdef LINUX
//     usleep(sleepMs * 1000);   // usleep takes sleep time in us (1 millionth of a second)
//     #endif
//     #ifdef WINDOWS
//     Sleep(sleepMs);
//     #endif
// }
int main(){
    // int x = 90000;
    string word;
    cout << "<span class=\"rotate\">";
    while(!cin.eof()){
        // mySleep(9000000000);
        cin >> word;
        if (cin.get() != EOF)
        cout << word << "|";
    }
    cout << "</span>";



    // queue<std::string> text;
    // string word;
    // //while there is input, save it to the queue
    // while(cin.get()){
    //     char cha = cin.get();
    //
    //     //if its a letter or a punctuation, add it to the word.
    //     while(isalpha(cha) || ispunct(cha)){
    //         word += cha;
    //     }
    //     word.append('\0');
    //     //place the word in the queue
    //     text.push(word);
    // }
    // while(!text.empty()){
    //     cout << text.front();
    //     text.pop();
    // }
    // char cha;
    // string word;
    // // map<char, int> clist;
    // map<unsigned, string> wlist;
    //
    // // int count = 0;
    // // int countn = 0;
    // unsigned i = 0;
    // while (cin.get(cha)) {
    //     if(isalpha(cha) || isdigit(cha) || ispunct(cha)){
    //         // ++ clist[cha];
    //         word += cha;   //add the character to the current word
    //     }
    //     else{
    //         if (!(word.empty())){
    //             wlist.emplace(i, word);
    //             ++i;
    //         }
    //         // ++wlist[word].first = ++count; ///not working
    //         word.clear();
    //     }
    // }
    //
    // // unsigned long long x = 999999;
    // // while(!wlist.empty()){
    //         for (auto itr = wlist.begin(); itr != wlist.end(); ++itr){
    //             std::this_thread::sleep_for(2);
    //             cout << itr->second;
    //
    //             }
    //         // }
}
