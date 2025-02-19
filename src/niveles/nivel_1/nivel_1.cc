#include "nivel_1.hh"
#include "../nivel_2/nivel_2.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace nivel_1
{
  void intentarSubir();

  void inic_nivel()
  {
    std::cout << " \n";
    std::cout << " \n";
    std::cout << " \n";
    std::cout << " \n";
    std::cout << "  En un mundo donde la magia rebosa con cada paso dado, sos un mago que se adentra \n";
    std::cout << "en los principios de la antigua magia oscura. Caminando por un bosque de árboles \n";
    std::cout << "retorcidos, buscando hongos con propiedades raras, pisás una raíz que parecía \n";
    std::cout << "firme y el suelo se desmorona a tu alrededor. Caés por un túnel, te golpeás la \n";
    std::cout << "cabeza y perdés la consciencia...\n";
    std::cout << " \n";
    std::cout << "  Te despertás en el fondo, confundido. Ahora tenés dos opciones: \n";
    std::cout << "1. Intentar subir por el estrecho túnel por el que caíste.\n";
    std::cout << "2. Avanzar e intentar explorar la cueva." << std::endl;
    std::cout << " \n";

    while (true)
    {
      std::string option;
      std::cout << "Tu elección: ";
      std::getline(std::cin, option);

      switch (std::atoi(option.c_str()))
      {
      case 1:
        intentarSubir();
        return;
      case 2:
        nivel_2::inic_nivel();
        return;
      default:
        std::cout << "Por favor elige una opción válida" << std::endl;
        std::cout << " \n";
        std::cout << "1. Intentar subir por el estrecho túnel por el que caíste.\n";
        std::cout << "2. Avanzar e intentar explorar la cueva." << std::endl;
        std::cout << " \n";
        break;
      }
    }
  }

  void intentarSubir()
  {
    std::cout << " \n";
    std::cout << "  Intentás subir trepando por las piedras, pero éstas son muy lisas y no lográs \n";
    std::cout << "generar suficiente fricción. Desistís de la idea de volver a la superficie... \n";
    std::cout << " \n";
    std::cout << "2. Avanzar e intentar explorar la cueva. \n";
    std::cout << " \n";
    while (true)
    {
      std::string option;
      std::cout << "Tu elección: ";
      std::getline(std::cin, option);

      switch (std::atoi(option.c_str()))
      {
      case 2:
        nivel_2::inic_nivel();
        return;
      default:
        std::cout << "Por favor elige una opción válida" << std::endl;
        std::cout << " \n";
        std::cout << "2. Avanzar e intentar explorar la cueva. \n";
        std::cout << " \n";
        break;
      }
    }
    return;
  }
}; // namespace nivel_1