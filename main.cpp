#include <iostream>
#include <fstream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

/*

void usingstreams(const string& inputFile, const string& outputFile) {
    ifstream fin(inputFile);
    if (!fin.is_open()) {
        cout << "fail: " << inputFile << endl;
        return;
    }

    ofstream fout(outputFile);
    if (!fout.is_open()) {
        cout << "fail: " << outputFile << endl;
        fin.close();
        return;
    }

    int number, sum = 0;
    while (fin >> number) {
        sum += number;
    }

    fout << "sum: " << sum << endl;

    fin.close();
    fout.close();
    cout << "result wrote to file" << endl;
}

void sumfilepointers(const string& inputFile, const string& outputFile) {
    FILE* fin = fopen(inputFile.c_str(), "r");
    if (fin == nullptr) {
        cout << "fail " << inputFile << endl;
        return;
    }

    FILE* fout = fopen(outputFile.c_str(), "w");
    if (fout == nullptr) {
        cout << "fail: " << outputFile << endl;
        fclose(fin);
        return;
    }

    int number, sum = 0;
    while (fscanf(fin, "%d", &number) != EOF) {
        sum += number;
    }

    fprintf(fout, "sum: %d\n", sum);

    fclose(fin);
    fclose(fout);
    cout << "result wrote to file" << endl;
}

int main() {
    string inputFile = "input.txt";
    string outputFile = "output.txt";

    usingstreams(inputFile, outputFile);
    sumfilepointers(inputFile, outputFile);

    return 0;
}



void processNumbers(const string& inputFile, const string& negativeFile, const string& positiveFile) {
    ifstream fin(inputFile);
    if (!fin.is_open()) {
        cout << "fail: " << inputFile << endl;
        return;
    }

    ofstream foutNeg(negativeFile);
    if (!foutNeg.is_open()) {
        cout << "fale for negative: " << negativeFile << endl;
        fin.close();
        return;
    }

    ofstream foutPos(positiveFile);
    if (!foutPos.is_open()) {
        cout << "fale for positive: " << positiveFile << endl;
        fin.close();
        foutNeg.close();
        return;
    }

    double number;
    int negCount = 0, posCount = 0;
    while (fin >> number) {
        if (number < 0) {
            foutNeg << number << endl;
            negCount++;
        }
        else if (number > 0) {
            foutPos << number << endl;
            posCount++;
        }
    }


    foutNeg << "count of negative: " << negCount << endl;
    foutPos << "count of positive: " << posCount << endl;

    fin.close();
    foutNeg.close();
    foutPos.close();

    cout << "difference is counted. the result was wrote" << endl;
}

int main() {
    string inputFile = "input.txt";
    string negativeFile = "negative.txt";
    string positiveFile = "positive.txt";

    processNumbers(inputFile, negativeFile, positiveFile);

    return 0;
}*/


int main() {
    ifstream inputFile("D:/c++/homework1/input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        std::cerr << "fale input" << endl;
        return 1;
    }

    vector<double> numbers(20);
    int negativeCount = 0;

    for (int i = 0; i < 20; ++i) {
        inputFile >> numbers[i];
        if (numbers[i] < 0) {
            ++negativeCount;
            outputFile << "position: " << i << ", meaning: " << numbers[i] << endl;
        }
    }

    inputFile.close();
    outputFile.close();

    cout << "count of negative: " << negativeCount << endl;

    return 0;
}


