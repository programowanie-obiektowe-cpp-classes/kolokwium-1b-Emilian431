#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta

class Artysta
{
  public:
  Artysta(): pseudonim{"Anonim"}, liczbasluchaczy{0} {}
  Artysta(const std::string& ps, unsigned int ls) : pseudonim{ps}, liczbasluchaczy{ls} {}
  void graj(std::ostream&) const {
    std::cout << pseudonim << liczbasluchaczy << endl;
  }
  const std::string& getPseudonim() const{
      return pseudonim;
  }
  unsigned getSluchacze() const{
      return liczbasluchaczy;
  }
  private:
  std::string pseudonim;
  unsigned int liczbasluchaczy;

};