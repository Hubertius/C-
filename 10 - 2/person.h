#ifndef PERSON_H_
#define PERSON_H_

class Person
{
  private:
    static const int LIMIT = 256;
    std::string lname; // nazwisko
    char fname[LIMIT]; // imię
  public:
    Person() { lname = ""; fname[0] = '\0'; }
    Person(const std::string &ln, const char * fn = "HejTy");
    void Show() const;
    void FormalShow() const;
};
#endif
