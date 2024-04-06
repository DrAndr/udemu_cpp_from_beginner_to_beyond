/**
 * Section 13
 * Subject: OOP Classes and objects
 * Lesson 140 [ Implementing Member Methods ]
 *
 * Expected result:
                Deposit OK.
                Withdraw OK.
                Not sufficient found.
 */

#include <iostream>

#include "Account.h"
// #include "Account.cpp" // TODO resolve via IDE settings DONE

/**
 Args for the Tasks.json

{
	"tasks": [
		{
		    "type": "cppbuild",
		    "label": "C/C++: clang++ сборка активного файла",
		    "command": "/usr/bin/clang++",
		    "args": [
		        "-fcolor-diagnostics",
		        "-fansi-escape-codes",
	ADDED --->  "-Wall", // notification hightlighting
	ADDED --->  "-std=c++17", // define version
		        "-g",
	ADDED --->  "${fileDirname}/*.cpp", // say to take all .cpp file for 
		        "-o",
		        "${fileDirname}/${fileBasenameNoExtension}.o"
		    ],
		    "options": {
		        "cwd": "${fileDirname}"
		    },
		    "problemMatcher": [
		        "$gcc"
		    ],
		    "group": {
		        "kind": "build",
		        "isDefault": true
		    },
		    "detail": "Задача создана отладчиком."
		},
	],
	"version": "2.0.0"
}
*/

using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0))
        cout << "Deposit OK." << endl;
    else
        cout << "Deposit not allowed." << endl;

    if (frank_account.withdraw(500.0))
        cout << "Withdraw OK." << endl;
    else
        cout << "Not sufficient found." << endl;

    //...

    if (frank_account.withdraw(1500.0))
        cout << "Withdraw OK." << endl;
    else
        cout << "Not sufficient found." << endl;

    cout << endl;

    return 0;
}
