
public class problem_001 {

	public static void main(String[] args) {
		System.out.println(solution(1000));
	}
	
	public static int solution(int m) {
		int n = 0;
		for(int i = 0; i < m; i++) {
			if(i % 3 == 0 | i % 5 == 0) {
				n += i;
			}
		}
		return n;
	}
}
