package legacycode.chapter03;

public class ArtR56Display implements Display {

	private String line;
	/* (non-Javadoc)
	 * @see legacycode.chapter03.Display#showLine(java.lang.String)
	 */
	@Override
	public void showLine(String line) {
		this.line = line;
		//‰½‚©‚µ‚ç“n‚³‚ê‚½•¶š—ñ‚ğ•\¦‚·‚éB
		System.out.println(this.line);
	}
}
