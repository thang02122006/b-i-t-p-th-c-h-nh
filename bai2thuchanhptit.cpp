// Ham doi vi tri hai phan tu
void swap(int &a, int &b) {
 int temp =a;
 a=b;
 b=temp;
 }
 // Ham sap xep tang
void sortArrTang(int a[], int n) {
  for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++){
      if(a[i]>a[j]){
         swap(a[i], a[j]);
       }
	}
 }
