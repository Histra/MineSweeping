import java.util.HashSet;
import java.util.Random;
import java.util.Set;

public class Map {
	public Map(int length, int width, int num) {
		this.length = length;
		this.width = width;
		this.num = num;
		this.map = createMap();
		this.record = getRecord();
	}
	int length;
	int width;
	int num;
	int[][] map;
	int[][] record;
	
	public int[][] createMap(){
		int[][] map = new int[length][width];
		Random r = new Random();
		Set<Integer> s = new HashSet<Integer>();
		while (s.size() < num){
			int x = r.nextInt(length);
			int y = r.nextInt(width);
			Integer temp = x * 10 + y;	
			if (s.contains(temp))
				continue;
			else {
				s.add(temp);
				map[x][y] = 1;
				//System.out.println("x = " + x + ",y = " + y);
			}	
		}		
		return map;
	}
	
	private static int[] dx = {-1, -1, -1, 0, 1, 1, 1, 0};
	private static int[] dy = {-1, 0, 1, 1, 1, 0, -1, -1};
	private int[][] getRecord() {
		// TODO Auto-generated method stub
		int[][] record = new int[length][width];
		for (int i = 0; i < length; i ++){
			for (int j = 0; j < width; j ++) {
				if (map[i][j] == 1)
					continue;
				for (int k = 0; k < 8; k ++) {
					int ni = i + dx[k];
					int nj = j + dy[k];
					if (ni >= 0 && ni < length && nj >= 0 && nj < width) {
						if (map[ni][nj] == 1) {
							record[i][j] ++;
						}
					}
				}
			}
		}
		return record;
	}
	
	public void showMap() {
		for (int i = 0; i < length; i ++) {
			for (int j = 0; j < width; j ++) {
				System.out.print(map[i][j] + " ");
			}
			System.out.println("");
		}
	}
}
