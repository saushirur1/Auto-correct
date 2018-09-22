#include <iostream>
#include <map>
class autocorrect
{
private:
struct trie
{
std::map<char,trie*> hashmap;
bool end;
};
public:
void add_totrie(std::string& to_add);
bool search(std::string& to_search);
};
