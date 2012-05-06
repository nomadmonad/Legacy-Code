package legacycode.chapter03;

public class Sale {

	private Display display;
	public void scan(String barcode) {
		//バーコードを読み取り、品物の名前と価格を表示する
		//ArtR56Displayからインターフェースを抽出したので、インスタンス変数の型をDisplay型に変更する。
		display.showLine(barcode);
	}
	
	public String asDisplayText(int price) {
		return Integer.toString(price);
	}
}
