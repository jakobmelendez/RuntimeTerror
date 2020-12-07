#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <istream>
#include <ostream>
#include <sstream>
#include <map>
#include <vector>
#include <math.h>
#include <msclr\marshal_cppstd.h>  
#include <msclr\marshal.h>
#include <stack>

using namespace std;
using namespace System;

//Melendez: made struct to hold all the values
struct standard {
    string ID, name, category, subcategory, revisionYear, webpage;
    double cost;
};



class AllClass
{
public:
    class Map;
    class Tree;
    class Node;
    class Category;
    map<string, standard> inputData(string h);
    vector<standard> AllClass::returnVector(string hh);
    vector<standard> AllClass::bubbleSort(vector<standard>& theVector, string typeSort);
    string AllClass::printDataPoint(vector<standard> s);
};



//Melendez: made bubble sort for map; modification by Vudatha: modified for search by user input
vector<standard> AllClass::bubbleSort(vector<standard>& theVector, string typeSort) { //Jakob: referenced Geeks for Geeks and Aman's Sorting 1 Presentation Slide 24
    standard temp;

    if (typeSort == "cost")
    {
        for (unsigned int i = 0; i < theVector.size() - 1; i++) {
            for (unsigned int j = 0; j < theVector.size() - i - 1; j++) {

                if (theVector[j].cost > theVector[j + 1].cost) { 
                    temp = theVector[j];
                    theVector[j] = theVector[j + 1];
                    theVector[j + 1] = temp;

                }

            }

        }
    }
    else if (typeSort == "revisionYear")
    {
        for (unsigned int i = 0; i < theVector.size() - 1; i++) {
            for (unsigned int j = 0; j < theVector.size() - i - 1; j++) {

                if (theVector[j].revisionYear > theVector[j + 1].revisionYear) { 
                    temp = theVector[j];
                    theVector[j] = theVector[j + 1];
                    theVector[j + 1] = temp;

                }

            }

        }
    }
    else if (typeSort == "subcategory")
    {
        for (unsigned int i = 0; i < theVector.size() - 1; i++) {
            for (unsigned int j = 0; j < theVector.size() - i - 1; j++) {

                if (theVector[j].subcategory.compare(theVector[j + 1].subcategory) > 0) { 
                    temp = theVector[j];
                    theVector[j] = theVector[j + 1];
                    theVector[j + 1] = temp;

                }

            }

        }
    }

    return theVector;
};

class AllClass::Map { //Jakob Melendez: Created map class and functions
public:

    vector<standard> searchRangeYear(int year, int year2, map<std::string, standard> theMap);
    vector<standard> searchRangeCost(float cost, float cost2, map<std::string, standard> theMap);
    vector<standard> searchSinglePrice(double val, map<string, standard> Map);
    vector<standard> searchSingleYear(string year, map<string, standard>& Map);
    vector<standard> searchSingleID(string ID, map<string, standard> Map);
    map<string, standard> myMap;
};


//Melendez: stores IDs in vector that fall within range of year
vector<standard> AllClass::Map::searchRangeYear(int year, int year2, map<std::string, standard> theMap) {
    vector<standard> retVector;
    for (auto it = theMap.begin(); it != theMap.end(); it++) {
        if (stoi(it->second.revisionYear) > year && stoi(it->second.revisionYear) < year2) {
            retVector.push_back(it->second);

        }

    }

 
    return retVector;

}

//Melendez: prints IDs in range cost
vector<standard> AllClass::Map::searchRangeCost(float cost, float cost2, map<std::string, standard> theMap) {
    vector<standard> retVector;
    for (auto it = theMap.begin(); it != theMap.end(); it++) {
        if (it->second.cost > cost && it->second.cost < cost2) {
            retVector.push_back(it->second);

        }

    }

    return retVector;

}

//Vudatha: search by one price in map; prints all IDs and subsequent info
vector<standard> AllClass::Map::searchSinglePrice(double val, map<string, standard> Map)
{
    vector<standard> temp1;
    for (auto iterator = Map.begin(); iterator != Map.end(); iterator++)
    {
        if (iterator->second.cost == val)
        {
            temp1.push_back(iterator->second);
        }
    }
    return temp1;
}

//Vudatha & Melendez: search by one year in map; prints all IDs and subsequent info
vector<standard> AllClass::Map::searchSingleYear(string year, map<string, standard>& myMap)
{
    vector<standard> temp;
    for (auto iterator = myMap.begin(); iterator != myMap.end(); iterator++)
    {
        if (iterator->second.revisionYear == year)
        {
            temp.push_back(iterator->second);
        }
    }
    return temp;
}

//Vudatha: search single ID in map; prints all IDs and subsequent info
vector<standard> AllClass::Map::searchSingleID(string ID, map<string, standard> Map)
{
    vector<standard> temp2;
    for (auto iterator = Map.begin(); iterator != Map.end(); iterator++)
    {
        if (iterator->second.ID == ID)
        {
            temp2.push_back(iterator->second);
        }
    }
    return temp2;
}

//Hasbun: made Category class
class AllClass::Category {
public:
    vector<standard> children;
    string value;
    Category() {
        value = "";
    }
    Category(string newval) {
        value = newval;

    }

};

class AllClass::Node { //Hasbun: made this to help w the BST
public:
    //Hasbun: used for BST
    Node* left;
    Node* right;
    //Hasbun: used for all nodes
    vector<Category*> children;
    standard item;
    Node() {
        left = nullptr;
        right = nullptr;

    }
    Node(standard newitem) {
        item = newitem;
        left = nullptr;
        right = nullptr;

    }

};


//Tree class by Daniel Hasbun; modifications and additions by Kavitha Vudatha
class AllClass::Tree {

public:
    string TreeSingle;
    vector<standard> searchFind;
    vector<standard> searchPrice;
    Node* root;
    Node* costInsert(Node* newnode, Node* &root);
    Node* IDInsert(Node* newnode, Node* &root);
    void yearInsert(Node* root, standard &newstand);
    void categoryInsert(Node* root, standard &newstand);
    void subcatInsert(Node* root, standard &newstand);
    void priceRangePrint(Node* root, double lower, double upper);
    void singlePriceSearch(Node* root, double search);
    AllClass::Node* IDSearch(Node* root, string search, bool checker);
    void yearRangeSearch(Node* root, string lower, string upper);
    void singleYearSearch(Node* root, string search);
    void yearRangeSortedSearch(Node* root, string lower, string upper);
    string yearRangeSortedSubCat(Node* root, string lower, string upper);
    stack<AllClass::Tree> TreeConstruct(AllClass::Tree yObj, AllClass::Tree iObj, AllClass::Tree cObj, AllClass::Tree sObj, AllClass::Tree pObj);
    AllClass::Tree TreeSort(string typeSort, stack<AllClass::Tree> allTrees);
    void SingleYearSortSearch(Node* root, string search);
    void PriceRangeSortSearch(Node* root, double lower, double upper);
    void PriceSortSearch(Node* root, double searchPrice);
    string singleYearSortedSubCat(Node* root, string year);
    void IdSortSearch(Node* root, string ID);

};

//Hasbun: Tree implementation

//Vudatha: made function to construct the trees
stack<AllClass::Tree> AllClass::Tree::TreeConstruct(AllClass::Tree yObj, AllClass::Tree iObj, AllClass::Tree cObj, AllClass::Tree sObj, AllClass::Tree pObj) {
    //Daniel: inserting data into appropriate trees
    yObj.root = new AllClass::Node();
    cObj.root = new AllClass::Node();
    sObj.root = new AllClass::Node();
    pObj.root = nullptr;
    iObj.root = nullptr;
    AllClass aObj;
    vector<standard> dataVector = aObj.returnVector("StandardList.txt");
    for (unsigned int ii = 0; ii < dataVector.size(); ii++) {
        standard item = dataVector[ii];
        AllClass::Node* inserter1 = new AllClass::Node(item);
        AllClass::Node* inserter2 = new AllClass::Node(item);

        pObj.root = pObj.costInsert(inserter1, pObj.root);
        iObj.root = iObj.IDInsert(inserter2, iObj.root);
        yObj.yearInsert(yObj.root, item);
        cObj.categoryInsert(cObj.root, item);
        sObj.subcatInsert(sObj.root, item);
    }
    
    stack<AllClass::Tree> objects;
    objects.push(yObj);
    objects.push(iObj);
    objects.push(cObj);
    objects.push(sObj);
    objects.push(pObj);
    return objects;
};

//Vudatha: made method to return tree based on user's sort preference
AllClass::Tree AllClass::Tree::TreeSort(string typeSort, stack<AllClass::Tree> allTrees)
{
    AllClass::Tree PriceTree = allTrees.top();
    allTrees.pop();
    AllClass::Tree subTree = allTrees.top();
    allTrees.pop();
    AllClass::Tree catTree = allTrees.top();
        allTrees.pop();
    AllClass::Tree IdTree = allTrees.top();
    allTrees.pop();
    AllClass::Tree YearTree = allTrees.top();

    if (typeSort == "cost") { return PriceTree; }
    if (typeSort == "revisionYear") { return YearTree; }
    if (typeSort == "subcategory") { return subTree; }
}



//creates a BST with the price of standards
AllClass::Node* AllClass::Tree::costInsert(AllClass::Node* newnode, AllClass::Node* &root) {


    Node* searcher = root;

    if (searcher == nullptr) {
        return newnode;
    }

    if (newnode->item.cost < searcher->item.cost) {
        searcher->left = costInsert(newnode, searcher->left);
    }
    if (newnode->item.cost > searcher->item.cost) {
        searcher->right = costInsert(newnode, searcher->right);
    }


    return root;
}

//creates a BST with the ID of standards
AllClass::Node* AllClass::Tree::IDInsert(Node* newnode, Node* &root) {


    Node* searcher = root;

    if (searcher == nullptr) {
        return newnode;
    }

    else if (newnode->item.ID < searcher->item.ID) {
        searcher->left = IDInsert(newnode, searcher->left);
    }

    else if (newnode->item.ID > searcher->item.ID) {
        searcher->right = IDInsert(newnode, searcher->right);
    }

    return root;
}

//Hasbun: inserts an initial category and the standard into the category
void AllClass::Tree::yearInsert(Node* root, standard &newstand) {
    if (root->children.size() == 0) {
        Category* newcat = new Category(newstand.revisionYear);
        newcat->children.push_back(newstand);
        root->children.push_back(newcat);

    }
    else {
        string year = newstand.revisionYear;
        bool added = false;
        for (unsigned int ii = 0; ii < root->children.size(); ii++) {
            if (root->children[ii]->value == year) {
                root->children[ii]->children.push_back(newstand);
                added = true;
            }

        }
        if (added == false) {
            Category* newcat = new Category(newstand.revisionYear);
            newcat->children.push_back(newstand);
            root->children.push_back(newcat);

        }
        if (added == true) {
            added = false;
        }
    }
}

//Hasbun: Creates a standards tree based on category
void AllClass::Tree::categoryInsert(Node* root, standard &newstand) {
    if (root->children.size() == 0) {
        Category* newcat = new Category(newstand.category);
        newcat->children.push_back(newstand);
        root->children.push_back(newcat);

    }
    else {
        string categ = newstand.category;
        bool added = false;
        for (unsigned int ii = 0; ii < root->children.size(); ii++) {
            if (root->children[ii]->value == categ) {
                root->children[ii]->children.push_back(newstand);
                added = true;
            }

        }
        if (added == false) {
            Category* newcat = new Category(newstand.category);
            newcat->children.push_back(newstand);
            root->children.push_back(newcat);

        }
        if (added == true) {
            added = false;
        }
    }
}

// Creates a standards tree based on subcategory
void AllClass::Tree::subcatInsert(Node* root, standard &newstand) {
    if (root->children.size() == 0) {
        Category* newcat = new Category(newstand.subcategory);
        newcat->children.push_back(newstand);
        root->children.push_back(newcat);

    }
    else {
        string sub = newstand.subcategory;
        bool added = false;
        for (unsigned int ii = 0; ii < root->children.size(); ii++) {
            if (root->children[ii]->value == sub) {
                root->children[ii]->children.push_back(newstand);
                added = true;
            }

        }
        if (added == false) {
            Category* newcat = new Category(newstand.subcategory);
            newcat->children.push_back(newstand);
            root->children.push_back(newcat);

        }
        if (added == true) {
            added = false;
        }
    }
}

//TREE SORTING FUNCTIONS//
//Daniel Hasbun
//modifications made by Kavitha Vudatha for sort/gui functionality


//Hasbun: Prints standards in price tree that fall within price range
void AllClass::Tree::priceRangePrint(Node* root, double lower, double upper) {
    Node* searcher = root;
    if (searcher == NULL)
    {
        return;
    }
    else if (searcher != NULL) {
        priceRangePrint(searcher->left, lower, upper);
        if (searcher->item.cost >= lower && searcher->item.cost <= upper) {
            searchFind.push_back(searcher->item);
        }
        priceRangePrint(searcher->right, lower, upper);
    }
    //return searcher;
}

//Vudatha: method made to search in a price range using a tree(that has inserts of type Category) for sorting
void AllClass::Tree::PriceRangeSortSearch(Node* root, double lower, double upper) {
    if (root == nullptr)
    {
        return;
    }
    else
    {
        for (unsigned int ii = 0; ii < root->children.size(); ii++) {
            Category* current = root->children[ii];
                for (unsigned int jj = 0; jj < current->children.size(); jj++) {
                    if (current->children[jj].cost >= lower && current->children[jj].cost <= upper)
                    {
                        searchFind.push_back(current->children[jj]);
                    }
                }
        }
    }

}


//Hasbun: Prints all standards in price tree that match the searched price
void AllClass::Tree::singlePriceSearch(Node* root, double search) { //AllClass::Node* 
    Node* searcher = root;
    if (searcher == NULL)
    {
        return;
    }
    else if (searcher != NULL) {
        singlePriceSearch(searcher->left, search);
        if (to_string(searcher->item.cost).compare(to_string(search)) == 0) {
            searchPrice.push_back(searcher->item);
        }
        singlePriceSearch(searcher->right, search);
    }
       
}

//Vudatha: using specific tree that has type category to print in price search
void AllClass::Tree::PriceSortSearch(Node* root, double searchPrice) {
    if (root == nullptr)
    {
        return;
    }
    else
    {
        for (unsigned int ii = 0; ii < root->children.size(); ii++) {
            Category* current = root->children[ii];
            for (unsigned int jj = 0; jj < current->children.size(); jj++) {
                if (current->children[jj].cost == searchPrice)
                {
                    searchFind.push_back(current->children[jj]);
                }
            }
        }
    }

}

//Hasbun: Prints the standard the corresponds to the specific ID searched
AllClass::Node* AllClass::Tree::IDSearch(Node* root, string search, bool checker) {
    Node* searcher = root;
    if (searcher != NULL) {
        
        if (searcher->item.ID == search) {
            return searcher;
        }
        else if((searcher->item.ID).compare(search) >0)
        {
            searcher = IDSearch(searcher->left, search, checker);
        }
        else
        {
            searcher = IDSearch(searcher->right, search, checker);
        }
        

    }
    return searcher;


}

//Vudatha: method used to search by ID using a particular tree(has type Category items) for sorting
void AllClass::Tree::IdSortSearch(Node* root, string ID) {
    if (root == nullptr)
    {
        return;
    }
    else
    {
        for (unsigned int ii = 0; ii < root->children.size(); ii++) {
            Category* current = root->children[ii];
            for (unsigned int jj = 0; jj < current->children.size(); jj++) {
                if (current->children[jj].ID == ID)
                {
                    searchFind.push_back(current->children[jj]);
                }
            }
        }
    }

    //return r;
}

//Hasbun: Prints the standards that fall within a range of years
void AllClass::Tree::yearRangeSearch(Node* root, string lower, string upper) {
    //string r = "";
    int lowerbound = stoi(lower);
    int upperbound = stoi(upper);
    if (root == nullptr)
    {
        return;
    }
    else
    {
        for (unsigned int ii = 0; ii < root->children.size(); ii++) {
            Category* current = root->children[ii];
            std::istringstream iss(root->children[ii]->value);
            int year;
            iss >> year;
            //int year = stoi(root->children[ii]->value);
            if (year >= lowerbound && year <= upperbound) {
                for (unsigned int jj = 0; jj < current->children.size(); jj++) {
                    searchFind.push_back(current->children[jj]);
                }
            }
        }
    }

}

//Vudatha: uses a particular sort tree to search in a year range
void AllClass::Tree::yearRangeSortedSearch(Node* root, string lower, string upper) {        
    Node* searcher = root;
    int l = stoi(lower);
    int u = stoi(upper);
    if (searcher == NULL)
    {
        return;
    }
    else if (searcher != NULL) {
        yearRangeSortedSearch(searcher->left, lower, upper);
        int temp = stoi(searcher->item.revisionYear);
        if (temp>= l && temp <= u) {
            searchFind.push_back(searcher->item);
        }
        yearRangeSortedSearch(searcher->right, lower, upper);
    }
    //return searcher;
}

//Vudatha: search by year range, sort by subcategory
string AllClass::Tree::yearRangeSortedSubCat(Node* root, string lower, string upper)
{
    int l = stoi(lower);
    int u = stoi(upper);
    string s = "";
    for (unsigned int ii = 0; ii < root->children.size(); ii++) {
        for (unsigned int jj = 0; jj < root->children[ii]->children.size(); jj++) {
            standard printer = root->children[ii]->children[jj];
            int rY = stoi(printer.revisionYear);
            if (rY >= l && rY <= u)
            {
                string d = to_string(printer.cost);
                s = s + "ID: " + printer.ID + "\n" + "Name: " + printer.name + "\n" + "Price: $" + d + "\n" + "Category: " + printer.category + "\n" + "SubCategory: " + printer.subcategory + "\n" + "Revision Year: " + printer.revisionYear + "\n" + "Webpage: " + printer.webpage + "\n" + "\n";
            }
        }
    }
                
    return s;
}

//Vudatha: search by single year, sort by subcategory
string AllClass::Tree::singleYearSortedSubCat(Node* root, string year)
{
    int search = stoi(year);
    string s = "";
    for (unsigned int ii = 0; ii < root->children.size(); ii++) {
        for (unsigned int jj = 0; jj < root->children[ii]->children.size(); jj++) {
            standard printer = root->children[ii]->children[jj];
            int rY = stoi(printer.revisionYear);
            if (rY == search)
            {
                string d = to_string(printer.cost);
                s = s + "ID: " + printer.ID + "\n" + "Name: " + printer.name + "\n" + "Price: $" + d + "\n" + "Category: " + printer.category + "\n" + "SubCategory: " + printer.subcategory + "\n" + "Revision Year: " + printer.revisionYear + "\n" + "Webpage: " + printer.webpage + "\n" + "\n";
            }
        }
    }
    return s;
}


//Hasbun: Prints the standards that were published on a specific year
void AllClass::Tree::singleYearSearch(Node* root, string search) {
    int searcher = stoi(search);
    for (unsigned int ii = 0; ii < root->children.size(); ii++) {
        int year = stoi(root->children[ii]->value);
        if (searcher == year) {
            Category* current = root->children[ii];
            for (unsigned int jj = 0; jj < current->children.size(); jj++) {
                searchFind.push_back(current->children[jj]);
            }
        }
    }
}

//Vudatha: made to search through single year and sorted using a tree(inserts are Nodes)
void AllClass::Tree::SingleYearSortSearch(Node* root, string search) {        //for sorting search results by cost 
    Node* searcher = root;
    int searchYear = stoi(search);
    if (searcher == NULL)
    {
        return;
    }
    else if (searcher != NULL) {
        SingleYearSortSearch(searcher->left, search);
        int temp = stoi(searcher->item.revisionYear);
        if (temp == searchYear) {
            searchFind.push_back(searcher->item);
        }
        SingleYearSortSearch(searcher->right, search);
    }
}


//DATA COLLECTION
//Melendez: returning data as a vector ; modified by Vudatha
vector<standard> AllClass::returnVector(string hh)
{
    standard tempStandard;
    vector<standard> standardVector;
    ifstream file(hh);

    if (file.is_open()) {
        std::string line;

        while (file.good()) {
            for (int i = 1; i <= 7; i++) {


                if (i <= 6) {
                    getline(file, line, ',');

                }
                else {
                    getline(file, line);

                }
                if (line == "")
                {
                    break;
                }
                switch (i) {
                case 1:
                    tempStandard.ID = line;
                    break;
                case 2:
                    tempStandard.name = line;
                    break;
                case 3:
                    tempStandard.category = line;
                    break;
                case 4:
                    tempStandard.subcategory = line;
                    break;
                case 5:
                    tempStandard.revisionYear = line;
                    break;
                case 6:
                    if (line == "")
                    {
                        break;
                    }
                    else
                    {
                        line.erase(0, 1);
                        std::istringstream iss(line);
                        double d;
                        iss >> d;
                        tempStandard.cost = d;  // std::stod(iss);
                        break;
                    }

                case 7:
                    tempStandard.webpage = line;
                    break;
                default:
                    break;

                }
            }

            standardVector.push_back(tempStandard);

        }
    }

    file.close();
    return standardVector;
}

//Melendez: loading data file, modified by Vudatha, storing it in map
map<string, standard> AllClass::inputData(string h)
{
    standard tempStandard;
    vector<standard> standardVector;
    map<string, standard> myMapTest;
    std::ifstream file(h);

    if (file.is_open()) {
        std::string line;

        while (file.good()) {
            for (int i = 1; i <= 7; i++) {


                if (i <= 6) {
                    getline(file, line, ',');

                }
                else {
                    getline(file, line);

                }
                if (line == "")
                {
                    break;
                }
                switch (i) {
                case 1:
                    tempStandard.ID = line;
                    break;
                case 2:
                    tempStandard.name = line;
                    break;
                case 3:
                    tempStandard.category = line;
                    break;
                case 4:
                    tempStandard.subcategory = line;
                    break;
                case 5:
                    tempStandard.revisionYear = line;
                    break;
                case 6:
                    if (line == "")
                    {
                        break;
                    }
                    else
                    {
                        line.erase(0, 1);
                        std::istringstream iss(line);
                        double d;
                        iss >> d;
                        tempStandard.cost = d;  // std::stod(iss);
                        break;
                    }

                case 7:
                    tempStandard.webpage = line;
                    break;
                default:
                    break;

                }
            }

            standardVector.push_back(tempStandard);
            myMapTest[tempStandard.ID] = tempStandard;

        }
    }
    else
    {
        myMapTest["hello"] = tempStandard;
    }

    file.close();
    return myMapTest;
}

//Vudatha: function to print everything in one struct object
string AllClass::printDataPoint(vector<standard> s)
{
    string answer = "";
    string price;
    for (unsigned int i = 0; i < s.size(); i++)
    {
        String^ h = s[i].cost.ToString();
        price = msclr::interop::marshal_as< std::string >(h);
        answer = answer + "ID: " + s[i].ID + "\n";
        answer = answer + "Name: " + s[i].name + "\n";
        answer = answer + "Price: $" + price + "\n";
        answer = answer + "Category: " + s[i].category + "\n";
        answer = answer + "SubCategory: " + s[i].subcategory + "\n";
        answer = answer + "RevisionYear: " + s[i].revisionYear + "\n";
        answer = answer + "Webpage: " + s[i].webpage + "\n";
        answer = answer + "\n";
    }
    return answer;
}





