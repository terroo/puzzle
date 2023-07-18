#include "puzzle.hpp"
#include <experimental/random>

int main(int argc, char **argv){

  std::srand(std::time(nullptr));
  int x;
  std::vector<int> nums;

  while( nums.size() < 16 ){
    x = std::experimental::randint(1,16);
    if( std::find( nums.begin(), nums.end(), x ) != nums.end() ){
      continue;
    }else{
      nums.push_back(x);
    }
  }

  auto p = std::make_unique<Puzzle>(nums);
  p->run();
  return 0;
}

