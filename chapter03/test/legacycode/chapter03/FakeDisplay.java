package legacycode.chapter03;

public class FakeDisplay implements Display {

	private String lastline = "";
	@Override
	public void showLine(String line) {
		lastline = line;
	}
	
	public String getLastLine() {
		return lastline;
	}

}
