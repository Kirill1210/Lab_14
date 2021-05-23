#ifndef MAPLIB_TMAP_H
#define MAPLIB_TMAP_H

#include <stdexcept>
#include <fstream>
#include "TNode.cpp"
#include "TMapIterator.cpp"

template <class TK, class TV>
class TMap {
protected:
    TNode<TK, TV> *mas;
    int size;
    int count;

    void Resize(int newSize);

public:
    TMap(int _size = 1000);
    TMap(const TMap &p);
    TMap(int _size, TNode<TK, TV> *_mas);
    int GetCount();
    TNode<TK, TV> * GetMas();

    virtual ~TMap();
    virtual TV &operator[](TK i);
    virtual TV Find(TK k);
    virtual void Delete(TK k);
    virtual void Add(TK k, TV v);

    // доп
    typedef TMapIterator<TK, TV> iterator;
    friend class TMapIterator<TK, TV>;
    iterator Begin();

    template <class TTK, class TTV>
    friend std::ostream &operator<<(std::ostream &ostream, const TMap<TTK, TTV> &map);
    // доп
    bool save(const std::string filename);
    static TMap load(const std::string filename);
};

#endif 
