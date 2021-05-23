#ifndef MAPLIB_TNODE_H
#define MAPLIB_TNODE_H

template <class TK, class TV>
class TNode {
protected:
    TK key;
    TV val;

public:
    TNode();
    TNode(TK k , TV v);
    TNode(const TNode &p);

    TK GetKey();
    TV GetVal();

    void SetKey(TK k);
    void SetVal(TV v);

    TNode &operator=(const TNode &p);

    bool operator==(TNode &p);
    bool operator>(TNode &p);
    bool operator<(TNode &p);
    bool operator<=(TNode &p);
    bool operator>=(TNode &p);
    template <class TTK, class TTV> friend class TMap;
    template <class TTK, class TTV> friend class TSortMap;
};

#endif 
