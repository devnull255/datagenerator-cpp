#include "datagenerator"
#include <map>
map<string,string> parse_args(int argc,char **argv) {
 map<string,string> arguments;
 arguments["--specstr"] = "";
 arguments["--rec-count"] = "10";
 arguments["--help"] = "Usage: dg [options";
 
 for (int i=1; i < argc; i++) {
   cout << argv[i] << endl;
 }
 cout << "this is parse_args." << endl;
 return arguments;
}

int main(int argc, char **argv) {
  cout << "Hello, World\n";
  map<string,string> args = parse_args(argc,argv);
}

