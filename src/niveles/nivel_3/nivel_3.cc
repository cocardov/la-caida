#include "nivel_3.hh"
#include "../mazmorra_nivel_1/mazmorra_nivel_1.hh"
#include "../llanura_nivel_1/llanura_nivel_1.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace nivel_3
{
  void inic_nivel()
  {
    std::cout << "\n";
    std::cout << "  Encontrás la manera de avanzar entre escombros, subiendo y bajando piedras de varios \n";
    std::cout << "metro de altura, hasta que llegás a una nueva cavidad más iluminada. Te tomás un tiempo \n";
    std::cout << "para descansar. \n";
    std::cout << "\n";
    std::cout << "  Ves que más adelante la cueva se difurca tenés dos opciones: \n";
    std::cout << "1. Tomar el camino de la izquieda (parece que sigue bajando). \n";
    std::cout << "2. Tomar el camino de la derecha (sigue derecho). \n";
    std::cout << "\n";
    while (true)
    {
      std::string option;
      std::cout << "Tu elección: ";
      std::getline(std::cin, option);

      switch (std::atoi(option.c_str()))
      {
      case 1:
        mazmorra_nivel_1::inic_nivel();
        return;
      case 2:
        llanura_nivel_1::inic_nivel();
        return;
      default:
        std::cout << " \n";
        std::cout << " \n";
        std::cout << " \n";
        std::cout << "Por favor elige una opción válida" << std::endl;
        std::cout << " \n";
        std::cout << "1. Tomar el camino de la izquieda (parece que sigue bajando)";
        std::cout << "2. Tomar el camino de la derecha (sigue derecho)";
        std::cout << " \n";

        break;
      }
    }
  }

} // namespace nivel_3