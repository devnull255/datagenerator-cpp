#include "datagenerator"

//Datagenerator::Datagenerator - Constructor
DataGenerator::DataGenerator(string d="|") {
  //Datagenerator constructor that initializes a Datagenerator
  //object
  _delimiter = d;
  _firstNames = {"Michael","Paul","Amy","Heidi", "Cheryl","Becky","Randy","Vicky","Joe","David","Rich" };
  _lastNames = {"Anderson","Bayes","Carson","Dawes","Egon","Ford","Gellar",
    "Hayes","Ingerson","Jackson","Kaplan","Lundeen","Mabin","Nyquist",
    "Oliver","Peterson","Queen","Rhodes","Stark","Taylor","Underwood",
    "Vasquez","Williams","Xavier","Yarl","Zane"};
  initGenerator();
}

string DataGenerator::firstName() {
  //returns a random firstname
  return randomElement(_firstNames);
}

string DataGenerator::lastName(){
 return randomElement(_lastNames);
}

string DataGenerator::city() {
}

string DataGenerator::state() {

}

vector<string> DataGenerator::firstNames() {
  return _firstNames;
}

vector<string> DataGenerator::lastNames() {
  return _lastNames;
}

void DataGenerator::delimiter(string d) {

}


string DataGenerator::delimiter() {

}

string DataGenerator::alpha(unsigned len) {

}


string DataGenerator::numeric(unsigned len) {

}

string DataGenerator::alphanum(unsigned len) {

}

void DataGenerator::initGenerator() {
//initializes generator used for randomness
  _clock::time_point beginning = _clock::now();
  unsigned seed_val = beginning.time_since_epoch().count();
  _generator.seed(seed_val);
}

string DataGenerator::randomElement(vector<string> &items) {
  uniform_int_distribution<int> distribution(0,items.size()-1);
  int elem = distribution(_generator);
  elem = distribution(_generator);
  /* debug */
  //cout << "distribution: " << distribution << "\n";
  //cout << "_firstNames.size() :" << _firstNames.size() << "\n";
  //cout << "elem is: " << elem << "\n";
  return items[elem];

}
