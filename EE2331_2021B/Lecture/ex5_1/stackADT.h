// file: stackADT.h

template<class Type>
class stackADT {
	public:
		virtual void initialize() = 0; //pure virtual function
		//remark: the initialize() function is not part of the
		//        C++ STL. The initialization can be taken care
		//        of by the constructor.

		virtual int size() const = 0;
		virtual bool empty() const = 0;

		virtual Type& top() const = 0; //return reference
		//of the top element

		virtual void push(const Type& item) = 0;//reference

		virtual void pop() = 0;
		//Note that in the C++ STL, the pop function does not
		//return the (old) top element that is removed.

		//Remark: in Java, the pop method of the class Stack
		//        will return the removed element.
};
