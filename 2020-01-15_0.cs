using System;

class Something {
	string name = string.Empty;

	public string Name {
		set { this.name = "Something " + value; }
		get { return this.name; }
	}

	public Something() {}

	public Something(string name) {
		this.Name = name;
	}
}

static class Application01 {
	static void Main(string[] Args) {
		var something = new Something();
		Console.WriteLine(something.Name);

		something.Name = "AAA";
		Console.WriteLine(something.Name);
	}
}

