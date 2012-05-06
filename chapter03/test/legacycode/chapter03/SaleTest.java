package legacycode.chapter03;

import static org.junit.Assert.*;

import org.junit.Test;

public class SaleTest {

	@Test
	public void testDisplayAnItem() {
		FakeDisplay display = new FakeDisplay();
		Sale sale = new Sale(display);
		
		sale.scan("1");
		String actual = display.getLastLine();
		String expected = "Milk $3.99";
		assertEquals(expected, actual);
		fail("Not yet implemented");
	}

}
