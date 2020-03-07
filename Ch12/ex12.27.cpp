#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::ostream;
using std::istream;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;

#include <sstream>
using std::istringstream;

#include <memory>
using std::shared_ptr;
using std::make_shared;

#include <map>
using std::map;

#include <set>
using std::set;

class QueryResult;

class TextQuery {
friend class QueryResult;
public:
    TextQuery() = default;
    TextQuery(ifstream& );
    QueryResult query(const string &);
private:
    shared_ptr<vector<string>> data;
    map<string, set<int>> mss;
};


// initialization for data is a must
TextQuery::TextQuery(ifstream& is) : data(make_shared<vector<string>>()) {
    string s;
    size_t lino = 0;
    while (getline(is, s)) {
        data->push_back(s);
        istringstream iss(s);
        string ss;
        while (iss >> ss) {
            mss[ss].insert(lino);
        }
        ++lino;
    }
}


class QueryResult {
friend ostream& print(ostream&, const QueryResult&);
public:
    QueryResult() = default;
    QueryResult(const string& s, TextQuery& tq, size_t c, vector<size_t> lins)
        : tmps(s), data(tq.data), count(c), linos(lins) { }
private:
    string tmps;
    shared_ptr<vector<string>> data;
    size_t count;
    vector<size_t> linos;
};

QueryResult TextQuery::query(const string& s) {
    size_t count;
    auto p = mss.find(s);
    vector<size_t> linos(p->second.begin(), p->second.end());
    count = linos.size();

    auto qr = QueryResult(s, *this, count, linos);
    return qr;
}


ostream& print(ostream& os, const QueryResult & qr) {
    os << qr.tmps << " occurs " 
       << qr.count << " times\n " ;
    for (auto i : qr.linos) {
        os << "\t(" << i << ") "
           << qr.data->at(i)
           << "\n";
    }
    return os;
}

void runQueries(ifstream &infile)
{
    TextQuery tq(infile);
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;

        print(cout, tq.query(s)) << endl;
    }
}

int main(int argc, char** argv)
{
    ifstream input(argv[1]);
    runQueries(input);

    return 0;
}


