#include "Vector.hpp"
#include <vector>
#include <iostream>
using namespace std;
template<typename T>
void print_vec1(ft::Vector<T>& vec)
{
    int p =0;
    typename ft::Vector<T>::iterator x = vec.begin();
    //    cout << *x << endl;
    typename ft::Vector<T>::iterator x1 = vec.end();
    x1--;
    for (int i = 0; x != x1; i++, x1--)
    {
        cout << " |" << i << ") " << *x1;
        p = i;
    }
    cout << " |" << ++p << ") " << *x1;
    cout << '\n';
}
template<typename T>
void print_vec(ft::Vector<T>& vec)
{
    typename ft::Vector<T>::iterator x = vec.begin();
//    cout << *x << endl;
    typename ft::Vector<T>::iterator x1 = vec.end();
    for (int i = 0; x != x1; i++, ++x)
    {
        cout << " |" << i << ") " << *x;
    }
    cout << '\n';
}
template<typename T>
void cappa(ft::Vector<T> &h)
{
    cout << "SIZE:  " << h.size() << "   CAPACITY: " << h.capacity() << endl;
}

int main()
{
    ft::Vector<int> gg;
    cappa(gg);
    gg.push_back(40);
    cappa(gg);
    gg.push_back(40);
    cappa(gg);
    gg.push_back(40);
    cappa(gg);
    gg.clear();
    cout << "|resise| :" << endl;
    gg.resize(10);
    print_vec(gg);
    cappa(gg);
    gg.resize(18);
    cappa(gg);
    cout << "|reserve| :" << endl;
    gg.reserve(25);
    cappa(gg);
    print_vec(gg);
    gg.resize(12);
    cappa(gg);
    cout << "|resise + val| :" << endl;
    gg.resize(15, 37);
    cappa(gg);
    print_vec(gg);
    gg.resize(8, -15);
    cappa(gg);
    print_vec(gg);
    gg.reserve(10);
    cappa(gg);
    cout << "|push_back| :" << endl;
    gg.resize(23);
    cappa(gg);
    gg.push_back(40);
    cappa(gg);
    print_vec(gg);
    gg.push_back(41);
    cappa(gg);
    print_vec(gg);
    gg.push_back(42);
    cappa(gg);
    print_vec(gg);
    gg.pop_back();
    gg.pop_back();
    gg.pop_back();
    cappa(gg);
    cout << "|assign| :" << endl;
    gg.assign(15, 111);
    cappa(gg);
    print_vec(gg);
    gg.assign(18, -2);
    cappa(gg);
    print_vec(gg);
    cout << "|empty| : " << gg.empty() << endl;
    cout << "|[]| : " << gg[3] << gg[4] << gg[999] << endl;
    gg.push_back(41);
    cout << "|data| : " << gg.data() << endl;
    cout << "|back| : " << gg.back() << endl;
    cout << "|front| : " << gg.front() << endl;
//    cout << "|at| : " << gg.at(-2) << endl;
    cout << "|at| : " << gg.at(4) << endl;
    gg.assign(8, -2);
    cout << "|insert + val| :" << endl;
    ft::Vector<int>::iterator it1 = gg.begin();
    cout << *it1 << endl;
    it1++;
    it1++;
    it1 = gg.insert(it1, 66);
    cappa(gg);
    print_vec(gg);
    cout << *it1 << endl;
    it1 = gg.end();
    it1 = gg.insert(it1, 77);
    cappa(gg);
    print_vec(gg);
    it1 = gg.begin();
    it1 = gg.insert(it1, 77);
    cappa(gg);
    print_vec(gg);
    it1++;
    it1++;
    cout << "|insert + count + val| :" << endl;
    gg.insert(it1, 2,55);
    cappa(gg);
    print_vec(gg);
    print_vec1(gg);
    cout << "|[]=| :" << endl;
    gg[7] = 44;
    gg[9] = 323;
    gg[10] = -984;
    print_vec(gg);
    gg[100] = 4565;
    print_vec(gg);
    ft::Vector<int> hg1(3, 4);
    ft::Vector<int>::iterator ity;
    ity = hg1.begin();
    ity = hg1.insert(ity, 6);
    ity = hg1.insert(ity, 6);
    ity = hg1.insert(ity, 6);
    ity = hg1.insert(ity, 6);
    ity = hg1.insert(ity, 6);
    ity = hg1.insert(ity, 6);
    cappa(hg1);
    cout << "|iterator operations| :" << endl;
    ft::Vector<int>::const_iterator rr = gg.begin();
    ft::Vector<int>::const_iterator r1;
    rr++;
    cout << *rr << endl;
    rr += 3;
    cout << *rr << endl;
    rr--;
    cout << *rr << endl;
    cout << rr[4] << endl;
    r1 = rr + 6;
    cout << *r1 << endl;
    rr += 6;
    rr -= 2;
    cout << *rr << endl;
    r1 = rr - 2;
    cout << *r1 << endl;
    ft::Vector<int>::reverse_iterator ee = gg.rbegin();
    ft::Vector<int>::reverse_iterator e1;
    e1 = gg.rend();
    cout << "||" << *ee << endl;
    ee++;
    cout << "||" << *ee << endl;
    ee += 3;
    cout << *ee << endl;
    ee--;
    cout << *ee << endl;
    cout << ee[4] << endl;
    e1 = ee + 6;
    cout << *e1 << endl;
    ee += 6;
    ee -= 2;
    cout << *ee << endl;
    e1 = ee - 2;
    cout << *e1 << endl;
    cout << ">" << (r1 > rr) << endl;
    cout << "<=" << (r1 <= rr) << endl;
    cout << "!+" << (r1 != rr) << endl;
    cout << ">" << (e1 > ee) << endl;
    cout << "==" << (e1 == ee) << endl;
    cout << "<" << (e1 < ee) << endl;
    cout << "<=" << (e1 <= ee) << endl;
    cout << "|construct + count + val| :" << endl;
    ft::Vector<int> jj(10, 55);
    cappa(jj);
    print_vec(jj);
    rr = gg.begin();
    ft::Vector<int>::iterator pp = jj.begin();
    pp++;
    pp = jj.insert(pp, 77);
    pp = jj.insert(pp, 78);
    pp = jj.insert(pp, 79);
    cappa(jj);
    r1 = gg.end();
    r1 -= 3;
    cout << "|insert + iterator + iter + iter| :" << endl;
    ft::Vector<int> pa(24, -55);
    ft::Vector<int> pi(3, -45);
    ft::Vector<int>::iterator da1 = pa.begin();
    ft::Vector<int>::iterator da2 = pa.end();
    ft::Vector<int>::iterator da3 = pi.begin();
    da3++;
    pi.insert(da3, da1, da2);
    cout << "|pi| :" << endl;
    cappa(pi);
    print_vec(pi);
    cout << "|construct + iterator| :" << endl;
    ft::Vector<int> bah(rr, r1);
    cappa(bah);
    print_vec(bah);
    cout << "|assign + iter| :" << endl;
    da3 = pi.begin();
    da3 += 8;
    da2 = pi.begin();
    bah.assign(da2, da3);
    cappa(bah);
    print_vec(bah);
    cout << ">" << (pi > bah) << endl;
    cout << ">=" << (pi <= bah) << endl;
    cout << "!=" << (pi != bah) << endl;
    cout << "==" << (pi == bah) << endl;
    cout << "<" << (pi < bah) << endl;
    cout << "<=" << (pi <= bah) << endl;
    cout << "|swap| :" << endl;
    pi.swap(bah);
    print_vec(bah);
    print_vec(pi);
    cout << "|erase iter| :" << endl;
    print_vec(gg);
    da1 = gg.begin();
    da1 += 4;
    da1 = gg.erase(da1);
    da1 = gg.erase(da1);
//    da1 += 4;
    da1 = gg.erase(da1);
    print_vec(gg);
    cout << *da1 << endl;
    cappa(gg);
    gg.push_back(345);
    gg.push_back(-467);
    gg.push_back(4343);
    gg.push_back(93543);
    da1 = gg.begin();
    da1+= 4;
    da2 = gg.end();
    //    dd2--;
    print_vec(gg);
    cout << "|erase iter iter| :" << endl;
    da1 = gg.erase(da1, da2);
    print_vec(gg);
    cout << *da1 << endl;
    cappa(gg);
    cout << "|constructor copy| :" << endl;
    ft::Vector<int> tanos(gg);
    gg.clear();
    cappa(tanos);
    print_vec(tanos);
    cout << "++++++++++++++++" << endl;
}