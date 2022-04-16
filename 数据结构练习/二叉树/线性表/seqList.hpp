#pragma once
//#ifndef _SEQLIST_HPP_
//#define _SEQLIST_HPP_
#include"List.h"
template <class T>					// TΪ˳���洢��Ԫ������
class seqList : public List<T>
{
private:
    T* data;							// ��������洢����Ԫ�� 
    int curLength;							// ��ǰ˳����д洢��Ԫ�ظ���
    int maxSize;							// ˳������󳤶�
    void resize();							// ����ʱ�����ռ�
public:
    seqList(int initSize = 10);				// ���캯�� 
    seqList(seqList& sl);					// �������캯��
    ~seqList() { delete[] data; }			// �������� 
    void clear() { curLength = 0; }			// ��ձ�ֻ���޸�curLength
    bool empty()const { return curLength == 0; }	// �п�
    int size() const { return curLength; }	// ����˳���ĵ�ǰ�洢Ԫ�صĸ��� 
    void insert(int i, const T& value);	// ��λ��i�ϲ���һ��Ԫ��value����ĳ�����1
    void remove(int i);						// ɾ��λ��i�ϵ�Ԫ��value����ɾ��λ�úϷ�����ĳ��ȼ�1 
    int search(const T& value) const;	// ����ֵΪvalue��Ԫ�ص�һ�γ��ֵ�λ��
    T visit(int i) const;			// ����λ��Ϊi��Ԫ��ֵ����λ��0��ʾ��һ��Ԫ�أ������������±�
    void traverse() const;					// ����˳���
    void inverse();							// ����˳���
    bool Union(seqList<T>& B);
};
template <class T>
seqList<T>::seqList(int initSize)
{
    if (initSize <= 0) throw badSize();
    maxSize = initSize;
    data = new T[maxSize];			// ����һ����СΪmaxSize��˳���
    curLength = 0;
}
template <class T>
seqList<T>::seqList(seqList& sl) {
    maxSize = sl.maxSize;
    curLength = sl.curLength;
    data = new T[maxSize];
    for (int i = 0; i < curLength; ++i)
        data[i] = sl.data[i];
}
template <class T>
void seqList<T>::insert(int i, const T& value)
{
    if (i < 0 || i > curLength) throw outOfRange();	// �Ϸ��Ĳ���λ��Ϊ[0..n]
    if (curLength == maxSize) resize();			// ������������������
    for (int j = curLength; j > i; j--)			// �±�j-1��[curLength-1..i]��Χ
        data[j] = data[j - 1];						// ��Ԫ�������ƶ�һ��
    data[i] = value; 							// �� value ����λ��Ϊi��λ��
    ++curLength;								// ���ʵ�ʳ�����1
}

template <class T>
void seqList<T>::remove(int i)
{
    if (i < 0 || i > curLength - 1) throw outOfRange(); 	// �Ϸ���ɾ��λ��Ϊ[0..n-1] 
    for (int j = i; j < curLength - 1; j++)			// �±�j+1��[i+1..n-1]��Χ
        data[j] = data[j + 1];						// ��Ԫ����ǰ�ƶ�һ��
    --curLength; 									// ���ʵ�ʳ��ȼ�1
}

template <class T>
void seqList<T>::resize()
{
    T* p = data;							// pָ��ԭ˳���ռ�
    maxSize *= 2;									// ��ռ�����2��
    data = new T[maxSize];					// dataָ���µı�ռ�
    for (int i = 0; i < curLength; ++i)
        data[i] = p[i];							// ����Ԫ��
    delete[] p;
}

template<class T>
int seqList<T>::search(const T& value) const
{
    for (int i = 0; i < curLength; i++)
        if (value == data[i]) return i;
    return -1;								// ����ʧ�ܷ���-1
}

template<class T>
T seqList<T>::visit(int i) const
{
    if (i < 0 || i > curLength - 1) throw outOfRange();// �Ϸ��ķ���λ��Ϊ[0..n-1] 
    return data[i];
}

template<class T>
void seqList<T>::traverse()const
{
    if (empty())cout << "List is empty\n";		// �ձ�û��Ԫ��
    else {
        cout << "output element:\n";
        for (int i = 0; i < curLength; i++)		// ���η���˳���������Ԫ��
            cout << data[i] << "  ";
        cout << endl;
    }
}

template<class T>
void seqList<T>::inverse()
{
    T tmp;
    for (int i = 0; i < curLength / 2; i++) {			// ���ƽ����Ĵ��� 
        tmp = data[i];
        data[i] = data[curLength - i - 1];
        data[curLength - i - 1] = tmp;
    }
}
//template<class T>
//bool seqList<T>::Union(seqList<T>& B) {
//    int m, n, k, i, j;
//    m = this->curLength; 			        // ��ǰ����Ϊ���Ա�A
//    n = B.curLength;				        // m��n�ֱ�Ϊ���Ա�A��B�ĳ���
//    k = m + n - 1;						// kΪ������Ա�Ĺ���ָ�루�±꣩
//    i = m - 1, j = n - 1;				    // i��j�ֱ�Ϊ���Ա�A��B�Ĺ���ָ�루�±꣩
//    if (m + n > this->maxSize) {				// �ж�A��ռ��Ƿ��㹻��
//        resize();						    // �ռ䲻���������ռ�
//    }
//    while (i >= 0 && j >= 0)				// �ϲ�˳���ֱ��һ����Ϊ��
//        if (data[i] >= B.data[j])  data[k--] = data[i--];
//        else  data[k--] = B.data[j--];	// Ĭ�ϵ�ǰ����thisָ���ʡ��
//    while (j >= 0) 						// ��B���ʣ��Ԫ�ظ��Ƶ�A��
//        data[k--] = B.data[j--];
//    curLength = m + n; 					// �޸�A����
//    return true;
//}

template<class T>
bool seqList<T>::Union(seqList<T>& B)
{
    int m = this->curLength;
    int n = B.curLength;                    //m,n�ֱ�ΪA��B��Ĵ�С
    int k = m + n - 1;                      //kΪ�±�Ĵ�С
    int i = n - 1;                          //i,j�ֱ�ΪA,B����±�
    int j = m - 1;
    if (n + m > maxSize)resize();
    while (i >= 0 && j >= 0)
    {
        if (data[i] > B.data[j])data[k--] = data[i--];
        else data[k--] = B.data[j--];
    }
    while (j >= 0)data[k--] = data[j--];
    this->curLength = n + m;
    return true;
}


//#endif