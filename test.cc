// Your First C++ Program

#include <iostream>
#include <random>
int i = 0;

int main() {
    const char* colour[10] = { "GENERATE: [0010001010001001_START_HACK];", "value === #00101** HACK === ### 10100100101010% +++ f;", "For long **000== 666 [0][0] == ?____;;START_HACK_+++++;;;&&&& ?? ** MULTI;", "INT a = 12; && {999}", "T&& {} FOR REPEAT ** 44440044040 XX * +++;", "    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,6); **  distribution in range [1, 6]","while( ( n = rand() ) > RAND_MAX - (RAND_MAX-5)%6 )", "using namespace std;", "for( unsigned long j = 0; j < 100500; ++j )", "int main (int argc, char* argv[])"};
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(0,9);
    while (i < 9999999) {
      std::cout << colour[dist6(rng)] << "\n";
      i++;
    }
}
