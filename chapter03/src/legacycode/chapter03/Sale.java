package legacycode.chapter03;

public class Sale {

	private ArtR56Display display;
	public void scan(String barcode) {
		//�o�[�R�[�h��ǂݎ��A�i���̖��O�Ɖ��i��\������
		//�\�����镔����ArtR56Display�ɈϏ�����
		display.showLine(barcode);
	}
}
