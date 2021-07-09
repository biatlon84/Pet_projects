package serializable;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
///import java.io.ObjectOutputStream
import java.io.OutputStreamWriter;
import java.net.ServerSocket;
import java.net.Socket;

public class Socketmy {

	private static Socket clientSocket; // сокет для общения
	private static ServerSocket server; // серверсокет
	private static BufferedReader inn; // поток чтения из сокета
	private static BufferedWriter outn; // поток записи в сокет

	public void Soccc(String ss) {
		try {
			try {
				// System.out.println("Сервер err!");
				server = new ServerSocket(7728); // серверсокет прослушивает порт 4004
				System.out.println("Сервер запущен!"); // хорошо бы серверу
				// объявить о своем запуске
				clientSocket = server.accept(); // accept() будет ждать пока
				// кто-нибудь не захочет подключиться
				try { // установив связь и воссоздав сокет для общения с клиентом можно перейти
						// к созданию потоков ввода/вывода.
						// теперь мы можем принимать сообщения
					inn = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
					// и отправлять
					outn = new BufferedWriter(new OutputStreamWriter(clientSocket.getOutputStream()));

					// ждём пока клиент что-нибудь нам напишет

					// не долго думая отвечает клиенту
					for (int i = 0; i < 10; i++) {
						Obj ooo = new Obj();
						for (int ui = 0; ui < 91; ui++) {
							ooo.mas[i] = (int) (Math.random() * 91);
						}
						System.out.println("подошёл");
						String word = inn.readLine();
						// outn.write("Привет, это Сервер! Подтверждаю, вы написали : " + word + ss + i
						// + "\n");
						ByteArrayOutputStream covs = new ByteArrayOutputStream(clientSocket.getOutputStream());
						covs.writeObject(ooo);
						covs.flush();
						// outn.flush(); // выталкиваем все из буфера
						System.out.println("При!" + word);
					}
					// System.out.println(word);

				} finally { // в любом случае сокет будет закрыт
					clientSocket.close();
					// потоки тоже хорошо бы закрыть
					// inn.close();
					outn.close();
				}
			} finally {
				System.out.println("Сервер закрыт!");
				server.close();
			}
		} catch (IOException e) {
			System.err.println(e);
		}

	}

	public void sendT(String ss) {

		try {

			outn.write("they wr " + ss + "\n");
			outn.flush();
		} catch (IOException e) {
			System.err.println(e);
		}
	}
}
