#include <iostream>
#include <list>
using namespace std;

namespace assignment
{
    template <typename Iter, typename Func>
    Iter find(Iter start, Iter end, Func fun)
    {
        for ( auto it = start; it != end; ++it )
        {
            if ( fun(*it) )
                return it;
        }
        return end; // wasn't found
    }
}

int main()
{
/*    int arr [] = {1, 2, 5, 2, 7 ,8};
    auto pos = Find(begin(arr), end(arr), 2);
    if ( pos != end(arr) )
        cout << *pos << " found";
    else
        cout << "not found";
*/
    // After modifications:

    std::list<int> l{1,6,2,7,0,9};
    auto val = assignment::find(begin(l), end(l),
                                [](int i) { return i % 2 == 0; });
    if ( val != end(l) )
        cout << "First even number: " << *val << endl;

}
