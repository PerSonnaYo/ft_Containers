#include "Map.hpp"
#include <map>
#include <iostream>
#include <vector>
#include <utility>

// пустое дерево
// переписать инсерт (возврат итератора)
//  переписать итераторы
using namespace std;
template<class Q, class U>
void printmaprev(ft::Map<Q, U> &l)
{
    typename ft::Map <Q, U> :: reverse_iterator it1 = l.rbegin();
    typename ft::Map <Q, U> :: reverse_iterator it2 = l.rend();
    cout << "А вот все отсортированно: " << endl;
    for (int i = 0; it1 != it2; it1++, i++) {  // выводим их
        //        cout  << ") Ключ " << it1->first << ", значение " << it1->second << endl;
        cout  << i << ") Ключ " << it1->first << ", значение " << it1->second << endl;
    }
}
template<class Q, class U>
void printmapconst(ft::Map<Q, U> &l)
{
    typename ft::Map <Q, U> :: const_iterator it1;
    it1 = l.end();
    typename ft::Map <Q, U> :: const_iterator it2;
    it2 = l.begin();
    cout << "А вот все отсортированно: " << endl;
    for (int i = 0; it2 != it1; it2++, i++) {  // выводим их
        //        cout  << ") Ключ " << it1->first << ", значение " << it1->second << endl;
        cout  << i << ") Ключ " << it2->first << ", значение " << it2->second << endl;
    }
}
template<class Q, class U>
        void printmap1(ft::Map<Q, U> &l)
        {
            typename ft::Map <Q, U> :: iterator it1 = l.find(200);
            typename ft::Map <Q, U> :: iterator it2 = l.begin();
            cout << "А вот все отсортированно: " << endl;
            for (int i = 0; it2 != it1; it1--, i++) {  // выводим их
                //        cout  << ") Ключ " << it1->first << ", значение " << it1->second << endl;
                cout  << i << ") Ключ " << it1->first << ", значение " << it1->second << endl;
            }
        }
        template<typename Q, typename U>
void printmap(ft::Map<Q, U> &l)
{
    typename ft::Map < Q,  U> :: iterator it1 = l.end();
    typename ft::Map <Q, U> :: iterator it2 = l.begin();
    cout << "А вот все отсортированно: " << endl;
    for (int i = 0; it2 != it1; it2++, i++) {  // выводим их
        //        cout  << ") Ключ " << it1->first << ", значение " << it1->second << endl;
        cout  << i << ") Ключ " << it2->first << ", значение " << it2->second << endl;
    }
}
int main()
{
    cout << "|insert []= | " << endl;
    ft::Map<int, int> l;
    int g = 5;
    ft::pair<int ,int> j(g, 12);
    ft::pair<int ,int> j1(2, 222);
    ft::pair<int ,int> j4(20, 18);
    ft::pair<int ,int> j2(4, 14);
    ft::pair<int ,int> j3(6, 13);
    ft::pair<int ,int> j5(34, 13);
    ft::pair<int ,int> j6(78, 13);
    ft::pair<int ,int> j7(23, 13);
    ft::pair<int ,int> j8(26, 13);
    ft::pair<int ,int> j9(-34, 90);
    l.insert(j);
    l.insert(j1);
    l[34] = 4565;
    l[111] = 4355;
    l[200] = -3434;
    l[-12] = -444;
    l[25] = -644;
    l.insert(j4);
    l.insert(j3);
    l.insert(j5);
    l.insert(j6);
    l.insert(j7);
    l.insert(j8);
    printmap(l);
    ft::Map <int, int> :: iterator u1 = l.begin();
    ft::Map <int, int> :: iterator u2 = l.end();
    u1 = l.find(4);
    cout << "|iterator find| " << u1->second << endl;
    ft::Map <int, int> :: const_iterator h1 = l.begin();
    ft::Map <int, int> :: const_iterator h2;
    h2 = l.find(111);
    h1 = h2;
    cout << "|const_iterator find| " << h2->second << endl;
    cout << "|const_iterator find| " << h1->second << endl;
    cout << "|size| " << l.size() << endl;
    u1 = l.find(23);
    cout << "|insert iter-key| " << endl;
    u1 = l.insert(u1, j2);
    cout << "|iterator insert| " << u1->first << endl;
    u1++;
    u1 = l.insert(u1, j9);
    cout << "|iterator insert| " << u1->first << endl;
    printmap(l);
    printmap1(l);
    cout << "|[]| " << l[34] << "\t" << l[111] << endl;
    cout << "|count| " << l.count(333) << "\t" << l.count(34) << endl;
    ft::Map <int, int> :: reverse_iterator u3 = l.rbegin();
    ft::Map <int, int> :: const_reverse_iterator pp3 = l.rbegin();
    cout << "|reverse_iter| " << u3->first << "        "<< u3->second << pp3->first << endl;
    cout << "|insert iter-iter| " << endl;
    u1 = l.find(6);
    u2 = l.find(34);
    ft::Map <int, int> oleg;
    oleg.insert(u1, u2);
    printmap(oleg);
    cout << "|at| " << l.at(6) << endl;
//    cout << "at " << l.at(999) << endl;
    cout << "|empty| " << l.empty() << endl;
    ft::Map <int, int> :: iterator u4 = l.lower_bound(31);
    cout << "|lower_bound| " << u4->first << endl;
    u4 = l.lower_bound(-8);
    cout << "|lower_bound| " << u4->first << endl;
    u4 = l.lower_bound(8);
    cout << "|lower_bound| " << u4->first << endl;
    u4 = l.lower_bound(5);
    cout << "|lower_bound| " << u4->first << endl;
    u4 = l.lower_bound(25);
    cout << "|lower_bound| " << u4->first << endl;
    ft::Map <int, int> :: iterator u5 = l.upper_bound(31);
    cout << "|upper_bound| " << u5->first << endl;
    u5 = l.upper_bound(-8);
    cout << "|upper_bound| " << u5->first << endl;
    u5 = l.upper_bound(8);
    cout << "|upper_bound| " << u5->first << endl;
    u5 = l.upper_bound(5);
    cout << "|upper_bound| " << u5->first << endl;
    u5 = l.upper_bound(25);
    cout << "|upper_bound| " << u5->first << endl;
    cout << "|erase iter| " << endl;
    u4 = l.upper_bound(30);
    l.erase(u4);
    printmap(l);
    cout << "|print const iter| " << endl;
    printmapconst(l);
    cout << "|print rev iter| " << endl;
    printmaprev(l);
    ft::pair <ft::Map <int, int> :: iterator, ft::Map <int, int> :: iterator> o1(u4, u5);
    o1 = l.equal_range(5);
    cout << "|equal_range| " << o1.first->first  << "\t" << o1.second->first<< endl;
    o1 = l.equal_range(23);
    cout << "|equal_range| " << o1.first->first  << "\t" << o1.second->first<< endl;
    cout << "|erase key| " << endl;
    l.erase(111);
    l.erase(200);
    l.erase(26);
    l.erase(34);
    printmap(l);
    u1 = l.begin();
    u2 = l.end();
    ft::Map<int, int> l1(u1, u2);
    cout << "|construct_iterator| " << endl;
    printmap(l1);
    ft::Map<int, int> l2;
    ft::pair<int ,int> ty1(6, 3);
    ft::pair<int ,int> ty2(2, 89);
    ft::pair<int ,int> ty3(89, 33333);
    l2.insert(ty1);
    l2.insert(ty2);
    l2.insert(ty3);
    cout << "== " << (l2 == l) << endl;
    cout << "<= " << (l2 <= l) << endl;
    cout << "< " << (l2 < l) << endl;
    cout << ">= " << (l2 >= l) << endl;
    cout << "> " << (l2 > l) << endl;
    cout << "!= " << (l2 != l) << endl;
    l[111] = 4355;
    l[200] = -3434;
    l.insert(j8);
    l.insert(j5);
    u4 = l.upper_bound(5);
    u5 = l.upper_bound(30);
    u1 = l.begin();
    u2 = l.end();
    ft::Map<int, int> l3(u1, u2);
    cout << "|erase iter iter| " << endl;
    l.erase(u4, u5);
    printmap(l);
    cout << "|clear| " << endl;
    l.clear();
    printmap(l);
    l3.swap(l);
    cout << "|swap| " << endl;
    printmap(l3);
    printmap(l);
    cout << "|copyconstruct | " << endl;
    ft::Map<int, int> boris(l);
    l.clear();
    cout << "|boris:| " <<endl;
    printmap(boris);
    cout << "++++++++++++++++++++++++" << endl;
}