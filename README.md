 102  10_Sort/10_Bubble_Sort.cpp 
		@@ -0,0 +1,102 @@
		#include<iostream>
		#include<string.h>
		using namespace std;
		#define max 20
		class bubble
		{
		    private:
		    int arr[20],n,i,j,temp=0;
		    char arr1[20][max],temp1[max];
		    public:
		    void accept1();
		    void accept2();
		    void sort_int();
		    void sort_char();
		    void display1();
		    void display2();
		};
		

		void bubble::accept1()
		{
		    cout<<"\nEnter number of elements of the integer array : ";
		    cin>>n;
		    cout<<"\nEnter the unsorted elements (integers) : "<<endl;
		    for(i=0;i<n;i++)
		    {
		        cin>>arr[i];
		    }
		}
		

		void bubble::accept2()
		{
		    cout<<"\nEnter number of elements of the string array : ";
		    cin>>n;
		    cout<<"\nEnter the unsorted elements (strings) : "<<endl;
		    for(i=0;i<n;i++)
		    {
		        cin>>arr1[i];
		    }
		}
		

		void bubble::sort_int()
		{
		    for(i=0;i<n-1;i++)
		    {
		        for(j=0;j<(n-i)-1;j++)
		        {
		            if(arr[j]>arr[j+1])
		            {
		                temp = arr[j+1];
		                arr[j+1] = arr[j];
		                arr[j] = temp;
		            }
		        }
		    }
		}
		

		void bubble::sort_char()
		{
		    for(i=0;i<n-1;i++)
		    {
		        for(j=0;j<(n-i)-1;j++)
		        {
		            if(strcmp(arr1[j],arr1[j+1])>0)
		            {
		                strcpy(temp1,arr1[j+1]);
		                strcpy(arr1[j+1],arr1[j]);
		                strcpy(arr1[j],temp1);
		            }
		        }
		    }
		}
		

		void bubble::display1()
		{
		    cout<<"\n\nThe Sorted elements(integers) are : "<<endl;
		    for(i=0;i<n;i++)
		    {
		        cout<<arr[i]<<"   ";
		    }
		}
		

		void bubble::display2()
		{
		    cout<<"\n\nThe Sorted elements(strings) are : "<<endl;
		    for(i=0;i<n;i++)
		    {
		        cout<<arr1[i]<<"   ";
		    }
		    cout<<"\n";
		}
		

		int main()
		{
		    bubble obj;
		    obj.accept1();
		    obj.accept2();
		    obj.sort_int();
		    obj.sort_char();
		    obj.display1();
		    obj.display2();
		    return 0;
		} 
 56  10_Sort/10_Insertion_Sort.cpp 
		@@ -0,0 +1,56 @@
		#include<iostream>
		using namespace std;
		class insertion
		{
		    private:
		        int arr[20],n,i,j;
		    public:
		    void accept();
		    void sort();
		    void display();
		};
		

		void insertion::accept()
		{
		    cout<<"\nEnter number of elements : ";
		    cin>>n;
		    cout<<"\nEnter the unsorted elements : "<<endl;
		    for(i=0;i<n;i++)
		    {
		        cin>>arr[i];
		    }
		}
		

		void insertion::sort()
		{
		    int temp;
		    for(i=1;i<n;i++)
		    {
		        temp = arr[i];
		        j = i - 1;
		        while((temp<arr[j]) && (j>=0))
		        {
		            arr[j+1] = arr[j];
		            j--;
		        }
		        arr[j+1] = temp;
		    }
		}
		

		void insertion::display()
		{
		    cout<<"\n\nThe elements after sorting are : "<<endl;
		    for(i=0;i<n;i++)
		    {
		        cout<<arr[i]<<"   ";
		    }
		}
		

		int main()
		{
		    insertion obj;
		    obj.accept();
		    obj.sort();
		    obj.display();
		    return 0;
		} 
 78  10_Sort/10_Quick_Sort.cpp 
		@@ -0,0 +1,78 @@
		#include<iostream>
		using namespace std;
		class quick
		{
		    public:
		    int arr[20],n,i,j,high,low;
		    void accept();
		    void swap(int *a,int *b);
		    int partition(int a[],int low,int high);
		    void sort(int a[],int low,int high);
		    void display();
		};
		

		void quick::accept()
		{
		    cout<<"\nEnter number of elements : ";
		    cin>>n;
		    cout<<"\nEnter the unsorted elements : "<<endl;
		    for(i=0;i<n;i++)
		    {
		        cin>>arr[i];
		    }
		    low = 0;
		    high = n-1;
		}
		

		void quick::swap(int *a,int *b)
		{
		    int temp;
		    temp = *a;
		    *a = *b;
		    *b = temp;
		}
		

		int quick::partition(int a[],int low,int high)
		{
		    int pivot = a[high];
		    int i = (low-1);
		    for(int j = low ; j<=high-1 ; j++ )
		    {
		        if(arr[j]<=pivot)
		        {
		            i++;
		            swap(&a[i],&a[j]);
		        }
		    }
		    swap(&a[i+1],&a[high]);
		    return (i+1);
		}
		

		void quick::sort(int a[],int low,int high)
		{
		    if(low<high)
		    {
		        int pi = partition(arr,low,high);
		

		        sort(arr,low,pi-1);
		        sort(arr,pi+1,high);
		    }
		}
		

		void quick::display()
		{
		    cout<<"\n\nThe elements after sorting are : "<<endl;
		    for(i=0;i<n;i++)
		    {
		        cout<<arr[i]<<"   ";
		    }
		}
		

		int main()
		{
		    quick obj;
		    obj.accept();
		    obj.sort(obj.arr,obj.low,obj.high);
		    obj.display();
		    return 0;
		} 
 66  10_Sort/10_Selection_Sort.cpp 
		@@ -0,0 +1,66 @@
		#include<iostream>
		using namespace std;
		class selection
		{
		    private:
		        int arr[20],n,i,j;
		    public:
		    void accept();
		    void swap(int *a,int *b);
		    void sort();
		    void display();
		};
		

		void selection::accept()
		{
		    cout<<"\nEnter number of elements : ";
		    cin>>n;
		    cout<<"\nEnter the unsorted elements : "<<endl;
		    for(i=0;i<n;i++)
		    {
		        cin>>arr[i];
		    }
		}
		

		void selection::swap(int *a,int *b)
		{
		    int temp;
		    temp = *a;
		    *a = *b;
		    *b = temp;
		}
		

		void selection::sort()
		{
		    int min_index;
		    for(i=0;i<n-1;i++)
		    {
		        min_index = i;
		        for(j=i+1;j<n;j++)
		        {
		            if(arr[min_index]>arr[j])
		            {
		                min_index = j;
		            }
		        }
		        swap(&arr[min_index],&arr[i]);
		    }
		}
		

		void selection::display()
		{
		    cout<<"\n\nThe elements after sorting are : "<<endl;
		    for(i=0;i<n;i++)
		    {
		        cout<<arr[i]<<"   ";
		    }
		}
		

		int main()
		{
		    selection obj;
		    obj.accept();
		    obj.sort();
		    obj.display();
		    return 0;
		} 
 128  10_Sort/10_merge_sort(divide&conquer).cpp 
		@@ -0,0 +1,128 @@
		//Code
		

		#include<iostream>
		using namespace std;
		

		class merge_sort
		{
		    private:
		        int n,z;
		        int A[20];
		    public:
		        void accept();
		        void display(int arr[]);
		        void mergesort(int arr[], int p, int r);
		        void merge(int arr[], int p, int q, int r);
		};
		

		void merge_sort::accept()
		{
		    cout<<"\nEnter the number of elements : ";
		    cin>>n;
		    cout<<"\nEnter the elements : \n";
		    for(z=0;z<n;z++)
		        cin>>A[z];
		    cout<<"\nUnsorted elements are : \n";
		    display(A);
		    mergesort(A,0,n-1);
		    cout<<"\nSorted elements are : \n";
		    display(A);
		}
		

		void merge_sort::display(int arr[])
		{
		    for(z=0;z<n;z++)
		        cout<<A[z]<<"\t";
		    cout<<endl;
		}
		

		void merge_sort::mergesort(int arr[], int p, int r)
		{
		    if(p<r)
		    {
		        int q = p+(r-p)/2;
		        mergesort(arr,p,q);
		        mergesort(arr,q+1,r);
		

		        merge(arr,p,q,r); 
		    }
		}
		

		void merge_sort::merge(int arr[], int p, int q, int r)
		{
		    int i, j, k; 
		    int n1 = q - p + 1; 
		    int n2 =  r - q; 
		

		    int L[n1], R[n2]; 
		

		    for (i = 0; i < n1; i++) 
		        L[i] = arr[p + i]; 
		    for (j = 0; j < n2; j++) 
		        R[j] = arr[q + 1+ j]; 
		

		    i = 0; // Initial index of first subarray 
		    j = 0; // Initial index of second subarray 
		    k = p; // Initial index of merged subarray 
		    while (i < n1 && j < n2) 
		    { 
		        if (L[i] <= R[j]) 
		        { 
		            arr[k] = L[i]; 
		            i++; 
		        } 
		        else
		        { 
		            arr[k] = R[j]; 
		            j++; 
		        } 
		        k++; 
		    } 
		

		    /* Copy the remaining elements of L[], if there 
		       are any */
		    while (i < n1) 
		    { 
		        arr[k] = L[i]; 
		        i++; 
		        k++; 
		    } 
		

		    /* Copy the remaining elements of R[], if there 
		       are any */
		    while (j < n2) 
		    { 
		        arr[k] = R[j]; 
		        j++; 
		        k++; 
		    }
		}
		

		int main()
		{
		    merge_sort m;
		    m.accept();
		    return 0;
		}
		

		/*OUTPUT
		
		safir@safir-Predator-PH315-51:~/Desktop/DAA codes$ g++ merge.cpp
		safir@safir-Predator-PH315-51:~/Desktop/DAA codes$ ./a.out
		
		Enter the number of elements : 5
		
		Enter the elements : 
		4
		2
		7
		9
		8
		
		Unsorted elements are : 
		4	2	7	9	8	
		
		Sorted elements are : 
		2	4	7	8	9
		
		*/
 116  10_Sort/10_quick_sort(divide&conquer).cpp 
		@@ -0,0 +1,116 @@
		//Code
		

		#include<iostream>
		#include<time.h>
		using namespace std;
		

		class quick_sort
		{
		    private:
		        int n,z;
		        int A[20];
		    public:
		        void swap(int* a, int* b);
		        void accept();
		        void display(int arr[]);
		        void quicksort(int arr[], int low, int high);
		        int partition(int arr[], int low, int high);
		};
		

		void quick_sort::swap(int* a, int* b)  
		{  
		    int t = *a;  
		    *a = *b;  
		    *b = t;  
		}
		

		void quick_sort::accept()
		{
		    cout<<"\nEnter the number of elements : ";
		    cin>>n;
		    cout<<"\nEnter the elements : \n";
		    for(z=0;z<n;z++)
		        cin>>A[z];
		    cout<<"\nUnsorted elements are : \n";
		    display(A);
		    time_t x, y;
		    time(&x);
		    quicksort(A,0,n-1);
		    time(&y);
		    double time_taken = double(y-x);
		    cout<<"\nTime take by function : "<<fixed<<time_taken;
		    cout<<"\nSorted elements are : \n";
		    display(A);
		}
		

		void quick_sort::display(int arr[])
		{
		    for(z=0;z<n;z++)
		        cout<<A[z]<<"\t";
		    cout<<endl;
		}
		

		void quick_sort::quicksort(int arr[], int low, int high)  
		{  
		    if (low < high)  
		    {  
		        /* pi is partitioning index, arr[p] is now  
		        at right place */
		        int pi = partition(arr, low, high);  
		

		        // Separately sort elements before  
		        // partition and after partition  
		        quicksort(arr, low, pi - 1);  
		        quicksort(arr, pi + 1, high);  
		    }  
		} 
		/* This function takes last element as pivot, places  
		the pivot element at its correct position in sorted  
		array, and places all smaller (smaller than pivot)  
		to left of pivot and all greater elements to right  
		of pivot */
		int quick_sort::partition(int arr[], int low, int high)  
		{  
		    int pivot = arr[high]; // pivot  
		    int i = (low - 1); // Index of smaller element  
		

		    for (int j = low; j <= high - 1; j++)  
		    {  
		        // If current element is smaller than the pivot  
		        if (arr[j] < pivot)  
		        {  
		            i++; // increment index of smaller element  
		            swap(&arr[i], &arr[j]);  
		        }  
		    }  
		    swap(&arr[i + 1], &arr[high]);  
		    return (i + 1);  
		} 
		

		int main()
		{
		    quick_sort q;
		    q.accept();
		    return 0;
		}
		

		/*OUTPUT
		
		safir@safir-Predator-PH315-51:~/Desktop/DAA codes$ g++ quick.cpp
		safir@safir-Predator-PH315-51:~/Desktop/DAA codes$ ./a.out
		
		Enter the number of elements : 5
		
		Enter the elements : 
		4
		2
		7
		9
		8
		
		Unsorted elements are : 
		4	2	7	9	8	
		
		Sorted elements are : 
		2	4	7	8	9
		*/
 59  1_city_temp.cpp 
		@@ -0,0 +1,59 @@
		/*wap to store temperature of two cities for a week and display*/
		#include <iostream>
		

		using namespace std;
		class temp
		{
		    private:
		        int arr1[7],arr2[7],i;
		        char city1[10],city2[10];
		    public:
		    void city();
		    void accept();
		    void display();
		};
		void temp::city()
		{
		    cout<<"\nEnter first city name : ";
		    cin>>city1;
		    cout<<"\nEnter second city name :";
		    cin>>city2;
		}
		void temp::accept()
		{
		    cout<<"\nEnter the temperatures for "<<city1<<" City :"<<endl;
		    for(i=0;i<7;i++)
		    {
		        cout<<city1<<" Day "<<i+1<<":";
		        cin>>arr1[i];
		    }
		    cout<<"\nEnter the temperatures for "<<city2<<" City :"<<endl;
		    for(i=0;i<7;i++)
		    {
		        cout<<city2<<" Day "<<i+1<<":";
		        cin>>arr2[i];
		    }
		}
		void temp::display()
		{
		    cout<<"\nThe temperatures of "<<city1<<" City :"<<endl;
		    for(i=0;i<7;i++)
		    {
		        cout<<"\n"<<city1<<" Day "<<i+1<<":";
		        cout<<arr1[i];
		    }
		    cout<<"\n\nThe temperatures of "<<city2<<" City :"<<endl;
		    for(i=0;i<7;i++)
		    {
		        cout<<"\n"<<city2<<" Day "<<i+1<<":";
		        cout<<arr2[i];
		    }    
		}
		int main()
		{
		    temp obj;
		    obj.city();
		    obj.accept();
		    obj.display();
		    return 0;
		} 
 176  2_medical_inventory.cpp 
		@@ -0,0 +1,176 @@
		#include<iostream>
		#include<string.h>
		int count = 0;
		using namespace std;
		struct inventory
		{	
			char name_medicine[50];
			float price_medicine;
			int quantity_medicine;
		};
		//*****************************************
		class invent
		{
			private:
				inventory medicine[100];
				int i,n,id,found,temp1,temp2;
				char search_name[50];
				char temp[50];
			public:
				void Add();
				void remove();
				void search();
				void display_stock();
				void modify_stock();
		};
		//------------------------------function definition--------------------------------
		void invent::Add()
		{
			cout<<"How many medicines you want to add? :";
			cin>>n;
			cout<<endl;
			cout<<"enter the following details:"<<endl;
			for(i=0;i<n;i++)
			{
				cout<<"Name : ";
				cin>>medicine[count+1].name_medicine;
				cout<<"Price : ";
				cin>>medicine[count+1].price_medicine;
				cout<<"Quantity : ";
				cin>>medicine[count+1].quantity_medicine;
				count++;
			}
		}
		

		void invent::remove()
		{
			cout<<"Enter the Id of medicine you want to remove"<<endl;
			cin>>id;
			if(id>count)
			{
				cout<<"ID not valid"<<endl;
			}
			else
			{
				strcpy(temp,medicine[id].name_medicine);
				temp1 = medicine[id].price_medicine;
				temp2 = medicine[id].quantity_medicine;
				for(i=id;i<count;i++)
				{
					medicine[i]=medicine[i+1];
				}
			count--;
			cout<<"Medicine successfully removed with details:"<<endl<<"ID : "<<id <<endl;
			cout<<"Name : "<<temp<<endl;
			cout<<"Price : "<<temp1<<endl;
			cout<<"Quantity : "<<temp2<<endl;
		}
		}
		void invent::search()
		{
			cout<<"Enter the name of medicine you want to search"<<endl;
			cin>>search_name;
			for(i=1;i<count+1;i++)
			{
				if(strcmp(medicine[i].name_medicine,search_name)==0)
				{
					cout<<"Medicine found "<<endl<<"\nDeatails: \n" ;
					cout<<"ID : "<<i<<endl;
					cout<<"Name : "<<search_name<<endl;
					cout<<"Price : "<<medicine[i].price_medicine<<endl;
					cout<<"Quantity : "<<medicine[i].quantity_medicine<<endl;
					found=1;
					break;
				}
				else
				{
					found=0;
				}
			}
			if(found==0)
			{
				cout<<"No Medicine with name "<<search_name<<" is found"<<endl;
			}
		}
		

		void invent::modify_stock()
		{
			cout<<"Enter the ID of medicine : ";
			cin>>id;
			if(id<=count)
			{
			cout<<endl<<"Enter new price of "<< medicine[id].name_medicine<<":";
			cin>>medicine[id].price_medicine;
			cout<<endl<<"Enter new Quantity of "<< medicine[id].name_medicine<<":";
			cin>>medicine[id].quantity_medicine;
			cout<<endl;
			strcpy(temp,medicine[id].name_medicine);
			}
			else
			{
				cout<<"INVALID ID"<<endl;
			}
		

		}
		void invent:: display_stock()
		{
			if(count==0)
			{
				cout<<"Stock is empty"<<endl;
			}
			else
			{
				for(i=1;i<count+1;i++)
				{
					cout<<"ID : "<<i<<endl;
					cout<<"Name : "<<medicine[i].name_medicine<<endl;
					cout<<"Price : "<<medicine[i].price_medicine<<endl;
					cout<<"Quantity : "<<medicine[i].quantity_medicine<<endl;
					cout<<"______________________________________________________"<<endl;
				}
			}
		}		
		//-----------------------------------Main function---------------------------------------
		

		int main()
		{
			invent o;
			int b,c;
			do
			{
				cout<<endl<<"1. Add"<<endl<<"2. Remove"<<endl<<"3. Search"<<endl<<"4. Display"<<endl<<"5. Modify"<<endl;
				cout<<"\n\nEnter Your choice : ";
				cin>>b;
				cout<<endl;
				switch(b)
				{
					case 1: o.Add();
							break;
					case 2: o.remove();
							break;
					case 3: o.search();
							break;
					case 4: o.display_stock();
							break;
					case 5: o.modify_stock();
							break;
					default: 
							cout<<"Invalid INPUT"<<endl;
				}
				cout<<" \n\n\n\nPress any key to Continue OR 1 to Exit"<<endl;
				cin>>c;
				if(c==1)
				{
					break;
				}	
				else
				{
				system("clear");
				continue;
				}
			}while(b!=0);
		return 0;
		}
		

		

		

 144  3_file.cpp 
		@@ -0,0 +1,144 @@
		#include<iostream>
		#include<fstream>
		using namespace std;
		

		class test
		{
		public:
			void writedata();
			void readdata();
		    void searchword();
			void replaceword();
			void deleteword();
		};
		

		void test::writedata()
		{
			fstream fp;
			char ch;
			fp.open("it.txt",ios::out|ios::app);
			cin>>ch;
			while (ch!='.')
		 	{
		 		fp.put(ch);
		 		cin>>ch;
		 	}
			fp.close();
		}
		

		void test::readdata()
		{
			fstream fp;
			char ch;
			fp.open("it.txt",ios::in);
			ch=fp.get();
			while(!fp.eof())
			{
				cout<<ch;
				ch=fp.get(); 
			}
			fp.close();
		}
		

		void test::searchword()
		{
			fstream fp;
			size_t pos;
			string line,word;
			fp.open("it.txt",ios::in);
			cout << "Enter word to search";
			cin>>word;
			//while(getline(fp,line))
			getline(fp,line);
			fp.close();
			pos=line.find(word);
			if(pos!=string::npos)
			{
				cout << "Found!";
			}
			else
			{
				cout << "Not Found.";
			}
		}
		

		void test::replaceword()
		{
			fstream fp;
			size_t pos;
			string line,old_word,new_word;
			fp.open("it.txt",ios::in);
			cout << "Enter word to be replaced";
			cin>>old_word;
			cout << "Enter word to be replaced by";
			cin>>new_word;
			getline(fp,line);
			fp.close();
			pos=line.find(old_word);
			if(pos!=string::npos)
			{
				line.replace(pos,old_word.length(),new_word);
				fp.open("it.txt",ios::out|ios::trunc);
				fp << line;
				fp.close();
			}
			else
			{
				cout << "Not Found.";
			}
		}
		

		void test::deleteword()
		{
			fstream fp;
			size_t pos;
			string line,old_word,new_word;
			fp.open("it.txt",ios::in);
			cout << "Enter word to be deleted";
			cin>>old_word;
			new_word="";
			getline(fp,line);
			fp.close();
			pos=line.find(old_word);
			if(pos!=string::npos)
			{
				line.replace(pos,old_word.length(),new_word);
				fp.open("it.txt",ios::out|ios::trunc);
				fp << line;
				fp.close();
			}
			else
			{
				cout << "Not Found.";
			}
		}
		

		int main()
		{
		  test ob;
		  int ch;
		  do
		  {
		   cout<<"\n1.Write\n2.Read\n3.Search\n4.Replace\n5.Delete\n6.Exit";
		   cout<<"\nEnter your choice= ";
		   cin>>ch;
		   switch(ch)
		   {
		    case 1:
			ob.writedata();
		    break;
		    case 2:
			ob.readdata();
		    break;
		    case 3:
			ob.searchword();
		    break;
		    case 4:
			ob.replaceword();
		    break;
		    case 5:
			ob.deleteword();
		    break;
		   }
		  }while(ch!=6);
		}
 213  4_Sparse_add_simple_fast.cpp 
		@@ -0,0 +1,213 @@
		#include<iostream>
		using namespace std;
		

		class Sparse_Matrix
		{
		  private:
		  int S_Mat[20][3];
		  public:
		  void Read_SparseMatrix();
		  void Display_SparseMatrix();
		  Sparse_Matrix Add_SparseMatrix(Sparse_Matrix B);
		  Sparse_Matrix Simple_Transporse();
		  Sparse_Matrix Fast_Transpose();
		};
		

		void Sparse_Matrix :: Read_SparseMatrix()
		{
		  int m,n,terms;
		  int i,row,col,val;
		  cout<<"Enter number of rows and columns of matrix: \n";
		  cin>>m>>n;
		  cout<<"Enter number of non-zero terms in the matrix: \n";
		  cin>>terms;
		  S_Mat[0][0]=m;
		  S_Mat[0][1]=n;
		  S_Mat[0][2]=terms;
		  for(i=1;i<=terms;i++)
		  {
		    cout<<"Enter row, column and value of non-zero terms: \n";
		    cin>>row>>col>>val;
		    S_Mat[i][0]=row;
		    S_Mat[i][1]=col;
		    S_Mat[i][2]=val;
		  }  
		}
		

		void Sparse_Matrix :: Display_SparseMatrix()
		{
		  int i,terms;
		  terms=S_Mat[0][2];
		  //cout<<"Row No.\t Col No.\t Value\n";
		  for(i=0;i<=terms;i++)
		  {
		    cout<<S_Mat[i][0]<<"\t\t"<<S_Mat[i][1]<<"\t\t"<<S_Mat[i][2]<<"\n";
		  }
		}
		

		Sparse_Matrix Sparse_Matrix :: Add_SparseMatrix (Sparse_Matrix B)
		{
			Sparse_Matrix C;
			int i, j, k, Row1, Row2, Col1, Col2, M1, M2; 
			Row1 = S_Mat[0][0];
			Col1 = S_Mat[0][1]; 
			M1 = S_Mat[0][2];
			Row2 = B.S_Mat[0][0];
			Col2 = B.S_Mat[0][1];
			M2 = B.S_Mat[0][2];
			if(Row1 == Row2 && Col1 == Col2)
			// checking dimensions if1
			{
				i = 1;j = 1;k = 1;
				C.S_Mat[0][0] = S_Mat[0][0];
				C.S_Mat[0][1] = S_Mat[0][1];
				while(i<=M1 && j<=M2)  //while1
				{
					if(S_Mat[i][0] == B.S_Mat[j][0])	//if2
					{
						if(S_Mat[i][1] == B.S_Mat[j][1])	//if3
						{
							C.S_Mat[k][0] = S_Mat[i][0];
							C.S_Mat[k][1] = S_Mat[i][1];
							C.S_Mat[k][2] = S_Mat[i][2] + B.S_Mat[j][2];
							i++;j++;k++;
						} //end if3
						else  //else of if3
						{
							if(S_Mat[i][1] < B.S_Mat[j][1]) 	//if4
							{
								C.S_Mat[k][0] = S_Mat[i][0];
								C.S_Mat[k][1] = S_Mat[i][1];
								C.S_Mat[k][2] = S_Mat[i][2];
								i++;k++;						
							} //end of if4
							else  //else of if4
							{
								C.S_Mat[k][0] = B.S_Mat[j][0];
								C.S_Mat[k][1] = B.S_Mat[j][1];
								C.S_Mat[k][2] = B.S_Mat[j][2];
								j++;k++;						
							} //end of else of if4					
						}  //end of else of if3
					} //end of if2
					else  //else of if2
					{
						if(S_Mat[i][0] < B.S_Mat[j][0]) 	//if5
						{
							C.S_Mat[k][0] = S_Mat[i][0];
							C.S_Mat[k][1] = S_Mat[i][1];
							C.S_Mat[k][2] = S_Mat[i][2];
							i++;k++;						
						} //end of if5
						else  //else of if5
						{
							C.S_Mat[k][0] = B.S_Mat[j][0];
							C.S_Mat[k][1] = B.S_Mat[j][1];
							C.S_Mat[k][2] = B.S_Mat[j][2];
							j++;k++;						
						} //end of else of if5	
					} //end of else of if2	
				} //end of while1
				while(i<=M1)  //while2
				{
					C.S_Mat[k][0] = S_Mat[i][0];
					C.S_Mat[k][1] = S_Mat[i][1];
					C.S_Mat[k][2] = S_Mat[i][2];
					i++;k++;
				} //end of while2
				while(j<=M2)  //while3
				{
					C.S_Mat[k][0] = B.S_Mat[j][0];
					C.S_Mat[k][1] = B.S_Mat[j][1];
					C.S_Mat[k][2] = B.S_Mat[j][2];
					j++;k++;
				} //end of while3
				C.S_Mat[0][2]=k-1;
				return C;		
			} //end of if1
			else
				cout <<"Sorry, matrices cannot be added because dimensions do not match.\n";
		} //end of function
		

		

		Sparse_Matrix Sparse_Matrix::Fast_Transpose()
		{
			Sparse_Matrix B;
			int M,T,i,j,k,Row,Col,Freq[20],RowStartPos[20];
			Row=S_Mat[0][0];
			Col=S_Mat[0][1];
			M=S_Mat[0][2];
		

		    B.S_Mat[0][0]=Col;
			B.S_Mat[0][1]=Row;
			B.S_Mat[0][2]=M;
			for(i=0;i<Col;i++)
			{
				Freq[i]=0;
			}
			for(i=1;i<=M;i++)
			{
				T=S_Mat[i][1];
				Freq[T]++;
			}
		

			RowStartPos[0]=1;
			for(i=1;i<Col;i++)
			{
				RowStartPos[i]=RowStartPos[i-1]+Freq[i-1];
			}
			for(i=1;i<=M;i++)
			{
				j=S_Mat[i][1];
				k=RowStartPos[j];
				B.S_Mat[k][0]=S_Mat[i][1];
				B.S_Mat[k][1]=S_Mat[i][0];
				B.S_Mat[k][2]=S_Mat[i][2];
				RowStartPos[j] = RowStartPos[j] + 1;
			}
			return B;
		}
		

		Sparse_Matrix Sparse_Matrix::Simple_Transporse()
		{
			Sparse_Matrix B;
			int Row,Col,i,j,k,T;
			Row=S_Mat[0][0];
			Col=S_Mat[0][1];
			T=S_Mat[0][2];
			B.S_Mat[0][0]=Col;
			B.S_Mat[0][1]=Row;
			B.S_Mat[0][2]=T;
			i=1;
			for(j=0;j<Col;j++)
			{
				for(k=1;k<=T;k++)
				{
					if(S_Mat[k][1]==j)
					{
						B.S_Mat[i][0]=S_Mat[k][1];
						B.S_Mat[i][1]=S_Mat[k][0];
						B.S_Mat[i][2]=S_Mat[k][2];
						i++;
					}	
				}
			}
			return B;
		}
		

		int main()
		{
			Sparse_Matrix A,B,C; 
			A.Read_SparseMatrix();
			//A.Display_SparseMatrix();
			//B.Read_SparseMatrix();
			//C=A.Add_SparseMatrix(B);
			//C=A.Fast_Transpose();
		    C=A.Simple_Transporse();
			cout<<"Matrix A:\n";
			A.Display_SparseMatrix();
			//cout<<"Matrix B:\n";
			//B.Display_SparseMatrix();
			cout<<"Matrix C:\n";
			C.Display_SparseMatrix();
		} 
 88  5_in_to_post.cpp 
		@@ -0,0 +1,88 @@
		#include<iostream>
		using namespace std;
		class stack
		{
			char exp[20];
			int top=-1;
			char st[20];
			public:
						void push(char val)
						{
							top++;
							st[top]=val;
						}
						char pop()
						{
							char c=st[top];
							top--;
							return c;
						}
						int precedence(char c)
						{
							if(c=='(')
							return 0;
		

							if(c=='+' || c=='-')
							return 1;
		

							if(c=='*' || c=='/')
							return 2;
		

							if(c=='^')
							return 3;
						}
						void intopost()
						{
							int i,k=0;
							char post[20];
							cout<<"Enter expression : ";
							cin>>exp;
		

							for(i=0;exp[i]!='\0';i++)
							{
								if( isalpha(exp[i]) || isdigit(exp[i]) )
								{
									post[k]=exp[i];
									k++;
								}
								else if(exp[i]=='(')
								{
									push('(');
								}
								else if(exp[i]==')')
								{
									char ch;
									while((ch=pop())!='(')
									{
										post[k]=ch;
										k++;
									}
								}
								else
								{
									while(precedence(st[top])>=precedence(exp[i]))
									{
										post[k]=pop();
										k++;
									}
									push(exp[i]);
								}
							}
							while(top>=0)
							{
								post[k]=pop();
								k++;
							}
							post[k]='\0';
							cout<<"Postfix form is : "<<post<<endl;
					}
		

		};
		int main()
		{
			stack s;
			s.intopost();
			return 0;
		}
		

		

 100  6_ll_using_pq.cpp 
		@@ -0,0 +1,100 @@
		#include<iostream>
		using namespace std;
		struct node{
			int priority;
			char name;
			node *next;
		};
		class linked_list{
		private:
			node *head, *tail, *prev,*tmp;
			char name;
			int priority;
		public:
			linked_list(){
			head=NULL;
			tail=NULL;
			}
			void add_patient(char name, int priority);
			void deleted();
			void display();
		};
		

		void linked_list::add_patient(char name,int priority){
			node *new_node=new node;
			new_node->name=name;
			new_node->priority=priority;
			if(head==NULL){
				head=new_node;
				tail=new_node;
			}
			else{
				if(new_node->priority < head->priority){
					new_node->next=head;
					head=new_node;
				}
				else if(new_node->priority > tail->priority||new_node->priority==tail->priority){
					tail->next=new_node;
					new_node->next=NULL;
					tail=new_node;
				}
				else if(head->priority==new_node->priority){
					new_node->next=head->next;
					head->next=new_node;
				}
				else if(priority > head->priority && priority < tail->priority){
					tmp=head->next;
					prev=head;
					while(priority > tmp->priority){
						prev=tmp;
						tmp=tmp->next;
					}
					prev->next=new_node;
					new_node->next=tmp;
				}
			}
		}
		

		void linked_list::display(){
			tmp=head;
			while(tmp!=NULL){
				cout<<"\nPATIENT NAME : "<<tmp->name<<"\nPATIENT PRIORITY : "<<tmp->priority<<endl;
				tmp=tmp->next;
			}
		}
		

		void linked_list::deleted(){
			node *tmp1;
			tmp1=head;
			if(head==NULL){
				cout<<"\n\n\tUnderflow.......!";
			}
			cout<<"DELETED\n******************\nPatient name: "<<tmp1->name<<"\nPatient priority: "<<tmp1->priority<<endl;
			head=head->next;
			delete tmp1;
		}
		

		int main(){
			linked_list a;
			int i=0;
			char nam;
			int priority;
			while(i!=9){
				cout<<"\n1.add_patient_patient   2.delete_patient    3.display     9.exit()\n";
				cout<<"Enter the choice :";
				cin>>i;
				switch(i){
					case 1:cout<<"\nEnter name of the patient : ";
					      cin>>nam;
					      cout<<"Enter name of the priority : ";
					      cin>>priority;
					      a.add_patient(nam,priority);
					      break;
					case 2:a.deleted();
					     break;
					case 3:a.display();
					     break;
				}
			}
			return 0;
		 } 
 225  7_metro_route.cpp 
		@@ -0,0 +1,225 @@
		/*IMPLEMENT THE METRO ROUTE(SERIES OF STATION) WITH THE FOLLOWING OPERATIONS:
		1.CREATE THE ROUTE WITH MIN 5 STATION
		2.ADD NEW STATION TO ROUTE 
		3.REMOVE THE STATION FROM THE ROUTE
		4.RENAME THE STATION
		5.DISPLAY THE ROUTE FROM SORCE TO DESTINATION
		6.DISPLAY THE ROUTE FROM DESTINATION TO SOURCE*/
		

		#include<iostream>
		using namespace std;
		#define size 10
		class cqueue
		{
		    private:
		        int front,rear,i;
		        char cq[size],ch,Station,search,name;
		    public:
		        cqueue()
		        {
		            i = 0;
		            front = -1;
		            rear = -1;
		        }
		        void stations();
		        void insert();
		        void Delete();
		        void Rename();
		        void display_std();
		        void display_dts();
		};
		

		void cqueue::stations()
		{
		    i = 0;
		    while(i<5)
		    {
		        cout<<"\nEnter the station : ";
		        cin>>cq[i];
		        rear++;
		        i++;
		    }
		    front = 0;
		}
		

		void cqueue::insert()
		{
		    if((front==0 && rear==size-1) || (front==rear+1))
		    {
		        cout<<"\nStation limit full. No more Stations can be added !!!";
		    }
		    else{
		        cout<<"\nEnter the Station : ";
		        cin>>Station;
		        if((rear==size-1)&&(front!=0))
		        {
		            rear = -1;
		        }
		            cq[++rear] = Station;
		            cout<<"\nStation added Successfully!!!";
		        if(front==-1)
		        {
		            front = 0;
		        }
		    }
		}
		

		void cqueue::Delete()
		{
		    if(front == -1 && rear == -1)
		    {
		        cout<<"\nRoute Empty. No Stations found!!!";
		    }
		    else{
		        cout<<"\nStation "<<cq[front++]<<" deleted Successfully!!!";
		        if(front == size)
		            front = 0;
		        if(front-1==rear)
		            front = rear = -1;
		    }
		}
		

		void cqueue::Rename()
		{
		    if(front == -1)
		    {
		        cout<<"\nRoute Empty. No Stations found!!!";
		    }
		    else{
		        cout<<"\nEnter the Station to be renamed : ";
		        cin>>search;
		        int i = front;
		        if(front<=rear)
		        {
		            while(i<=rear)
		            {
		                if(search==cq[i])
		                {
		                    cout<<"\nEnter the new name for the Station : ";
		                    cin>>name;
		                    cq[i] = name;
		                    return;
		                }
		                i++;
		            }
		            cout<<"\nStation not found!!!";
		        }
		        else{
		            while(i<=size-1)
		            {
		                if(search==cq[i])
		                {
		                    cout<<"\nEnter the new name for the Station : ";
		                    cin>>name;
		                    cq[i] = name;
		                    return;
		                }
		                i++;
		            }
		            i = 0;
		            while(i<=rear)
		            {
		                if(search==cq[i])
		                {
		                    cout<<"\nEnter the new name for the Station : ";
		                    cin>>name;
		                    cq[i] = name;
		                    return;
		                }
		                i++;
		            }
		            cout<<"\nStation not found!!!";
		        }
		    }  
		}
		

		void cqueue::display_std()
		{
		    if(front == -1)
		    {
		        cout<<"\nRoute Empty. No Stations found!!!";
		    }
		    else{
		        int i = front;
		        cout<<"\nRoute Stations front source to destination are : ";
		        if(front<=rear)
		        {
		            while(i<=rear)
		            {
		                cout<<"-->"<<cq[i++];
		            }
		        }
		        else{
		            while(i<=size-1)
		            {
		                cout<<"-->"<<cq[i++];
		            }
		            i = 0;
		            while(i<=rear)
		            {
		                cout<<"-->"<<cq[i++];
		            }
		        }
		    }
		}
		

		void cqueue::display_dts()
		{
		    if(front == -1)
		    {
		        cout<<"\nRoute Empty. No Stations found!!!";
		    }
		    else{
		        int i = rear;
		        cout<<"\nRoute Stations from destination to source are : ";
		        if(rear>=front)
		        {
		            while(i>=front)
		            {
		                cout<<"-->"<<cq[i--];
		            }
		        }
		        else{
		            i = rear;
		            while(i>=0)
		            {
		                cout<<"-->"<<cq[i--];
		            }
		            i = size-1;
		            while(i>=front)
		            {
		                cout<<"-->"<<cq[i--];
		            }
		        }
		    }
		}
		

		int main()
		{
		    cqueue q;
		    int ch;
		    cout<<"\nEnter 5 Stations for the Metro Route!!! "<<endl;
		    q.stations();
		    while(1)
		    {
		        cout<<"\n\n1. Add a Station\n2. Delete Station\n3. Rename Station\n4. Display from start to end\n5. Display from end to start\n6. Exit";
		        cout<<"\nEnter your choice : ";
		        cin>>ch;
		        switch(ch)
		        {
		            case 1:q.insert();
		            break;
		            case 2:q.Delete();
		            break;
		            case 3:q.Rename();
		            break;
		            case 4:q.display_std();
		            break;
		            case 5:q.display_dts();
		            break;
		            case 6:exit(0);
		            default:cout<<"\nInvalid Input!!!";
		        }
		    }
		    return 0;
		} 
 238  8_poly_all_CLL.cc 
		@@ -0,0 +1,238 @@
		/*Exp8. Implement polynomial using CLL and perform
		Addition of Polynomials
		Multiplication of polynomials
		Evaluation of polynomial*/
		#include<stdio.h> 
		#include<bits/stdc++.h> 
		using namespace std;
		

		/*-----<< Global Declaration of Structure and Functions  >>-------*/
		

		typedef struct node
		 {
		  int expo,coef;
		  struct node *next;
		 }node;
		

		node * insert(node *,int,int);
		node * create();
		node * add(node *p1,node *p2);
		node * multi(node *p1,node *p2);
		int eval(node *p1);
		void display(node *head);
		

		/*--------------<< function defination for insert >>---------------*/
		

		node *insert(node*head,int expo1,int coef1)
		  {
		   node *p,*q;
		   p=(node *)malloc(sizeof(node));
		   p->expo=expo1;
		   p->coef=coef1;
		   p->next=NULL;
		   if(head==NULL)
		    {
		      head=p;
		      head->next=head;
		      return(head);
		    }
		   if(expo1>head->expo)
		    {
		      p->next=head->next;
		      head->next=p;
		      head=p;
		      return(head);
		    }
		   if(expo1==head->expo)
		    {
		      head->coef=head->coef+coef1;
		      return(head);
		    }
		    q=head;
		    while(q->next!=head&&expo1>=q->next->expo)
		      q=q->next;
		      if(p->expo==q->expo)
		               q->coef=q->coef+coef1;
		      else
		       {
		                p->next=q->next;
		                q->next=p;
		       }
		      return(head);
		  }
		

		/*---------<< function defination for create poly >>-------------*/
		

		node *create()
		 {
		  int n,i,expo1,coef1;
		  node *head=NULL;
		  cout<<"\n\nEnter no of terms of polynomial==>";
		  cin>>n;
		  for(i=0;i<n;i++)
		   {
		     cout<<"\n\nEnter coef & expo==>";
		     cin>>coef1>>expo1;
		     head=insert(head,expo1,coef1);
		   }
		  return(head);
		 }
		

		/*------------<< function defination for add poly >>-------------*/
		

		node *add(node *p1,node *p2)
		 {
		  node *p;
		  node *head=NULL;
		  cout<<"\n\n\nAddition of polynomial==>";
		  p=p1->next;
		  do
		   {
		     head=insert(head,p->expo,p->coef);
		     p=p->next;
		   }while(p!=p1->next);
		    p=p2->next;
		  do
		   {
		     head=insert(head,p->expo,p->coef);
		     p=p->next;
		   }while(p!=p2->next);
		    return(head);
		  }
		

		/*---------<< function defination for multiply poly >>------------*/
		

		node *multi(node *p1,node *p2)
		 {
		  node *head1,*head2;
		  node *head=NULL;
		  cout<<"\n\n\nMultiplication of polynomial==>";
		  head2=p2->next;
		  do
		   {
		    head1=p1->next;
		    do
		     {
		       head=insert(head,head1->expo+head2->expo,head1->coef*head2->coef);
		       head1=head1->next;
		     }while(head1!=p1->next);
		       head2=head2->next;
		   }while(head2!=p2->next);
		    return(head);
		 }
		

		/*--------<< function defination for evaluate poly >>--------------*/
		

		int eval(node *head)
		 {
		  node *p;
		  int x,ans=0;
		  cout<<"\n\nEnter the value of x=";
		  cin>>x;
		  p=head->next;
		  do
		   {
		     ans=ans+p->coef*pow(x,p->expo);
		     p=p->next;
		   }while(p!=head->next);
		    return(ans);
		 }
		

		/*----------<< function defination for display poly >>------------*/
		

		void display(node *head)
		 {
		  node *p,*q;
		  int n=0;
		  q=head->next;
		  p=head->next;
		  do
		  {
		   n++;
		   q=q->next;
		  }while(q!=head->next);
		   cout<<"\n\n\tThe polynomial is==>";
		  do
		   {
		    if(n-1)
		     {
		      cout<<p->coef;
		      cout<<"X^";
		      cout<<p->expo;
		      cout<<"+";
		//      printf("%dx^(%d) + ",p->coef,p->expo);
		      p=p->next;
		     }
		    else
		    {
		     cout<<p->coef;
		      cout<<"X^";
		      cout<<p->expo;
		

		//     printf(" %dx^(%d)",p->coef,p->expo);
		     p=p->next;
		    }
		    n--;
		   } while(p!=head->next);
		 }
		

		/*------------<<  Main Function Start  >>---------------*/
		

		int main()
		 {
		  char ans;
		  int a,x,ch;
		  node *p1,*p2,*p3;
		  p1=p2=p3=NULL;
		  do
		  {
		  cout<<"\n\t----------------<<  MENU  >>---------------";
		  cout<<"\n\tPolynomial Operations :";
		   cout<<" 1.Add";
		   cout<<"\n\t\t\t\t2.Multiply";
		   cout<<"\n\t\t\t\t3.Evaluate";
		   cout<<"\n\t\t\t\t4.Exit";
		   cout<<"\n\t---------------------------------------------------";
		   cout<<"\n\n\n\tEnter your choice==>";
		   cin>>ch;
		   switch(ch)
		    {
		     case 1 :
		                      p1=create();
		                      display(p1);
		                      p2=create();
		                      display(p2);
		                      p3=add(p1,p2);
		                      display(p3);
		                       break;
		     case 2 :
		                     p1=create();
		                     display(p1);
		                     p2=create();
		                     display(p2);
		                     p3=multi(p1,p2);
		        display(p3);
		                     break;
		     case 3 :
		                     p1=create();
		                     display(p1);
		                     a=eval(p1);
		                     cout<<"\n\nValue of polynomial="<<a;
		                     break;
		     case 4 :
		                     exit(0);
		                     break;
		    default :
		                     cout<<"\n\n\tinvalid choice";
		                     break;
		

		   }
		   cout<<"\n\n\nDo you want to continue(Y/N)?==>";
		     cin>>ans;
		  // ans=getch();
		  }while(ans=='Y'||ans=='y');
		//   getch();
		 }
		/*------------<< End of Main Function >>---------------*/
		

		

 91  9_Binary_Search.cpp 
		@@ -0,0 +1,91 @@
		#include<iostream>
		using namespace std;
		

		class bin_search
		{
		    public:
		    int arr[20],i,n,search,first,last;
		    void get_data();
		    //void display();
		    void without_recur();
		    void recur(int arr[],int n,int f,int l);
		};
		

		void bin_search::get_data()
		{
		    cout<<"\nEnter Number of elements in the array : ";
		    cin>>n;
		    cout<<"\nEnter the elements in Sorted Order : "<<endl;
		    for(i=0;i<n;i++)
		    {
		        cin>>arr[i];
		    }
		    cout<<"\nEnter a Number to Search : ";
		    cin>>search;
		    first = 0;
		    last = n-1;
		}
		

		void bin_search::without_recur()
		{
		    int f,l,mid;
		    f = first;
		    l = last;
		    mid = (f+l)/2;
		    while(f<=l)
		    {
		        if(arr[mid]==search)
		        {
		            cout<<"\nNumber Found at "<<mid+1<<" position!";
		            break;
		        }
		        else if(search<arr[mid])
		        {
		            l = mid - 1;
		        }
		        else{
		            f = mid + 1;
		        }
		        mid = (f+l)/2;
		    }
		    if(l<f)
		    {
		        cout<<"\nNumber not found!!!";
		    }
		

		}
		

		void bin_search::recur(int a[],int n,int f,int l)
		{
		    int mid;
		    if(f<=l)
		    {
		        mid = (f+l)/2;
		        if(a[mid]==search)
		        {
		            cout<<"\nNumber Found at "<<mid+1<<" position!";
		        }
		        else if(search<a[mid])
		        {
		            recur(arr,n,f,mid-1);
		        }
		        else{
		            recur(arr,n,mid+1,l);
		        }
		    }
		    else{
		        cout<<"\nNumber not found!!!";
		    }
		}
		

		

		int main()
		{
		    bin_search obj;
		    obj.get_data();
		    cout<<"\nBinary Search Result without Recursion : "<<endl;
		    obj.without_recur();
		    cout<<"\n\nBinary Search Result with Recursion : "<<endl;
		    obj.recur(obj.arr,obj.n,obj.first,obj.last);
		    return 0;
		} 
 361  Trees/1_binary_tree.cpp 
		@@ -0,0 +1,361 @@
		#include<iostream>
		using namespace std;
		

		struct btree
		{
		    int data;
		    btree *left;
		    btree *right;
		};
		

		class stack
		{
		    public:
		        btree *st[20];
		        int data,top;
		    public:
		        stack()
		        {
		            top = -1;
		        }
		        int isEmpty()
		        {
		            if(top==-1)
		                return 1;
		            else
		                return 0;
		        }
		        void push(btree *nwnode)
		        {
		            top++;
		            st[top] = nwnode;
		        }
		        btree *pop()
		        {
		            btree *nwnode;
		            nwnode = st[top];
		            top--;
		            return(nwnode);
		        }
		};
		

		class queue
		{
		    btree *que[20];
		    int data,rear,front;
		    public:
		        queue()
		        {
		            rear = front = -1;
		        }
		        int isEmpty()
		        {
		            if(rear==front)
		                return 1;
		            else
		                return 0;
		        }
		        int isFull()
		        {
		            if(rear==20)
		                return 1;
		            else
		                return 0;
		        }
		        void add(btree *nwnode)
		        {
		            if(isFull())
		                cout<<"\nQueue Overflow";
		            else
		            {
		                rear++;
		                que[rear] = nwnode;
		            }
		        }
		        btree *del()
		        {
		            btree *nwnode;
		            if(isEmpty())
		            {
		                cout<<"\nQueue is Empty";
		            }
		            else
		            {
		                front++;
		                nwnode = que[front];
		                return(nwnode);
		            }
		        }
		};
		

		class tree
		{
		    public:
		        int z=1;
		        btree *root = NULL;
		        btree *clone = NULL;
		        btree* create(btree *);
		        void insert();
		        void preorder(btree *);
		        void inorder(btree *);
		        void postorder(btree *);
		        void bfs(btree *);
		        void dfs(btree *);
		        void display_traversals();
		        btree* treecopy(btree *);
		        void leaf_nodes(btree *);        
		};
		

		void tree::insert()
		{
		    int n;
		    cout<<"\nEnter number of nodes : ";
		    cin>>n;
		    for(int i=0;i<n;i++)
		    {
		        root = create(root);
		    }
		}
		

		btree* tree::create(btree *root)
		{
		    int data;
		    char ch;
		    btree *temp = new btree;
		    if(root==NULL)
		    {
		        root = new btree;
		        cout<<"\nYou are at Level 0";
		        cout<<"\nEnter the value of root : ";
		        cin>>data;
		        root->data=data;
		        root->left = root->right = NULL;
		    }
		    else
		    { 
		        temp = root;
		        cout<<"\nYou are at Level "<<z;
		        cout<<"\nWhere do you want to insert (l/r) : ";
		        cin>>ch;
		        if(ch=='l')
		        {
		            if(temp->left!=NULL)
		            {
		                z++;
		                create(temp->left);
		                z--;
		            }
		            else
		            {
		                cout<<"\nEnter the value of node : ";
		                cin>>data;
		                temp->left = new btree;
		                temp = temp->left;
		                temp->data=data;
		                temp->left=temp->right=NULL;
		            }
		        }
		        else if(ch=='r')
		        {
		            if(temp->right!=NULL)
		            {
		                z++;
		                create(temp->right);
		                z--;
		            }
		            else
		            {
		                cout<<"\nEnter the value of node : ";
		                cin>>data;
		                temp->right = new btree;
		                temp = temp->right;
		                temp->data=data;
		                temp->left=temp->right=NULL;   
		            }
		        }
		        return root;
		    }
		}
		

		void tree::preorder(btree *nwnode)
		{
		    if(nwnode!=NULL)
		    {
		        cout<<nwnode->data<<" ";
		        preorder(nwnode->left);
		        preorder(nwnode->right);
		    }
		}
		

		void tree::inorder(btree *nwnode)
		{
		    if(nwnode!=NULL)
		    {
		        inorder(nwnode->left);
		        cout<<nwnode->data<<" ";
		        inorder(nwnode->right);
		    }
		}
		

		void tree::postorder(btree *nwnode)
		{
		    if(nwnode!=NULL)
		    {
		        postorder(nwnode->left);
		        postorder(nwnode->right);
		        cout<<nwnode->data<<" ";
		    }
		}
		

		void tree::bfs(btree *nwnode)
		{
		    queue Q;
		    while(1)
		    {
		        cout<<nwnode->data<<" ";
		        if(nwnode->left!=NULL)
		            Q.add(nwnode->left);
		        if(nwnode->right!=NULL)
		            Q.add(nwnode->right);
		        if(Q.isEmpty())
		            break;
		        nwnode = Q.del();
		    }
		}
		

		void tree::dfs(btree *nwnode)
		{
		    stack S;
		    while(1)
		    {
		        cout<<nwnode->data<<" ";
		        if(nwnode->right!=NULL)
		            S.push(nwnode->right);
		        if(nwnode->left!=NULL)
		            S.push(nwnode->left);
		        if(S.isEmpty())
		            break;
		        nwnode = S.pop();
		    }
		}
		

		void tree::display_traversals()
		{
		    cout<<"\n--------------------------------------------------------------------";
		    cout<<"\nPreorder Traversal : ";
		    preorder(root);
		    cout<<"\n";
		    cout<<"\nInorder Traversal : ";
		    inorder(root);
		    cout<<"\n";
		    cout<<"\nPostorder Traversal : ";
		    postorder(root);
		    cout<<"\n";
		    cout<<"\nBreadth-First Traversal : ";
		    bfs(root);
		    cout<<"\n";
		    cout<<"\nDepth-First Traversal : ";
		    dfs(root);
		    cout<<"\n";
		}
		

		btree* tree::treecopy(btree *nwnode)
		{
		    stack S,S1;
		    btree *temp;
		    btree *temp1;
		    temp = root;
		    clone = new btree;
		    temp1  = clone;
		    temp1->left = temp1->right = NULL;
		    while(1)
		    {
		        temp1->data = temp->data;
		        if(temp->right!=NULL)
		        {
		            S.push(temp->right);
		            temp1->right = new btree;
		            temp1->right->left = temp1->right->right = NULL;
		            S1.push(temp1->right);
		        }
		        if(temp->left!=NULL)
		        {
		            S.push(temp->left);
		            temp1->left = new btree;
		            temp1->left->left = temp1->left->right = NULL;
		            S1.push(temp1->left);
		        }
		        if(S.isEmpty())
		            break;
		        temp = S.pop();
		        temp1 = S1.pop();
		    }
		    cout<<"\nCopied Successfully";
		    return clone;
		}
		

		void tree::leaf_nodes(btree *nwnode)
		{
		    stack S;
		    cout<<"\nLeaf nodes : ";
		    while(1)
		    {
		        if(nwnode->left==NULL && nwnode->right==NULL)
		            cout<<nwnode->data<<" ";
		        if(nwnode->right!=NULL)
		            S.push(nwnode->right);
		        if(nwnode->left!=NULL)
		            S.push(nwnode->left);
		        if(S.isEmpty())
		            break;
		        nwnode = S.pop();
		    }
		}
		

		int main()
		{
		    tree obj;
		    btree *root1;
		    int choice,ch;
		    cout<<"\n1. Create a Binary Tree \n2. Exit"<<endl;
		    cout<<"\nEnter your choice : ";
		    cin>>choice;
		    cout<<"\n--------------------------------------------------------------------";
		    if(choice==1)
		    {
		        obj.insert();
		        cout<<"\nTree Created Successfully"<<endl;
		        while(1)
		        {
		            cout<<"\n--------------------------------------------------------------------";
		            cout<<"\n1. Insert node \n2. Display Traversals \n3. Copy of a Tree \n4. Display Leaf nodes \n5. Exit";
		            cout<<"\nEnter your choice : ";
		            cin>>ch;
		            cout<<"\n--------------------------------------------------------------------";
		            if(ch==1)
		            {
		                obj.insert();
		                cout<<"\nNode Inserted Successfully";
		            }
		            else if(ch==2)
		                obj.display_traversals();
		            else if(ch==3)
		            {
		                root1 = obj.treecopy(obj.root);
		                cout<<"\nCopy of the tree is : ";
		                obj.preorder(root1);
		            }
		            else if(ch==4)
		                obj.leaf_nodes(obj.root);
		            else
		            {
		                cout<<"\nProgram Exited";
		                break;
		            }
		        }
		    }
		    else
		    {
		        cout<<"\nProgram exited";
		    }
		} 
 299  Trees/2_expression_tree.cpp 
		@@ -0,0 +1,299 @@
		#include<iostream>
		using namespace std;
		

		struct node{
		    char data;
		    node *left, *right;
		};
		

		class stack
		{
		    public:
		        node *st[20];
		        char st1[20];
		        char data;
		        int top,top1;
		    public:
		        stack()
		        {
		            top = -1;
		            top1 = -1;
		        }
		        int isEmpty()
		        {
		            if(top==-1)
		                return 1;
		            else
		                return 0;
		        }
		        int isEmpty1()
		        {
		            if(top1==-1)
		                return 1;
		            else 
		                return 0;
		        }
		        void push(node *nwnode)
		        {
		            top++;
		            st[top] = nwnode;
		        }
		        node *pop()
		        {
		            if(isEmpty())
		                return NULL;
		            node *nwnode;
		            nwnode = st[top];
		            top--;
		            return(nwnode);
		        }
		        void push1(char c)
		        {
		            top1++;
		            st1[top1] = c;
		        }
		        char pop1()
		        {
		            if(!isEmpty1())
		            {
		                char c = st1[top1];
		                top1--;
		                return c;
		            }
		        }
		};
		

		class exptree
		{
		    private:
		        char post[20];
		    public:
		    stack S;
		    node *root;
		    exptree()
		    {
		        root = NULL;
		    }
		    node* newnode(char);
		    bool isOperator(char);
		    void convert();
		    void inorder(node *);
		    void preorder(node *);
		    void postorder(node *);
		    void nr_inorder();
		    void nr_preorder();
		    void nr_postorder();
		    void recursive_traversals();
		    void non_recursive_traversals();
		};
		

		node* exptree::newnode(char c)
		{
		    node *tmp = new node;
		    tmp->data = c;
		    tmp->left = tmp->right = NULL;
		    return tmp;
		}
		

		bool exptree::isOperator(char c)
		{
		    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^')
		        return true;
		    return false;
		}
		

		void exptree::convert()
		{
		

		    node *t, *t1, *t2;
		    cout<<"\nEnter Postfix expression : ";
		    cin>>post;
		    for(int i=0;post[i]!='\0';i++)
		    {
		        if(isalpha(post[i]) || isdigit(post[i]))
		        {
		            t = newnode(post[i]);
		            S.push(t);
		        }
		        else if(isOperator(post[i]))
		        {
		            t = newnode(post[i]);
		            t2 = S.pop();
		            t1 = S.pop();
		            t->left = t1;
		            t->right = t2;
		            S.push(t);
		        }
		    }
		    t = S.pop();
		    root = t;
		}
		

		void exptree::inorder(node* temp)
		{
		    if(temp!=NULL)
		    {
		        inorder(temp->left);
		        cout<<temp->data<<" ";
		        inorder(temp->right);
		    }
		}
		

		void exptree::preorder(node* temp)
		{
		    if(temp!=NULL)
		    {
		        cout<<temp->data<<" ";
		        preorder(temp->left);
		        preorder(temp->right);
		    }
		}
		

		void exptree::postorder(node *temp)
		{
		    if(temp!=NULL)
		    {
		        postorder(temp->left);
		        postorder(temp->right);
		        cout<<temp->data<<" ";
		    }
		}
		

		void exptree::nr_inorder()
		{
		    stack S;
		    node *temp = root;
		    while(1)
		    {
		        while(temp!=NULL)
		        {
		            S.push(temp);
		            temp = temp->left;
		        }
		        if(S.isEmpty())
		            return;
		        temp = S.pop();
		        cout<<temp->data<<" ";
		        temp = temp->right;
		    }
		}
		

		void exptree::nr_preorder()
		{
		    stack S;
		    node *temp = root;
		    while(1)
		    {
		        while(temp!=NULL)
		        {
		            S.push(temp);
		            cout<<temp->data<<" ";
		            temp = temp->left;
		        }
		        if(S.isEmpty())
		            return;
		        temp = S.pop();
		        temp = temp->right;
		    }
		}
		

		void exptree::nr_postorder()
		{
		    stack S;
		    char flag;
		    node *temp = root;
		    while(1)
		    {
		        while(temp!=NULL)
		        {
		            S.push(temp);
		            S.push1('L');
		            temp = temp->left;
		        }
		        if(S.isEmpty())
		            return;
		        else{
		            temp = S.pop();
		            flag = S.pop1();
		            if(flag=='R')
		            {
		                cout<<temp->data<<" ";
		                temp = NULL;
		            }
		            else{
		                S.push(temp);
		                S.push1('R');
		                temp = temp->right;
		            }
		        }
		    }
		}
		

		void exptree::recursive_traversals()
		{
		    cout<<"\n--------------------------------------------------------------------";
		    cout<<"\nRecursive Traversals!";
		    cout<<"\nInorder Traversal : ";
		    inorder(root);
		    cout<<"\nPreorder Traversal : ";
		    preorder(root);
		    cout<<"\nPostorder Traversal : ";
		    postorder(root);
		}
		

		void exptree::non_recursive_traversals()
		{
		    cout<<"\n--------------------------------------------------------------------";
		    cout<<"\nNon Recursive Traversals!";
		    cout<<"\nInorder Traversal : ";
		    nr_inorder();
		    cout<<"\nPreorder Traversal : ";
		    nr_preorder();
		    cout<<"\nPostorder Traversal : ";
		    nr_postorder();
		}
		

		int main()
		{
		    exptree obj;
		    int choice,ch;
		    cout<<"\n1. Create an Expression Tree \n2. Exit"<<endl;
		    cout<<"\nEnter your choice : ";
		    cin>>choice;
		    cout<<"\n--------------------------------------------------------------------";
		    if(choice==1)
		    {
		        obj.convert();
		        cout<<"\nExpression tree created Successfully!";
		        while(1)
		        {
		            cout<<"\n--------------------------------------------------------------------";
		            cout<<"\n1. Create new Tree \n2. Display Recursive Traversals \n3. Display Non Recursive Traversals \n4. Exit";
		            cout<<"\nEnter your choice : ";
		            cin>>ch;
		            cout<<"\n--------------------------------------------------------------------";
		            if(ch==1)
		            {
		                obj.convert();
		                cout<<"\nExpression tree created Successfully!";
		            }
		            else if(ch==2)
		            {
		                obj.recursive_traversals();
		            }
		            else if(ch==3)
		            {
		                obj.non_recursive_traversals();
		            }
		            else{
		                cout<<"\nProgram Exited!";
		                exit(0);
		            }
		        }
		    }
		    else
		    {
		        cout<<"\nProgram Exited Successfully!";
		    }
		    return 0;
		} 


