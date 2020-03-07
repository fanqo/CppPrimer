#ifndef PERSON_H
#define PERSON_H
class Person {
friend istream &read(istream &, Person &);
friend ostream &print(ostream &, const Person &);
public:
    Person() = default;
    Person(const std::string name) : pName(name) {}
    Person(const std::string name, const std::string address) :
        pName(name), pAddress(address) {}
    Person(std::istream &);
    std::string name() const { return pName; }
    std::string address() const { return pAddress; }
private:
    std::string pName;
    std::string pAddress;
};

istream &read(istream &, Person &);
ostream &print(ostream &, const Person &);

#endif
