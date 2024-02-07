#include <iostream>
#include <string>
using namespace std;

// class myClassOne
// {
// public:
//     string userName;
//     string userPassword;
// };

// class room{
//     public:
//         double width;
//         double length;
//         double height;
//         double calculateArea(){
//             return length*width;
//         };
//         double calculateVolume(){
//             return length*width*height;
//         };
// };

// class ipad
// {
// public:
//     string ipadModel;
//     int ipadYear;
//     int ipadRam;
//     int ipadMemory;
//     string ipadProcessor;
//     void detailsAdded()
//     {
//         cout << "Your input details addedd successsful in memory" << endl;
//     };
// };

// class privateClass
// {
// private:
//     string userName;
//     string userPasword;

// public:
//     void logIn(string userID, string password)
//     {
//         userID = userName;
//         password = userPasword;
//         if (userName == "kailash1198")
//         {
//             if (password == "kailashK8@")
//             {
//                 cout << "Log in Sucess" << endl;
//             }
//             else
//             {
//                 cout << "Please enter correct password" << endl;
//             }
//         }
//         else
//         {
//             cout << "Please enter correct user id" << endl;
//         }
//     };
// };

// class parentClass
// {
// protected:
//     int idProtected;
// };

// class child : public parentClass
// {
// public:
//     void setID(int id)
//     {
//         idProtected = id;
//     };
//     void displayID()
//     {
//         cout << "The id is = " << idProtected << endl;
//     }
// };

// ====== frinds function and classess =============
// Why Friend function = Friend function access private and protected data from class
// syntax =
// class myClass{

// friend void friendFunc(){}; //with friend keywords

// };
// class distance
// {
// private:
//     int meter;
//     friend int addFive(distance obj)
//     {
//         obj.meter += 5;
//         return obj.meter;
//     };

// public:
//     distance() : meter(0) {}
// };

// class myClass
// {
// private:
//     int numOne;
//     int numTwo;
//     friend int sumNum(myClass obj)
//     {
//         return obj.numOne + obj.numTwo;
//     };

// public:
//     myClass() : numOne(0){}; //constructor
// };

// === friend function💕 ====
// class myClass
// {
// private:
//     int privateData;

// public:
//     friend void friendFunction(myClass &obj);
// };

// void friendFunction(myClass &obj)
// {
//     obj.privateData  =100;
// }

// === friend class 💕 (Same concept as friend function)=====
// class classOne
// {
// private:
//     int numOne;

// public:
//     friend class friendClass; // declare friend class
// };

// // definition of friend class
// class friendClass
// {
// public:

//     void accessPrivateData(classOne& obj){
//         obj.numOne = 10;
//     }
// };


main(void)
{

    // ====== frinds function and classess =============
    // classOne classOneObj;
    // friendClass friendObj;
    // friendObj.accessPrivateData(classOneObj);
    // cout<<friendObj.accessPrivateData(classOneObj);

    // child obj1;
    // obj1.setID(90);
    // obj1.displayID();
    // privateClass user1;
    // string userDetails;
    // string userPass;

    // cout << "Please enter userID: ";
    // getline(cin, userDetails);
    // cout << "Password: ";
    // getline(cin, userPass);
    // user1.logIn(userDetails, userPass);

    // ipad userIpad1;
    // cout << "Please enter ipad user-1 details: " << endl
    //      << endl;
    // cout << "Ipad Model: ";
    // // cin>>userIpad1.ipadModel;
    // getline(cin, userIpad1.ipadModel);
    // cout << "Ipad year: ";
    // cin >> userIpad1.ipadYear;
    // cout << "Ipad RAM: ";
    // cin >> userIpad1.ipadRam;
    // cout << "Ipad memory: ";
    // cin >> userIpad1.ipadMemory;
    // cout << "Ipad processor: ";
    // // cin>>userIpad1.ipadProcessor;
    // getline(cin, userIpad1.ipadProcessor);
    // userIpad1.detailsAdded();

    // room room1, room2;
    // room1.length = 20;
    // room1.width = 15;
    // room1.height = 10;
    // cout<<"The area of room1 is="<<room1.calculateArea()<<endl;
    // cout<<"The volume of room1 is="<<room1.calculateVolume()<<endl;

    // room2.length = 30;
    // room2.width = 20;
    // room2.height = 15;
    // cout<<"The area of room2 is = "<<room2.calculateArea()<<endl;
    // cout<<"The volume of room2 is = "<<room2.calculateVolume()<<endl;
}