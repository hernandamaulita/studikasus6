#include <iostream>
#include <string>

using namespace std;

class nilai {
  public:
  string dosen, matkul;
  int nilai, min, max, rata_rata, i, batas;
void input_matkuldosen();
void input_nilai();
void nilaimax_min_rata();
};

void nilai:: input_matkuldosen()
{
  
  cout<<"Nama Dosen : ";cin>>dosen;
  cout<<"Nama Matkul : ";cin>>matkul;
}
void nilai::input_nilai()
{
  int batas;
  int angka[batas];
  for(int i=0; i<batas; i++){
    cout<<"Masukkan nilai mahasiswa ke- "<<i<<":";
    cin>>angka[i];
    cout<<"Nilai mahasiswa ke-"<<k<<" : "<<angka[k]<<endl;
    }
}

void nilai::nilaimin_max_rata(){
  int max, min, j, batas;
  int array[j];
  for (int j=0; j<batas; j++){
  if(array[j]>max){
    max=array[j];
  }
  if(array[j]<min){
    min=array[j];
    cout<<"nilai minimum : "<<min<<endl;
  }
    cout<<"Nilai maksimum : "<<max<<endl;
    cout<<"Nilai minimum : "<<min<<endl;
  }
}
int main(){
  nilai mk;
  mk.input_matkuldosen();
  mk.input_nilai();
  mk.nilaimin_max_rata();

};


