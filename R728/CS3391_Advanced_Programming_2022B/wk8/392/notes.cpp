#include <functional>
#include <string>
#include <algorithm>
#include <vector>
#include <tuple>
#include <stdexcept>

using Predicate = std::function<int(int)>;

/**
 * ltrim removes from the left of a string the chars matching the predicate
 *
 * @param string str
 * @param Predicate pred
 */
static inline void ltrim(std::string &str, Predicate const &pred = isspace);

/**
 * rtrim removes from the right of a string the chars matching the predicate
 *
 * @param string str
 * @param Predicate pred
 */
static inline void rtrim(std::string &str, Predicate const &pred = isspace);

/**
 * trim removes from the left and the right of a string the chars matching the predicate
 *
 * @param string str
 * @param Predicate pred
 */
static inline void trim(std::string &str, Predicate const &pred = isspace);

/**
 * equal_ch generates a predicate lambda to check equality to char c
 *
 * @param char c
 * @return Predicate
 */
static inline Predicate equal_ch(char c);

/**
 * ltrim removes from the left of a string the chars equal to param c
 *
 * @param string str
 * @param char c
 */
static inline void ltrim(std::string &str, char c);

/**
 * rtrim removes from the right of a string the chars equal to param c
 *
 * @param string str
 * @param char c
 */
static inline void rtrim(std::string &str, char c);

/**
 * trim removes from the left and the right of a string the chars equal to param c
 *
 * @param string str
 * @param char c
 */
static inline void trim(std::string &str, char c);

int main()
{
    using test = std::tuple<std::string, std::string, std::string (*)(std::string)>;
    const std::vector<test> tests = {
        {
            {"  \t  string to trim \t \n \r ",
             "string to trim",
             [](std::string in)
             {
                 trim(in);
                 return in;
             }},
            {"abc TEXT def",
             " TEXT ",
             [](std::string in)
             {
                 trim(in, islower);
                 return in;
             }},
            {"  \t  string to trim \t \n \r ",
             "string to trim \t \n \r ",
             [](std::string in)
             {
                 ltrim(in);
                 return in;
             }},
            {"  \t  string to trim \t \n \r ",
             "  \t  string to trim",
             [](std::string in)
             {
                 rtrim(in);
                 return in;
             }},
            {"xxtrimxx",
             "trim",
             [](std::string in)
             {
                 trim(in, 'x');
                 return in;
             }},
            {"xxtrimxx",
             "trimxx",
             [](std::string in)
             {
                 ltrim(in, 'x');
                 return in;
             }},
            {"yytrimyy",
             "yytrim",
             [](std::string in)
             {
                 rtrim(in, 'y');
                 return in;
             }},
        }};

    for (auto &test : tests)
    {
        auto &input = std::get<0>(test);
        auto &expected = std::get<1>(test);
        auto &trim_func = std::get<2>(test);
        auto result = trim_func(input);

        if (result != expected)
        {
            char message[100];
            sprintf(message, R"(actual: "%s"; expected: "%s")", result.c_str(), expected.c_str());
            throw std::runtime_error(message);
        }
    }
}

static inline void ltrim(std::string &str, Predicate const &pred)
{
    str.erase(str.begin(), std::find_if_not(str.begin(), str.end(), pred));
}

static inline void rtrim(std::string &str, Predicate const &pred)
{
    str.erase((std::find_if_not(str.rbegin(), str.rend(), pred)).base(), str.end());
}

static inline void trim(std::string &str, Predicate const &pred)
{
    ltrim(str, pred);
    rtrim(str, pred);
}

static inline Predicate equal_ch(char c)
{
    return (int i)->int { return i == c; };
}

static inline void ltrim(std::string &str, char c)
{
    ltrim(str, equal_ch(c));
}

static inline void rtrim(std::string &str, char c)
{
    rtrim(str, equal_ch(c));
}

static inline void trim(std::string &str, char c)
{
    ltrim(str, equal_ch(c));
    rtrim(str, equal_ch(c));
}