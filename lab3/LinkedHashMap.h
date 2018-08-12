//
// Created by wei on 2018/6/1.
//

#ifndef UNTITLED1_LINKEDHASHMAP_H
#define UNTITLED1_LINKEDHASHMAP_H

#include <map>
#include <vector>
using namespace std;
template <class K,class V>
class LinkedMap{
	class Entry{
		public:
		K k;
		V v;
		Entry(const K& k,const V& v){
			this->k=k;
			this->v=v;
		}
	};
    map<K,V> m;
    vector<Entry> keys;
public:
    void put(const K& k,const V &v){
        keys.push_back(Entry(k,v));
        m[k]=v;
    }

    V get(const K &k){
        return m[k];
    }

    inline int size()const {
        return keys.size();
    }

    V get(int index){
        return keys[index].v;
    }
	
	K getKey(int index){
		return keys[index].k;
	}

};
#endif //UNTITLED1_LINKEDHASHMAP_H
