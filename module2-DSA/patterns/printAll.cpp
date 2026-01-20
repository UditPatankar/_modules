#include<iostream>
using namespace std;

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

int main() {
    
    int n;
    cin >> n;
    
    cout << "_________\n01:\n\n";
    print_01(n);
    cout << "_________\n02:\n\n";
    print_02(n);
    cout << "_________\n03:\n\n";
    print_03(n);
    cout << "_________\n04:\n\n";
    print_04(n);
    cout << "_________\n05:\n\n";
    print_05(n);
    cout << "_________\n06:\n\n";
    print_06(n);
    cout << "_________\n07:\n\n";
    print_07(n);
    cout << "_________\n08:\n\n";
    print_08(n);
    cout << "_________\n09:\n\n";
    print_09(n);
    cout << "_________\n10:\n\n";
    print_10(n);
    cout << "_________\n11:\n\n";
    print_11(n);
    cout << "_________\n12:\n\n";
    print_12(n); 
    cout << "_________\n13:\n\n";
    print_13(n); 
    cout << "_________\n14:\n\n";
    print_14(n); 
    cout << "_________\n15:\n\n";
    print_15(n); 
    cout << "_________\n16:\n\n";
    print_16(n); 
    cout << "_________\n17:\n\n";
    print_17(n); 
    cout << "_________\n18:\n\n";
    print_18(n); 
    cout << "_________\n19:\n\n";
    print_19(n); 

    return 0;
}