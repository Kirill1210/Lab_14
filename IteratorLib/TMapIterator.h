#ifndef MAPLIB_TMAPITERATOR_H
#define MAPLIB_TMAPITERATOR_H

template <class TTK, class TTV> class TNode;
template <class TTK, class TTV> class TMap;

template <class TK, class TV>
class TMapIterator {
protected:
    int index;
    TMap<TK, TV> &container;
public:
    TMapIterator(TMap<TK, TV>& map);
    TMapIterator(TMapIterator<TK, TV> const &iterator);
    TMapIterator& GoNext();
    bool CanGoNext();
    TK GetKey();
    TV GetVal();
    TNode<TK, TV> GetNode();
    ~TMapIterator() = default;
};
#endif 
