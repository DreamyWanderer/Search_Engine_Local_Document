#include "lib.h"
using namespace std;

int countWords(wstring* &cur, int n);
int countInitialWords(wstring &s);
void removeStopwords(wstring &s);
void unsignedDocument(wstring &s);
bool isToken(wchar_t c);
void standardized(wstring &word);