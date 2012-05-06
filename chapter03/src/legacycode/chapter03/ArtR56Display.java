package legacycode.chapter03;

public class ArtR56Display implements Display {

	private String line;
	/* (non-Javadoc)
	 * @see legacycode.chapter03.Display#showLine(java.lang.String)
	 */
	@Override
	public void showLine(String line) {
		this.line = line;
		//何かしら渡された文字列を表示する。
		System.out.println(this.line);
	}
}
