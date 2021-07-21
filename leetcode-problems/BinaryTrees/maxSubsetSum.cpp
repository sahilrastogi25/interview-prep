class Pair {
public:
	int inc;
	int exc;
};


Pair MaxSubSetSum(node* root) {
	Pair p;
	if (root == NULL) {
		p.inc = 0;
		p.exc = 0;
		return p;
	}
	Pair left = MaxSubSetSum(root->left);
	Pair right = MaxSubSetSum(root->right);

	p.inc = root->data + left.exc + right.exc;
	p.exc = max(left.inc, left.exc) + max(right.exc, right.inc);
	return p;
}