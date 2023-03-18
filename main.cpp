#include <iostream>
using namespace std;

int main ()
{
for (int i=1;i<=15;i++){
for (int j=1;j<=15-i;j++){
cout<<" ";
}
for (int k=1;k<=(i*2)-1;k++){
cout<<"*";
}
cout<<endl;
}
for (int i=1;i<=12;i++){
for (int j=1;j<i;j++){
cout<<" ";
}
for (int k=1;k<=(30-(i*2-1));k++){
if (k==1||k==(30-(i*2-1)))
cout<<"*";
else
cout<<" ";
}
cout<<"\n";
}
for (int i=2;i<=5;i++){
for (int j=13;j>=i;j--){
cout<<" ";
}
for (int k=1;k<=(i*2)+1;k++){
cout<<"*";
}
cout<<endl;
}
cout<<endl<<"\tRamadan Kareem"<<endl;
return 0;
}
