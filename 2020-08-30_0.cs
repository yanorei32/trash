using System;
using System.IO;

static class XXX {
	enum Type {
		World,
		Avatar,
		Other,
	};
	static void Main(string[] args) {
		foreach (string x in args) {
			var readFS = File.OpenRead(x);
			var writeFS = File.Create(x + ".assetbundle");

			char[] content = { 'a', 'p', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', '/', 'x', '-' };
			char[] crlf = {'\r', '\n'};
			int c, crlf_p, content_p;
			crlf_p = content_p = 0;

			Type t = Type.Other;

			while (true) {
				if ((c = readFS.ReadByte()) == -1) {
					throw new Exception("failed to search body");
				}

				if (t == Type.Other) {
					if (content_p == content.Length) {
						if (c == 'a') {
							t = Type.Avatar;
						} else if (c == 'w') {
							t = Type.World;
						}
					} else {
						if (c == content[content_p]) {
							content_p ++;
						} else {
							content_p = 0;
						}
					}
				}

				if (c == crlf[crlf_p % 2]) {
					crlf_p ++;

					if (crlf_p == crlf.Length * 2) {
						break;
					}
				} else {
					crlf_p = 0;
				}
			}

			readFS.CopyTo(writeFS);

			writeFS.Close();

			if (t == Type.Avatar) {
				File.Move(x + ".assetbundle", x + ".vrca");
			} else if (t == Type.World) {
				File.Move(x + ".assetbundle", x + ".vrcw");
			}
		}

	}
}

