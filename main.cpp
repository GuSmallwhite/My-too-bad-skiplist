#include <iostream>
#include "skipList.h"
#define FILE_PATH "./store/dumpFile"

int main() {

   
    SkipList<int, std::string> skipList(6);
	skipList.insert_element(1, "this"); 
	skipList.insert_element(3, "is"); 
	skipList.insert_element(7, "a"); 
	skipList.insert_element(8, "kv storage"); 
	skipList.insert_element(9, "based on"); 
	skipList.insert_element(19, "skiplist"); 
	skipList.insert_element(19, "written in cpp！"); 

    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.dump_file();


    skipList.search_element(9);
    

    skipList.display_list();

    skipList.delete_element(1);
    skipList.delete_element(3);
    


    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.display_list();
}
