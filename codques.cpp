/**#include <iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size;j++)
        {
            if (array[i]==array[j])
            {
                for (int k=j; i<size-1 ; k++)
                {
                    array[k]=array[k+1];
                }
                size--;
                j--;
            }
        }
    }
    cout<<"Updated array: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
}


#include <iostream>
#include <string>
using namespace std;

class StringManipulator
{
    public:
    string str;
    
    void setString(const string& s);
    int countCharacters();
    int findLength();
    void convertToUppercase();
    void convertToLowercase();
};
    void StringManipulator::setString(const string& s)
    {
        str=s;
    }
    int StringManipulator::countCharacters()
    {
        int i=0,ctr=0;
        while(str[i]!='\0')
        {
            ctr++;
            i++;
        }
        return ctr;
    }
    int StringManipulator::findLength()
    {
        int i=0, ctr=0;
        while(str[i]!='\0')
        {
            ctr++;
            i++;
        }
        return ctr;
    }
    void StringManipulator::convertToUppercase()
    {
        cout<<"ok";
        int i=0;
        string a;
        while(str[i]!='\0')
        {
            a[i]=toupper(str[i]);
        }
        cout<<"Uppercase string: "<<a<<endl;
    }
    void StringManipulator::convertToLowercase()
    {
        int i=0;
        string a;
        while(str[i]!='\0')
        {
            str[i]=tolower(str[i]);
        }
        cout<<"Lowercase string: "<<str<<endl;
    }

int main()
{
    string a;
    getline(cin,a);
    StringManipulator s1;
    s1.setString(a);
    cout<<"Number of characters: "<<s1.countCharacters()<<endl;
    cout<<"Length of string: "<<s1.findLength()<<endl;
    //s1.convertToUppercase();
    //s1.convertToLowercase();
}

#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[],int n1,int n2)
{
    int resultarr[n1];
    int big= (n1>n2)? n1:n2;
        
    for(int i=0; i<big; i++)
    {
        int value1=(i<n1)? arr1[i]:0;
        int value2=(i<n2)? arr2[i]:0;
        resultarr[i]=value1+value2;
    }
    for(int i=0; i<big; i++)
    {
        cout<<resultarr[i]<<" ";
    }
}
int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0; i<n1;i++)
    {
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for (int i=0; i<n2; i++)
    {
        cin>>arr2[i];
    }
    merge(arr1,arr2,n1,n2);
}

// new ques
#include <iostream>
#include <vector>
#include <algorithm> // Include this for the swap function
using namespace std;

void bubblesort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int k;
    cin >> k;
    int fins = 0;
    vector<int> arr;

    for (int i = 0; i < k; i++) {
        int m;
        cin >> m;
        fins += m;

        for (int j = 0; j < m; j++) {
            int element;
            cin >> element;
            arr.push_back(element);
        }
    }

    bubblesort(&arr[0], fins);

    for (int i = fins - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int binarySearchClosest(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (right < 0) {
        return left; // If target is smaller than the smallest element
    } else if (left >= n) {
        return right; // If target is larger than the largest element
    }

    // Determine the closest element between arr[right] and arr[left]
    if (abs(arr[right] - x) <= abs(arr[left] - x)) {
        return right;
    } else {
        return left;
    }
}

vector<int> findClosestElements(int arr[], int n, int x, int k) {
    int closestIndex = binarySearchClosest(arr, n, x);

    int left = closestIndex - 1;
    int right = closestIndex;
    int count = 0;

    vector<int> closestElements;

    while (count < k) {
        if (left >= 0 && right < n) {
            if (abs(arr[left] - x) <= abs(arr[right] - x)) {
                closestElements.push_back(arr[left]);
                left--;
            } else {
                closestElements.push_back(arr[right]);
                right++;
            }
        } else if (left >= 0) {
            closestElements.push_back(arr[left]);
            left--;
        } else if (right < n) {
            closestElements.push_back(arr[right]);
            right++;
        }

        count++;
    }

    return closestElements;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int k;
    cin >> k;

    vector<int> closestElements = findClosestElements(arr, n, x, k);

    for (int i : closestElements) {
        cout << i << " ";
    }

    return 0;
}
//////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Ticket
{
    int ticketid;
public:
    Ticket(int id) : ticketid(id) {}
};

class Reservation
{
    int reservedarr[];
public:
    Reservation(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            reservedarr[i] = arr[i];
        }
    }

    friend void cancelReservation(Reservation& res, const Ticket& ticket)
    {
        // Find the index of the ticket in the reservation array
        int index = -1;
        for (int i = 0; i < sizeof(res.reservedarr); i++)
        {
            if (res.reservedarr[i] == ticket.ticketid)
            {
                index = i;
                break;
            }
        }

        // If the ticket is found, remove it from the reservation array
        if (index != -1)
        {
            for (int i = index; i < sizeof(res.reservedarr) - 1; i++)
            {
                res.reservedarr[i] = res.reservedarr[i + 1];
            }
            cout << "Ticket " << ticket.ticketid << " has been canceled." << endl;
        }
        else
        {
            cout << "Ticket " << ticket.ticketid << " is not found in the reservation." << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of tickets: ";
    cin >> n;

    int arr[n];
    cout << "Enter the ticket IDs: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Reservation reservation(arr, n);

    int cancelticket;
    cout << "Enter the ticket ID to cancel: ";
    cin >> cancelticket;

    Ticket ticketToCancel(cancelticket);
    cancelReservation(reservation, ticketToCancel);

    return 0;
}

///////////////////////


#include <iostream>
using namespace std;

class Ticket
{
    int ticketid;
public:
    Ticket(int id) : ticketid(id) {}
};

class Reservation
{
    int* reservedarr;
    int size;
public:
    Reservation(int arr[], int arrsize)
    {
        size = arrsize;
        reservedarr = new int[size];
        for (int i = 0; i < size; i++)
        {
            reservedarr[i] = arr[i];
        }
    }
    ~Reservation()
    {
        delete[] reservedarr;
    }

    friend void cancelReservation(Reservation& res, const Ticket& ticket);
};

void cancelReservation(Reservation& res, const Ticket& ticket)
{
    // ... (your cancelReservation code here)
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int ticket = 0; ticket < n; ticket++)
    {
        cin >> arr[ticket];
    }
    Reservation reservation(arr, n);
    int cancelticket;
    cin >> cancelticket;

    Ticket ticketToCancel(cancelticket);
    cancelReservation(reservation, ticketToCancel);
}
/////////////////////
#include <iostream>
using namespace std;

class ComplexNumber
{
public:
    double real;
    double imaginary;
    
    ComplexNumber(double r, double i) : real(r), imaginary(i) {}
    friend void multiply(const ComplexNumber &c1, const ComplexNumber &c2);
};

void multiply(const ComplexNumber &c1, const ComplexNumber &c2)
{
    double resultReal = c1.real * c2.real - c1.imaginary * c2.imaginary;
    double resultImaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    
    cout << resultReal << " + " << resultImaginary << "i" << endl;
}

int main()
{
    double real1, imaginary1, real2, imaginary2;
    
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imaginary1;
    ComplexNumber c1(real1, imaginary1);
    
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imaginary2;
    ComplexNumber c2(real2, imaginary2);
    
    multiply(c1, c2);
    
    return 0;
}**/

#include <iostream>
using namespace std;

int countElements(int* ptr){
    int ctr=0;
    while (ptr != nullptr && *ptr!=0 && ptr!='\0lp'){
        ctr++;
        ptr++;
        cout<<ctr<<endl;
    }
    ptr=nullptr;
    // itereate over array if ele==0 then ptr =. nullptr
    return ctr;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    int* ptr=arr;
    int result=countElements(ptr);
    cout<<"Number of elements: "<<result<<endl;
    cout<<"Number of elements: "<<0;
}// 8 yhr verv========omltrhtr



#include <iostream>
using namespace std;

class Product {
public:
    string name;
    double* rating;
    int numRating;

    Product(string productName, int num) : name(productName), numRating(num) {
        rating = new double[numRating];
    }

    double calcAvg() {
        double sum = 0.0;
        for (int i = 0; i < numRating; i++) { // Corrected the loop initialization
            sum += rating[i];
        }
        return (numRating > 0) ? (sum / numRating) : 0.0;
    }

    ~Product() {
        delete[] rating;
    }
};

int main() {
    string product;
    cin >> product;
    int n;
    cin >> n;

    Product p(product, n);

    for (int i = 0; i < n; i++) {
        cin >> p.rating[i];
    }
    double average = p.calcAvg();
    cout << "Product Details: " << endl;
    cout << "Name: " << product << endl;
    cout << "Average Rating: " << average;

    return 0;
}

====================================

// You are using GCC
#include <iostream>
#include <unordered_set>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=nullptr;
    }
};
class LinkedList{
    public:
    node* head;
    LinkedList(){
        head=nullptr;
    }
    void insert(int val){
        node * newnode= new node(val);
        if (head==nullptr){
            head=newnode;
        }else{
            node* current= head;
            while (current->next!=nullptr){
                current=current->next;
            }
            current->next=newnode;
        }
    }
    void display(){
        node* current= head;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<endl;
    }
    
    bool isEqual(LinkedList& list1,LinkedList& list2){
        node* current1=list1.head;
        node* current2=list2.head;
        
        while (current1!= nullptr && current2!=nullptr){
            if (current1->data != current2->data){
                return false;
            }current1=current1->next;
            current2=current2->next;
        }
        return current1==nullptr && current2==nullptr;
    }
    
    void delSameEleFromList1(LinkedList& list1,LinkedList& list2){
        if (head==nullptr){
            return;
        }
        node* current1=list1.head;
        node* prev1= nullptr;
        
        while(current1!=nullptr){
            node* current2= list2.head;
            bool found= false;
            
            while(current2 != nullptr){
                if (current1->data==current2->data){
                    found=true;
                    break;
                }
                current2=current2->next;
            }
            if (found){
                if (prev1==nullptr){
                    head=current1->next;
                    delete current1;
                    current1=head;
                }else{
                    prev1->next=current1->next;
                    delete current1;
                    current1=prev1->next;
                }
            }
            else{
                prev1=current1;
                current1=current1->next;
            }
        }
    }
};
int main()
{
    LinkedList list1,list2;
    int n,m,ele;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ele;
        list1.insert(ele);
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>ele;
        list2.insert(ele);
    }
    cout<<"First Linked List before deletion: ";
    list1.display();
    cout<<"First Linked List after deletion: ";
    if(list1.isEqual(list1,list2))
    {
        // when both lists are same
        cout<<"\nAll elements in the first linked list are the same.";
    }else{
        list1.delSameEleFromList1(list1,list2);
        list1.display();}
}