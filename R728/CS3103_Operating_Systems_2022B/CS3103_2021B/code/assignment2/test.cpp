#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <random>
#include <vector>

#include <pthread.h>
#include <semaphore.h>
#include <string.h>
#include <unistd.h>

using std::cout;
using std::endl;
using std::string;
using std::vector;

struct pid_data
{
    pthread_t threadID;
    string status;
};
pid_data threadid_status[4];

int main()
{
    int myints[] = {2, 7, 10, 5, 6, 4, 9, 3};
    auto p_value = *std::min_element(myints + 1, myints + 7 + 1);
    std::cout << "The smallest element is " << p_value << endl;
}

// int main()
// {
//     string original = "=Nyps:bY09m=!:iDh9zcYZX[[yzp7R3ygN?YyFl0xsqZ3>4kCk";
//     string classify(original);

//     cout << original << endl;

//     for (char &c : classify)
//     {
//         if (isupper(c))
//             c = tolower(c);
//         else if (!isalpha(c))
//             c = (char)NULL;
//     }

//     cout << classify << endl;

//     classify.erase(std::remove(classify.begin(), classify.end(), (char)NULL), classify.end());

//     cout << classify << endl;

//     cout << classify[0] << endl;
// }

// void test_output()
// {
//     auto i = 1;
//     while (!buffer.Empty())
//     {
//         cout << buffer.first() << " ";
//         buffer.deQueue();

//         if (buffer.size() % 50 == 0)
//             cout << "[" << i++ << "]" << endl;
//     }
// }

// for (auto i = 1; i <= NumOfClass; i++)
//     text << i << "\t";
// text << endl;
// for (auto i = 1; i <= NumOfClass; i++)
//     text << classlabelList[i] << "\t";
// text << endl;

// text << *std::min_element(classlabelList + 1, classlabelList + NumOfClass + 1);