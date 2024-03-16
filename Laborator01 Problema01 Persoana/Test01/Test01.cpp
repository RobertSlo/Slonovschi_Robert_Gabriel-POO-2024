
#include <iostream>
#include <vector>
#include <string>
#include "pch.h"

using namespace System;
using namespace std;

ref struct Person {
    String^ nume;
    int varsta;
};

int main(array<System::String^>^ args)
{
    Console::WriteLine("Introduceti numarul de persoane: ");
    int N;
    while (!(int::TryParse(Console::ReadLine(), N)) || N <= 0) {
        Console::WriteLine("|Input invalid. Introduceti un numar valid: ");
    }

    array<Person^>^ persoane = gcnew array<Person^>(N);
    for (int i = 0; i < N; ++i) {
        persoane[i] = gcnew Person();
        Console::WriteLine("Introduceti numele persoanei " + (i + 1) + ": ");
        persoane[i]->nume = Console::ReadLine();

        Console::WriteLine("Introduceti varsta persoanei " + (i + 1) + ": ");
        while (!(int::TryParse(Console::ReadLine(), persoane[i]->varsta)) || persoane[i]->varsta <= 0) {
            Console::WriteLine("Input invalid. Introduceti o valoare valida: ");
        }
    }

    Console::WriteLine("Lista de persoane:");
    for (int i = 0; i < N; ++i) {
        Console::WriteLine("Nume: " + persoane[i]->nume + ", Varsta: " + persoane[i]->varsta);
    }
    return 0;
}
