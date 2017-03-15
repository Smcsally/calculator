#pragma once
class Stack {
	public:
		Stack();
		~Stack();

		void push(double new_data);
		double pop();
		bool empty() const;

	private:
		struct Node {
			double data;
			Node* underneath;
		};
		Node* top;
};