#include "datagenerator"

//Datagenerator::Datagenerator - Constructor
DataGenerator::DataGenerator(string d) {
  //Datagenerator constructor that initializes a Datagenerator
  //object
  _delimiter = d;
  _firstNames = {"Michael","Paul","Amy","Heidi", "Cheryl","Becky","Randy","Vicky","Joe","David","Rich" };
  _lastNames = {"Anderson","Bayes","Carson","Dawes","Egon","Ford","Gellar",
    "Hayes","Ingerson","Jackson","Kaplan","Lundeen","Mabin","Nyquist",
    "Oliver","Peterson","Queen","Rhodes","Stark","Taylor","Underwood",
    "Vasquez","Williams","Xavier","Yarl","Zane"};
  _cities = {"Metropolis","Gotham City","Star City","Champion City","New Haven",
    "Hell's Kitchen","Kankakee","Washington","Grand Rapids","Detroit","Lansing",
    "Minneapolis","Arden Hills","Shoreview","Edina","Eden"};
  _states = {"AL","AK","AS","CA","CO","CN","DE","FL","GA","HA","ID","IL","IN",
             "IA","KS","KY","LA","ME","MD","MA","MI","MN","MS","MO","MT","NE",
             "NV","NH","NJ","NM","NY","NC","ND","OH","OK","OR","PA","RI","SC",
             "SD","TN","TX","UT","VT","VA","WA","WV","WI","WY"};
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
 return randomElement(_cities);
}

string DataGenerator::state() {
 return randomElement(_states);
}

vector<string> DataGenerator::firstNames() {
  return _firstNames;
}

vector<string> DataGenerator::lastNames() {
  return _lastNames;
}

vector<string> DataGenerator::cities() {
  return _cities;
}

vector<string> DataGenerator::states() {
  return _states;
}

void DataGenerator::delimiter(string d) {

}


string DataGenerator::delimiter() {

}

string DataGenerator::alpha(unsigned len) {
  uniform_int_distribution<int> distribution('a', 'z');
  ostringstream outstring;
  char c;
  for (int i=0; i < len; i++) {
     c = distribution(_generator);
     outstring << c;
  }
  return outstring.str(); 
}


string DataGenerator::numeric(unsigned len) {
  uniform_int_distribution<int> distribution(0,9);
  ostringstream outstring;
  int d;
  for(int i=0; i < len; i++) {
    d = distribution(_generator);
    outstring << d;;
  }
  return outstring.str();
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
