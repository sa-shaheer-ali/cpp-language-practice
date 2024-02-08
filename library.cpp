#include <iostream>
#include <string>
#include <vector>
class book{
    private:
    std::string author;
    std::string genre;
    std::string title;
    int id;
    bool available;


    public:

    book(std::string auth,std::string gen,std::string tit,int number)
    :author(auth),genre(gen),title(tit),id(number),available(true)
    {

    }
    std::string getauthor()const{
        return author;

    }
    std::string getgenre()const{
        return genre;

    }
    std::string gettitle()const{
        return title;

    }
    int getid()const{
        return id;

    }
     bool isAvailable()const { return available; }
    void isavailable(){
         available=true;
    }
    void notavailable(){
        available=false;

    }




};
class borrower{
    std::string name;
    int idnumber;
    int contactnumber;
    public:

    borrower(std::string nam,int num,int cnum)
    :name(nam),idnumber(num),contactnumber(cnum)
    {

    }
    std::string getname()const{
        return name;

    }
    int getid()const{
        return idnumber;

    }
    int getContact()const{
        return contactnumber;
    }


};
class library{
    private:
    std::vector<book>books;
    std::vector<borrower>borrowers;
    public:
    void addBook(const book& newbook){
    books.push_back(newbook);

    }
    void addborrower(const borrower& newborrower){
        borrowers.push_back(newborrower);
    }
     void displayBooks() const {
      std::  cout << "Books in the library:" <<std:: endl;
        for (const auto& book : books) {
        std::    cout << "ID: " << book.getid() << ", Title: " << book.gettitle() << ", Author: " << book.getauthor() << ", Genre: " << book.getgenre();
          if (book.isAvailable()) {
        std::cout<< " (Available)" << std::endl;
          } else {
     std::    cout  << " (Not Available)" << std::endl;
            }
        }
    }

    // Method to display all borrowers in the library
    void displayBorrowers() const {
     std::    cout  << "Borrowers in the library:" << std::endl;
     for (const auto& borrower : borrowers) {
    std::    cout  << "ID: " << borrower.getid() << ", Name: " << borrower.getname() << ", Contact: " << borrower.getContact() << std::endl;
        }
    }



};
int main (){
    library lib;
    lib.addBook(book("F. Scott Fitzgerald", "Fiction", "The Great Gatsby", 1));
    lib.addBook(book("Harper Lee", "Fiction", "To Kill a Mockingbird", 2));
    lib.addborrower(borrower("John Doe", 101, 1234567890)); 
    lib.addborrower(borrower("Jane Smith", 102, 98765410));
    lib.displayBooks();
    lib.displayBorrowers();
    return 0;

}