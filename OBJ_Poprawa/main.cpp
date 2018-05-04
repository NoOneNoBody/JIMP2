//Wykonal Michal Warzecha I rok WEAIiB grupa 5b
#include <iostream>
#include <fstream>
#include "bmp.h"
#include "obj.h"
#include "Exceptions.h"

int main(int argc, char* argv[]) {

    JiMP2::BMP bmp(800,600);
    Object obj;
    try
    {
        obj.loadFromFile(argv[1]);
    }
    catch(Exceptions& e)
    {
        e.printException();
        return 1;
    }
    OrthogonalProjection(bmp,obj,400,300,100); //Funkcja do rysowania rzutu prostok¹tnego, znajduje siê w pliku obj.cpp od lini 154
    std::ofstream outfile("out.bmp", std::ofstream::binary);
    outfile << bmp;
	return 0;
}
