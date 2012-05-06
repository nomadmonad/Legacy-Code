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
		//�o�[�R�[�h��ǂݎ��A�i���̖��O�Ɖ��i��\������
		String itemLine = item.getName()
				+ " " + asDisplayText(item.getPrice());
		
		//ArtR56Display����C���^�[�t�F�[�X�𒊏o�����̂ŁA�C���X�^���X�ϐ��̌^��Display�^�ɕύX����B
		display.showLine(itemLine);
	}
	
	public String asDisplayText(double price) {
		return Double.toString(price);
	}
}
