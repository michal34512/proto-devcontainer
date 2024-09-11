#include <iostream>
#include "proto/message.pb.h"

using namespace std;
int main(int argc, char const *argv[])
{
  // Preparing data
  message::Message mes;
  mes.set_mystring("Hello Protobuf");
  mes.set_myint(2137);
  message::Person* person = mes.mutable_myperson();
  person->set_age(84);
  person->set_name("Karol");
  cout << "Message before encryption: " << mes.mystring() << " " << mes.myint() << " " << mes.myperson().name() <<  " " << mes.myperson().age() <<  endl;

  // Encryption
  std::string encrypted;
  mes.SerializeToString(&encrypted);
  cout << "Encrypted message: " << encrypted << endl;
  
  // Decryption
  message::Message decrypted;
  mes.SerializeToString(&encrypted);
  decrypted.ParseFromString(encrypted);
  cout << "Message after decryption: " << mes.mystring() << " " << mes.myint() << " " << mes.myperson().name() <<  " " << mes.myperson().age() <<  endl;
  return 0;
}
