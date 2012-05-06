package legacycode.chapter03;

public class Sale {

	private Display display;
	private SaleItem item;
	
	public Sale() {
		this.item = new SaleItem();
		item.setName("Milk");
		item.setPrice(3.99);
	}
	public Sale(Display display) {
		this.display = display;
	}
	
	public void scan(String barcode) {
		//バーコードを読み取り、品物の名前と価格を表示する
		String itemLine = item.getName()
				+ " " + asDisplayText(item.getPrice());
		
		//ArtR56Displayからインターフェースを抽出したので、インスタンス変数の型をDisplay型に変更する。
		display.showLine(itemLine);
	}
	
	public String asDisplayText(double price) {
		return Double.toString(price);
	}
}
