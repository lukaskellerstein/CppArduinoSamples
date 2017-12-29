#ifndef PAGES_H
#define PAGES_H

#include <string>


class HomePage
{
public:
  std::string getHTML();

private:
  std::string setHeader();
  std::string setBody();
};

class AboutPage
{
public:
  std::string getHTML();

private:
  std::string setHeader();
  std::string setBody();
};

class ContactPage
{
public:
  std::string getHTML();

private:
  std::string setHeader();
  std::string setBody();
};

#endif