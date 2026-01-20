#include<iostream>
using namespace std;

#pragma region Mypatterns

void print_01(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "* "; 
        }
        cout << "\n";
    }
}
void print_02(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* "; 
        }
        cout << "\n";
    }
}
void print_03(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " "; 
        }
        cout << "\n";
    }
}
void print_04(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i; 
        }
        cout << "\n";
    }
}
void print_05(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n+1)-i; j++) {
            cout << "*"; 
        }
        cout << "\n";
    }
}
void print_06(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n+1)-i; j++) {
            cout << j; 
        }
        cout << "\n";
    }
}
void print_07(int n) {
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n-i; j++) {
            cout << " "; 
        }
        for(int k = 1; k <= (2*i)-1; k++) {
            cout << "*";
        }
        for(int j = 1; j <= n-i; j++) {
            cout << " "; 
        }
        cout << "\n";
    }
}
void print_08(int n) {
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j < i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= (2*n)-(2*i-1); k++) {
            cout << "*";
        }
        for(int j = 1; j < i; j++) {
            cout << " ";
        }
        cout << "\n";
    }
}
void print_09(int n) {

      // upper
      for(int i = 1; i <= (n/2); i++) {
            
            //space
            for(int j = 0; j < (n/2)-i; j++) {
                  cout << " ";
            }
            //star
            for(int k = 0; k < (2*i)-1; k++) {
                  cout << "*";
            }
            //space
            for(int j = 0; j < (n/2)-i; j++) {
                  cout << " ";
            }
            cout << "\n";
      }
      // lower
      for(int i = 1; i <= (n/2); i++) {
            
            //space
            for(int j = 0; j < i-1; j++) {
                  cout << " ";
            }
            //star
            for(int k = 0; k < n-((2*i)-1); k++) {
                  cout << "*";
            }
            //space
            for(int j = 0; j < i-1; j++) {
                  cout << " ";
            }
            cout << "\n";
      }
}
void print_10(int n) {
    
    for(int i = 1; i <= n; i++) {
        
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        cout << "\n";
    }
    
    for(int i = 1; i <= n-1; i++) {
        
        for(int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        for(int j = 1; j <=i; j++) {
            cout << " ";
        }
        cout << "\n";
    }
}
void print_11(int n) {
    
    for(int i = 1; i <= n; i++) {
        int start = 1;
        if(i % 2 == 0) start = 0;
        else start = 1;
        
        for(int j = 1; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << "\n";
    }
}
void print_12(int n) {

    for(int i = 1; i <= n; i++) {
        
        //left
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        for(int k = 1; k <= n-i; k++) {
            cout << " ";
        }
        //right
        for(int k = 1; k <= n-i; k++) {
            cout << " ";
        }
        for(int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << "\n";
    }
}
void print_13(int n) {
    
    int num = 1;

    for(int i =1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
}
void print_14(int n) {
    
    for(int i = 1; i <= n; i++) {
        char ch = 65;
        for(int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << "\n";
    }
}
void print_15(int n) {
    
    for(int i = 1; i <= n; i++) {
        char ch = 65;
        for(int j = 1; j <= (n+1)-i; j++) {
            cout << ch;
            ch++;
        }
        cout << "\n";
    }
}
void print_16(int n) {

    char ch = 65;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << ch;
        }
        ch++;
        cout << "\n";
    }
}
void print_17(int n) {

    char ch2 = 65;
    for(int i = 1; i <= n; i++) {
        char ch = 65;

        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= i; k++) {
            cout << ch;
            ch++;
        }
        for(int k = 1; k <= i-1; k++) {
            char ch2 = 'A' + (i-k-1);
            cout << ch2;
        }
        cout << "\n";
    }
}
void print_18(int n) {

    for(int i = 1; i <= n; i++) {
        
        for(int j = 1; j <= i; j++) {
            char ch = (65+(n-1))-(i-j);
            cout << ch << " ";
        }
        cout << "\n";
    }
}
void print_19(int n) {

    for(int i = 1; i <= n/2; i++) {

        for(int j = 1; j <= ((n/2)+1-i); j++) {
            cout << "*";
        }
        for(int k = 1; k <= (2*i)-2; k++) {
            cout << " ";
        }
        for(int j = 1; j <= ((n/2)+1-i); j++) {
            cout << "*";
        }
        cout << "\n";   
    }
    for(int i = 1; i <= n/2; i++) {

        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        for(int k = 1; k <= n-2*i; k++) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    
}


#pragma endregion

void divider(string s);

int main() {
    
    int n;
    cin >> n;
    
    divider("01");
    print_01(n);
    
    divider("02");
    print_02(n);
    
    divider("03");
    print_03(n);
    
    divider("04");
    print_04(n);
    
    divider("05");
    print_05(n);
    
    divider("06");
    print_06(n);
    
    divider("07");
    print_07(n);
    
    divider("08");
    print_08(n);
    
    divider("09");
    print_09(n);
    
    divider("10");
    print_10(n);
    
    divider("11");
    print_11(n);
    
    divider("12");
    print_12(n);
    
    divider("13"); 
    print_13(n);
    
    divider("14"); 
    print_14(n);
    
    divider("15"); 
    print_15(n);
    
    divider("16"); 
    print_16(n);
    
    divider("17"); 
    print_17(n);
    
    divider("18"); 
    print_18(n);
    
    divider("19"); 
    print_19(n); 
    

    return 0;
}

void divider(string s) {
    cout << "\n----------- pattern " << s << ":\n\n";
}