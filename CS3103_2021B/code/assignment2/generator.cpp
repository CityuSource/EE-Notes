#include <random>
static const int ALEN=50;

char* str_generator(void){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(48, 122);
    char *art = new char[ALEN+3];

    for (int i=0; i<ALEN; ++i)
        art[i] = char(dis(gen));
    art[ALEN] = 0;
    return art;
}
