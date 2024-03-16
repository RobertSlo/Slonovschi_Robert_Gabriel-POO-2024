#include "stdafx.h"
#include "pch.h"
#using <System.dll>

using namespace System;

ref class Carte {
public:
    String^ nume;
    String^ autor;
    int varsta;
    int an_publicatie;
};

int main(array<System::String^>^ args) {
    Console::WriteLine("Introduceti numarul de carti: ");
    int N;
    while (!(int::TryParse(Console::ReadLine(), N)) || N <= 0) {
        Console::WriteLine("Input invalid. Introduceti un numar valid: ");
    }

    array<Carte^>^ carti = gcnew array<Carte^>(N);
    for (int i = 0; i < N; ++i) {
        carti[i] = gcnew Carte();
        Console::WriteLine("Introduceti numele cartii " + (i + 1) + ": ");
        carti[i]->nume = Console::ReadLine();

        Console::WriteLine("Introduceti numele autorului: ");
        carti[i]->autor = Console::ReadLine();

        Console::WriteLine("Introduceti varsta cartii: ");
        while (!(int::TryParse(Console::ReadLine(), carti[i]->varsta)) || carti[i]->varsta <= 0) {
            Console::WriteLine("Input invalid. Introduceti o valoare valida: ");
        }

        Console::WriteLine("Introduceti anul publicatiei: ");
        while (!(int::TryParse(Console::ReadLine(), carti[i]->an_publicatie)) || carti[i]->an_publicatie <= 0) {
            Console::WriteLine("Input invalid. Introduceti un an valid: ");
        }
    }

    Console::WriteLine("Lista de carti:");
    for (int i = 0; i < N; ++i) {
        Console::WriteLine("Nume: " + carti[i]->nume + ", Autor: " + carti[i]->autor
            + ", Varsta: " + carti[i]->varsta + ", An publicatie: " + carti[i]->an_publicatie);
    }

    return 0;
}
