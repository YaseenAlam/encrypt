#include<iostream>
#include<string>
#include<ctime>
#include<stdlib.h>

using namespace std;

string decrypt(string str);
string encrypt(string str);
int randoms();

enum CODE {
	A = 78, //N
	B = 69, //E
	C = 81, //Q
	D = 74, //J
	E = 65, //A
	F = 80, //P
	G = 77, //M
	H = 84, //T
	I = 79, //O
	J = 90, //Z
	K = 88, //X
	L = 70, //F
	M = 68, //D
	N = 83, //S
	O = 75, //K
	P = 72, //H
	Q = 85, //U
	R = 73, //I
	S = 89, //Y
	T = 71, //G
	U = 67, //C
	V = 87, //W
	W = 76, //L
	X = 82, //R
	Y = 86, //V
	Z = 66, //B

	//lower case 97 - 122

	a = 101,
	b = 103,
	c = 110,
	d = 102,
	e = 104,
	f = 111,
	g = 97,
	h = 105,
	i = 112,
	j = 118,
	k = 106,
	l = 113,
	m = 98,
	n = 107,
	o = 114,
	p = 100,
	q = 108,
	r = 115,
	s = 99,
	t = 109,
	u = 116,
	v = 121,
	w = 122,
	x = 117,
	y = 120,
	z = 119,
	space = 126,
	til = 32 //~
};

inline char getChar(CODE c)
{
	return (char) c;
}

int main()
{
	string str;
	cout << "Enter the plain text: ";
	getline(cin, str);
	CODE code;

	int x = randoms();

	//this only displays the encrypted string.
	for (int i = 0; i < x; i++)
		str = encrypt(str);

	cout << str << endl;

	cout << x << endl;

	system("pause");

	//system("cls");

	int anw = 0;

	cout << "\ndecrypt?";
	cin >> str;

	cout << "whats the key? ";
	cin >> anw;
	
	
	for (int i = 0; i < anw; i++)
		str = decrypt(str);

	cout << str << endl;	
}

int randoms()
{
	int gen;

	srand(time(NULL));
	gen = (rand() % 5 + 1);

	return gen;
}

/*it takes in encrypted string, compares with values of enum 
before encryption with the value after one to retrieve the values of the original string*/

string encrypt(string str)
{
	CODE code;
	for (int in = 0; in < str.size(); in++)
	{
		switch (str[in])
		{
			case 'A': code = A; break;
			case 'B': code = B; break;
			case 'C': code = C; break;
			case 'D': code = D; break;
			case 'E': code = E; break;
			case 'F': code = F; break;
			case 'G': code = G; break;
			case 'H': code = H; break;
			case 'I': code = I; break;
			case 'J': code = J; break;
			case 'K': code = K; break;
			case 'L': code = L; break;
			case 'M': code = M; break;
			case 'N': code = N; break;
			case 'O': code = O; break;
			case 'P': code = P; break;
			case 'Q': code = Q; break;
			case 'R': code = R; break;
			case 'S': code = S; break;
			case 'T': code = T; break;
			case 'U': code = U; break;
			case 'V': code = V; break;
			case 'W': code = W; break;
			case 'X': code = X; break;
			case 'Y': code = Y; break;
			case 'Z': code = Z; break;

				//lowercase

			case 'a': code = a; break;
			case 'b': code = b; break;
			case 'c': code = c; break;
			case 'd': code = d; break;
			case 'e': code = e; break;
			case 'f': code = f; break;
			case 'g': code = g; break;
			case 'h': code = h; break;
			case 'i': code = i; break;
			case 'j': code = j; break;
			case 'k': code = k; break;
			case 'l': code = l; break;
			case 'm': code = m; break;
			case 'n': code = n; break;
			case 'o': code = o; break;
			case 'p': code = p; break;
			case 'q': code = q; break;
			case 'r': code = r; break;
			case 's': code = s; break;
			case 't': code = t; break;
			case 'u': code = u; break;
			case 'v': code = v; break;
			case 'w': code = w; break;
			case 'x': code = x; break;
			case 'y': code = y; break;
			case 'z': code = z; break;
			case ' ': code = space; break;
			case '~': code = til; break;
		}
		str[in] = getChar(code); //takes in instant of CODE to return back to char :D

	}
	
	return str;
}
string decrypt(string str)
{
	
	for (int i = 0; i < str.size(); i++)
	{
		switch (str[i])
		{
			case 'A': str[i] = 'E'; break;
			case 'B': str[i] = 'Z'; break;
			case 'C': str[i] = 'U'; break;
			case 'D': str[i] = 'M'; break;
			case 'E': str[i] = 'B'; break;
			case 'F': str[i] = 'L'; break;
			case 'G': str[i] = 'T'; break;
			case 'H': str[i] = 'P'; break;
			case 'I': str[i] = 'R'; break;
			case 'J': str[i] = 'D'; break;
			case 'K': str[i] = 'O'; break;
			case 'L': str[i] = 'W'; break;
			case 'M': str[i] = 'G'; break;
			case 'N': str[i] = 'A'; break;
			case 'O': str[i] = 'I'; break;
			case 'P': str[i] = 'F'; break;
			case 'Q': str[i] = 'C'; break;
			case 'R': str[i] = 'X'; break;
			case 'S': str[i] = 'N'; break;
			case 'T': str[i] = 'H'; break;
			case 'U': str[i] = 'Q'; break;
			case 'V': str[i] = 'Y'; break;
			case 'W': str[i] = 'V'; break;
			case 'X': str[i] = 'K'; break;
			case 'Y': str[i] = 'S'; break;
			case 'Z': str[i] = 'J'; break;

				//lowercase

			case 'a': str[i] = 'g'; break;
			case 'b': str[i] = 'm'; break;
			case 'c': str[i] = 's'; break;
			case 'd': str[i] = 'p'; break;
			case 'e': str[i] = 'a'; break;
			case 'f': str[i] = 'd'; break;
			case 'g': str[i] = 'b'; break;
			case 'h': str[i] = 'e'; break;
			case 'i': str[i] = 'h'; break;
			case 'j': str[i] = 'k'; break;
			case 'k': str[i] = 'n'; break;
			case 'l': str[i] = 'q'; break;
			case 'm': str[i] = 't'; break;
			case 'n': str[i] = 'c'; break;
			case 'o': str[i] = 'f'; break;
			case 'p': str[i] = 'i'; break;
			case 'q': str[i] = 'l'; break;
			case 'r': str[i] = 'o'; break;
			case 's': str[i] = 'r'; break;
			case 't': str[i] = 'u'; break;
			case 'u': str[i] = 'x'; break;
			case 'v': str[i] = 'j'; break;
			case 'w': str[i] = 'z'; break;
			case 'x': str[i] = 'y'; break;
			case 'y': str[i] = 'v'; break;
			case 'z': str[i] = 'w'; break;
			case '~': str[i] = ' '; break;
		}
	}
	return str;
}