package legacycode.chapter03;

public class Sale {

	private Display display;
	public void scan(String barcode) {
		//�o�[�R�[�h��ǂݎ��A�i���̖��O�Ɖ��i��\������
		//ArtR56Display����C���^�[�t�F�[�X�𒊏o�����̂ŁA�C���X�^���X�ϐ��̌^��Display�^�ɕύX����B
		display.showLine(barcode);
	}
	
	public String asDisplayText(int price) {
		return Integer.toString(price);
	}
}
