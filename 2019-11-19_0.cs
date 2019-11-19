using System.Drawing;
using System.Drawing.Imaging;
using System.IO;

class ExportIcon {
	static void Main(string[] Args) {
		Directory.CreateDirectory("icons");
		SystemIcons.Application.ToBitmap().Save(@"icons\Application.png", ImageFormat.Png);
		SystemIcons.Asterisk.ToBitmap().Save(@"icons\Asterisk.png", ImageFormat.Png);
		SystemIcons.Error.ToBitmap().Save(@"icons\Error.png", ImageFormat.Png);
		SystemIcons.Exclamation.ToBitmap().Save(@"icons\Exclamation.png", ImageFormat.Png);
		SystemIcons.Hand.ToBitmap().Save(@"icons\Hand.png", ImageFormat.Png);
		SystemIcons.Information.ToBitmap().Save(@"icons\Information.png", ImageFormat.Png);
		SystemIcons.Question.ToBitmap().Save(@"icons\Question.png", ImageFormat.Png);
		SystemIcons.Shield.ToBitmap().Save(@"icons\Shield.png", ImageFormat.Png);
		SystemIcons.Warning.ToBitmap().Save(@"icons\Warning.png", ImageFormat.Png);
		SystemIcons.WinLogo.ToBitmap().Save(@"icons\WinLogo.png", ImageFormat.Png);

	}

}

