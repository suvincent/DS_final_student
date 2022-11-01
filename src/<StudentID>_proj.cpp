#include "./nthu_bike.h"
#include <chrono>
#include <ctime>    

int main(int argc, char** argv)
{
    
    auto start = std::chrono::system_clock::now();
    string selectedCase = argv[1];
    cout << "You have set " << selectedCase << " as your path:" << "\n";
    cout << "-------------------------------------------" << endl;

    // insert your code here
    cout << "start your data structure final from here!" << endl;

    // record execution time
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    cout << "-------------------------------------------" << endl;
    std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s"
              << std::endl;
    return 0;
}