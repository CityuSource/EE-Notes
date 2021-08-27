// file: queueADT.h

template<class Type>
class queueADT {
	public:
		virtual void initialize() = 0;
		//remark: the initialize() function is not part of the
		//        C++ STL. The initialization can be taken care
		//        of by the constructor.

		virtual int size() const = 0;
		virtual bool empty() const = 0;

		virtual Type& front() const = 0;

		virtual void push(const Type& item) = 0;

		virtual void pop() = 0;
};

