import java.util.*;

public class hanging {

	public static void main(String[] args) {

		Scanner stdin = new Scanner(System.in);
		int numCases = stdin.nextInt();

		// Go through each case.
		for (int loop=1; loop<=numCases; loop++) {

			// Read in tree info.
			int n = stdin.nextInt();
			int[] spotArray = new int[n];
			for (int i=0; i<n; i++)
				spotArray[i] = stdin.nextInt();

			// Need to put root node in first, because we don't really have pointers...
			node root = new node(0, spotArray[0]);

			// Insert the rest...
			for (int i=1; i<n; i++)
				root.insert(new node(i, spotArray[i]));

			// Put in all the height components of each node.
			int treeHeight = root.fillHeight();

			// Get the answer via post order traversal.
			int[] ans = root.solve();

			// Output the answer - we need to access the spotArray to get the number of spots...
			System.out.println("Flock #"+loop+": "+spotArray[ans[1]]);
			System.out.println();
		}
	}
}

class node {

	public int rank;
	public int spots;
	public int height;
	public node left;
	public node right;

	public node(int order, int numSpots) {
		rank = order;
		spots = numSpots;
		left = null;
		right = null;
	}

	// Works only for unique number of spots.
	public void insert(node item) {

		// Two base cases.
		if (item.spots < this.spots && this.left == null)
			this.left = item;
		else if (item.spots > this.spots && this.right == null)
			this.right = item;

		// Two recursive cases.
		else if (item.spots < this.spots)
			left.insert(item);
		else
			right.insert(item);
	}

	// Fills in the height component of this node and all of its children.
	public int fillHeight() {

		// Base case.
		if (left == null && right == null) {
			height = 0;
			return height;
		}

		int leftHeight = -1;
		int rightHeight = -1;

		// Recursively get the height of both sides.
		if (left != null)  leftHeight = left.fillHeight();
		if (right != null) rightHeight = right.fillHeight();

		// Solve height for this node and return.
		height = Math.max(leftHeight, rightHeight) + 1;
		return height;
	}

	// Pre-condition: Call on root AFTER heights have been filled in.
	// Post-condition: Returns both the best difference in height and that node's order of insertion.
	public int[] solve() {

		int leftHeight = -1;
		int rightHeight = -1;
		int[] leftAns = null;
		int[] rightAns = null;

		// This is the answer for a node with no children.
		if (left == null && right == null) {
			int[] ans = {0, rank};
			return ans;
		}

		// Solve both sides.
		if (left != null)  {
			leftHeight = left.height;
			leftAns = left.solve();
		}

		if (right != null) {
			rightHeight = right.height;
			rightAns = right.solve();
		}

		int[] best;

		// These are easy cases.
		if (left == null)
			best = rightAns;
		else if (right == null)
			best = leftAns;

		// Different difference breaks the tie.
		else if (leftAns[0] > rightAns[0])
			best = leftAns;
		else if (rightAns[0] > leftAns[0])
			best = rightAns;

		// Otherwise, lower insertion order number does.
		else if (leftAns[1] < rightAns[1])
			best = leftAns;
		else
			best = rightAns;

		// Store this node's values here.
		int curBestDiff = Math.abs(leftHeight-rightHeight);
		int curBestNode = this.rank;

		// By virtue of being higher in the tree, this node must have been inserted earlier!
		if (curBestDiff >= best[0]) {
			best[0] = curBestDiff;
			best[1] = curBestNode;
		}

		// Here is our answer!
		return best;
	}
}