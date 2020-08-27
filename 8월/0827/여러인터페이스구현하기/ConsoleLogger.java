package 여러인터페이스구현하기;

import java.util.ArrayList;

public final class ConsoleLogger implements ILoggerable, ISavable{
	private ArrayList<String> logs = new ArrayList<String>();
	
	public void log(String message) {
		logs.add(message);
		System.out.println(message);
	}
	
	public void save(String filename) {
		// 파일에 로그를 저장한다.
	}
}

ConsoleLogger logger = new ConsoleLogger();
program.processData(data, logger);

public void processData(byte[] data, ILoggable logger) {
	if(data[0] != 'P' || data[1] != 'O') {
		logger.log("wrong file signature");
		return;
	}
}