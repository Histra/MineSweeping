import java.awt.Color;
import java.awt.Font;
import java.awt.Frame;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.io.InputStreamReader;
import java.io.Reader;
import java.util.Enumeration;
import java.util.HashSet;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.UIManager;
import javax.swing.plaf.FontUIResource;

public class MainFunction {

	public static Font font;
	static GridLayout gl;
	static JFrame frame;
	static int success = 0;
	static int size = 9;//22
	static int num = 10;//99
	static JButton[][] buttons;
	HashSet<JButton>set;
	static Map m;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		success = 0;
		font = new Font("Consolas", Font.PLAIN, 15);
		InitGlobalFont();
		int interval = 0;
		gl = new GridLayout(size, size, interval, interval);
		m = new Map(size, size, num);
		m.showMap();
		
		frame = new JFrame("Demo1.0"); frame.setFont(font);
		frame.setBounds(100, 100, 400, 400);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		JPanel panel = new JPanel();
		frame.add(panel);
		
		addPanel(panel, m);
		frame.setVisible(true);
		
	}
	private static void addPanel(JPanel panel, Map m) {
		// TODO Auto-generated method stub
		buttons = new JButton[m.length][m.width];
		panel.setLayout(gl);
		for (int i = 0; i < m.map.length; i ++) {
			for (int j = 0; j < m.map.length; j ++) {
				//JButton b = new JButton(m.map[i][j] + "");
				JButton b = new JButton(); b.setFont(font);
				panel.add(b);
				buttons[i][j] = b;
				AddListener(b, m.map[i][j], m.record[i][j], i, j);
			}
		}
	}
	private static void AddListener(JButton b, int value, int re, int i, int j) {
		// TODO Auto-generated method stub
		
		b.addMouseListener(new MouseListener() {
			int right = 0;
			boolean f = true;
			HashSet<JButton>set = new HashSet<JButton>();
			@Override
			public void mouseClicked(MouseEvent e) {
				// TODO Auto-generated method stub
				//b.setText(value + "");
//				ImageIcon lei = new ImageIcon(System.getProperty("user.dir") + "/src/Pic/lei.png");
//				ImageIcon redFlag = new ImageIcon(System.getProperty("user.dir") + "/src/Pic/redFlag.png");
//				ImageIcon unsure = new ImageIcon(System.getProperty("user.dir") + "/src/Pic/unsure.png");
				//ImageIcon lei = new ImageIcon(getClass().getResource("/pic/lei.png")); 
				ImageIcon redFlag = new ImageIcon(System.getProperty("user.dir") + "\\src\\Pic\\redFlag.png");
				ImageIcon unsure = new ImageIcon(System.getProperty("user.dir") + "\\src\\Pic\\unsure.png");
				//ImageIcon empty = new ImageIcon(System.getProperty("user.dir") + "/src/Pic/empty.png");
				//ImageIcon num1 = new ImageIcon(System.getProperty("user.dir") + "/src/Pic/1.png");
				//ImageIcon num2 = new ImageIcon(System.getProperty("user.dir") + "/src/Pic/2.png");
				//System.out.println(System.getProperty("user.dir"));//user.dir指定了当前的路径
				//System.out.println(getClass().getResource("\\src\\Pic\\lei.png"));
				if (e.getButton() == e.BUTTON1 && f) {
					if (value == 1) {
						//b.setIcon(lei);
						b.setText("×");
						Failed();					
					}
					else {
						if (set.contains(b)) {
							
						}else {
							set.add(b);
							success++;
							if (success % 10 == 0)
								System.out.println(success);
							else 
								System.out.print(success + " ");
							if (success == size * size - num) {
								Succeed();
							}
						}
						if (re == 0) {
							//b.setIcon(empty);
							b.setBackground(Color.WHITE);
							findEmpty(i, j, set);
						}else {
							b.setBackground(Color.WHITE);
							b.setText(re + "");
							//b.setIcon(num2);
						}
					}
				}else if (e.getButton() == e.BUTTON3) {
					right ++;
					if (right == 3) {
						right = 0;
						b.setIcon(null);
						//b.setText("");
						f = true;
					}
					if (right == 1) {
						b.setIcon(redFlag);
						//b.setText("*");
						f = false;
					}
					if (right == 2) {
						b.setIcon(unsure);
						//b.setText("?");
						f = false;
					}
				}

			}

			@Override
			public void mousePressed(MouseEvent e) {
				// TODO Auto-generated method stub
				
			}

			@Override
			public void mouseReleased(MouseEvent e) {
				// TODO Auto-generated method stub
				
			}

			@Override
			public void mouseEntered(MouseEvent e) {
				// TODO Auto-generated method stub
				
			}

			@Override
			public void mouseExited(MouseEvent e) {
				// TODO Auto-generated method stub
				
			}
			
		});
	}
	private static int[] dx = {-1, -1, -1, 0, 1, 1, 1, 0};
	private static int[] dy = {-1, 0, 1, 1, 1, 0, -1, -1};
	protected static void findEmpty(int x, int y, HashSet<JButton>set) {
		// TODO Auto-generated method stub
		buttons[x][y].setBackground(Color.WHITE);
		if (set.contains(buttons[x][y])) {
			
		}else {
			success ++;
			if (success % 10 == 0)
				System.out.println(success);
			else 
				System.out.print(success + " ");
			if (success == size * size - num) {
				Succeed();
			}
		}
		if (m.record[x][y] != 0) {
			buttons[x][y].setText(m.record[x][y] + "");
			return ;
		}
		for (int i = 0; i < 8; i ++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < m.length && ny >= 0 && ny < m.width) {
				if (m.map[nx][ny] == 0 && buttons[nx][ny].getBackground() != Color.WHITE) {
					//System.out.println(nx + "  " + ny);
					findEmpty(nx, ny, set);
				}
			}
		}
		
	}
	protected static void Succeed() {
		// TODO Auto-generated method stub
		JButton yes = new JButton("New game.");yes.setFont(font);
		JButton no = new JButton("Exit game.");no.setFont(font);
		JButton[] b = new JButton[2];
		b[0] = yes; b[1] = no;
		int temp = 1;
		yes.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				frame.dispose();
				MainFunction.main(null);
			}
			
		});
		no.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				System.exit(0);
			}
			
		});
		JOptionPane.showOptionDialog(frame, "Please choose:", "Good Job!", 1, 2, null, b, b[0]);
		frame.dispose();
		MainFunction.main(null);
	}
	protected static void Failed() {
		JButton yes = new JButton("Try again!");yes.setFont(font);
		JButton no = new JButton("Exit game.");no.setFont(font);
		JButton[] b = new JButton[2];
		b[0] = yes; b[1] = no;
		int temp = 1;
		yes.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				frame.dispose();
				MainFunction.main(null);
			}
			
		});
		no.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				System.exit(0);
			}
			
		});
		JOptionPane.showOptionDialog(frame, "Please choose:", "Failed", 1, 2, null, b, b[0]);
		frame.dispose();
		MainFunction.main(null);
	}

	public static void InitGlobalFont() {
	    FontUIResource fontRes = new FontUIResource(font);
	    for (Enumeration<Object> keys = UIManager.getDefaults().keys();
	    		keys.hasMoreElements(); ) {
	    	Object key = keys.nextElement();
	    	Object value = UIManager.get(key);
	    	if (value instanceof FontUIResource) {
	    		UIManager.put(key, fontRes);
	    	}
	    }
	}
}
