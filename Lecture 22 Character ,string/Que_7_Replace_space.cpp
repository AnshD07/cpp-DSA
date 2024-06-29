// https://www.codingninjas.com/studio/problems/replace-spaces_1172172

/* #######  using extra string #######*/

// #include <bits/stdc++.h>
// string replaceSpaces(string &str){
// 	string temp = "";
// 	for(int i=0 ; i<str.length() ; i++){
// 		if( str[i] == ' '){
// 			temp.push_back('@');
// 			temp.push_back('4');
// 			temp.push_back('0');
// 		}
// 		else{
// 			temp.push_back(str[i]);
// 		}
// 	}
// 	return temp;
// }

/*  without using extra string  */

// #include <bits/stdc++.h>
// string replaceSpaces(string &str){
// 	int i=0;
//     while(str[i] != '\0'){
//         if(str[i]==' '){
//             // s.insert(i,"@");
//             str[i]='@';
//             str.insert(i+1,"40");
//             i+=1;
//         }
//         i++;
//     }

//     return str;
// }

#include <iostream>
using namespace std;

string replacespace(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            // s.insert(i,"@");
            s[i] = '@';
            s.insert(i + 1, "40");
            i += 1;
        }
        i++;
    }

    return s;
}

int main()
{
    string s = "my name is ansh";

    cout << replacespace(s);
}