int biggest_common_divisor_recursive(int a, int b) {

	if (a == b) {
		return a;
	}

	if (a > b) {
		a -= b;
	}

	if (b > a) {
		b -= a;
	}

	return biggest_common_divisor_recursive(a, b);
}

int biggest_common_divisor_iterative(int a, int b) {
	
	do {
		if (a > b) {
			a -= b;
		}

		if (b > a) {
			b -= a;
		}
	} while (a != b);

	return a;
}