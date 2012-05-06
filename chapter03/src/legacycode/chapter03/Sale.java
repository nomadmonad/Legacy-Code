package legacycode.chapter03;

public class Sale {

	private ArtR56Display display;
	public void scan(String barcode) {
		//バーコードを読み取り、品物の名前と価格を表示する
		//表示する部分をArtR56Displayに委譲する
		display.showLine(barcode);
	}
}
