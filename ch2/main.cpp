int readNumber();
void writeAnswer(int value);

int main() {
	int x { readNumber() };
	int y { readNumber() };

	writeAnswer(x + y);
	return 0;
}
