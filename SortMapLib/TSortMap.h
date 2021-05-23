#ifndef MAPLIB_TSORTMAP_H
#define MAPLIB_TSORTMAP_H

#include "TMap.h"

template<class TK, class TV>
class TSortMap : public TMap<TK, TV> {
protected:
    int FindItem(TK key);

public:
    explicit TSortMap(int _size = 1000);

    TSortMap(int _size, TNode<TK, TV> *_mas);

    TV &operator[](TK key) override;
    TV Find(TK key) override;
    void Delete(TK key) override;
    void Add(TK k, TV v) override;
    static TSortMap load(const std::string filename);
};

#endif 
