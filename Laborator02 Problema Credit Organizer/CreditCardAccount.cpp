#include "pch.h"
#include "CreditCardAccount.h"

using namespace System;

CreditCardAccount::CreditCardAccount(long number, double limit)
{
    accountNumber = number;
    creditLimit = limit;
    currentBalance = 0.0;
}

void CreditCardAccount::SetCreditLimit(double amount) {
    creditLimit = amount;
}

bool CreditCardAccount::MakePurchase(double amount)
{
    if (currentBalance + amount > creditLimit)
    {
        return false;
    }
    else
    {
        currentBalance += amount;
        return true;
    }
}

void CreditCardAccount::MakeRepayment(double amount)
{
    currentBalance -= amount;
}

void CreditCardAccount::PrintStatement()
{
    Console::WriteLine("Current balance: ");
    Console::WriteLine(currentBalance);
}

long CreditCardAccount::GetAccountNumber()
{
    return accountNumber;
}