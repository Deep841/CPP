#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n ? : ";
    cin>>n;

    //1
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //1.2
    // for(int i=1; i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //2
    // int i =1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //3
    // int i =1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<n-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //4
    // int i=1;
    // int count=1;
    //  while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //5
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //6
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i+j-1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //7
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i-j+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //8
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     char ch='A'+i-1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //9
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     char ch='A'+i-1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //10
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     char ch='A'+i+j-2;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //11
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     char ch='D'-i-j+2;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //12
    // int i=1;
    // int space=1;
    // while(space<=n){
    //     int j=1;
    //     while(j<=n-i){
    //         cout<<" ";
    //         j++;
    //     }
    //     while(j<=n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     space++;
    //     i++;
    // }

    //12.2
    // int i=1;
    // while(i<=n){

    //     int space=n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }

    //     int j=1;
    //     while(j<=n){
    //     cout<<"*";
    //     j++;
    //     }    
    // cout<<endl;
    // i++;
    // }

    //13
    // int count=1;
    // int i= 1;
    // while(i<=n){
    //     int j=1;

    //     while(j<=i){
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //14
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         char ch = 'A'+j-1;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //14.2
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     char ch = 'A'+j-1;
    //     while(j<=n){

    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //15
    // int i = 1;
    // char ch = 'A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //16
    // int i = 1;
    // while(i<=n){
    //     int j=1;
    //     char ch = 'A'+i+j-2;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //17
    // int i = 1;
    // while(i<=n){
    //     int j =1 ;
    //     while(j<=n-i+1){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //18
    // int i = 1;
    // while(i<=n){
    //     int space=1;
    //     while(space<=i-1){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j=1;
    //     while(j<=n-i+1){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //19
    // int i=1;
    // while(i<=n){
    //     int space = 1;
    //     while(space<=n-i){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //20
    // int i = 1;
    // while(i<=n){
    //     int space = 1 ;
    //     while(space <= i-1){
    //         cout<<" ";
    //         space++;
    //     }
    //     int count = i ;
    //     int j = 1;
    //     while(j<=n-i+1){
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //21
    // int i = 1;
    // int count = 1;
    // while(i<=n){
    //     int space = 1;
    //     while(space<=n-i){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<count;
    //         count ++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //22
    // int i = 1;
    // while(i <= n){
    //     int space = 1;
    //     while(space<=n-i){
    //         cout<<" ";
    //         space++;
    //     }
    //     int count = 1;
    //     int j = 1;
    //     while(j<=i){
    //         cout<<count;
    //         count++;
    //         j++;
    //     }
    //     int last_vala = 1;
    //     int pew_pew = i-1;
    //     while(last_vala<=i-1){
    //         cout<<pew_pew;
    //         pew_pew -- ;
    //         last_vala ++ ;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //23 : The Dabangg Pattern
    int i = 1;
    while(i<=n){
        int j = 1;
        int pew_pew = j;
        while(j<=n-i+1){
            cout<<pew_pew;
            pew_pew++;
            j++;
        }
        int star_vala = 1;
        while(star_vala<=i-1){
            cout<<"*";
            star_vala++;
        }
        int last_vale_stars = 1;
        while(last_vale_stars<=i-1){
            cout<<"*";
            last_vale_stars++;
        }
        int last_vale_no = 1;
        int meow = n-i+1;
        while(last_vale_no<=n-i+1){
            cout<<meow;
            meow --;
            last_vale_no++;
        }
        cout<<endl;
        i++;
    }
    return 0 ;
}