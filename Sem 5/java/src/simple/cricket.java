class CricketPlayer { 
    String name; 
    int no_of_innings; 
    int no_of_times_notout; 
    int totalruns; 
    double bat_avg; 
 
    public CricketPlayer(String name, int no_of_innings, int no_of_times_notout, int totalruns) { 
        this.name = name; 
        this.no_of_innings = no_of_innings; 
        this.no_of_times_notout = no_of_times_notout; 
        this.totalruns = totalruns; 
        this.bat_avg = avg(); 
    } 
 
    public double avg() { 
        return (double) totalruns / (no_of_innings - no_of_times_notout); 
    } 
 
    public static void sort(CricketPlayer[] players) { 
        for (int i = 0; i < players.length - 1; i++) { 
            for (int j = 0; j < players.length - i - 1; j++) { 
                if (players[j].bat_avg < players[j + 1].bat_avg) { 
                    CricketPlayer temp = players[j]; 
                    players[j] = players[j + 1]; 
                    players[j + 1] = temp; 
                } 
            } 
        } 
    } 
 
    public void display() { 
        System.out.println("Name: " + name + ", Batting Average: " + bat_avg); 
    } 
} 
 
public class cricket { 
    public static void main(String[] args) { 
        CricketPlayer[] players = new CricketPlayer[3]; 
        players[0] = new CricketPlayer("John", 50, 10, 4000); 
        players[1] = new CricketPlayer("David", 60, 15, 4500); 
        players[2] = new CricketPlayer("Sam", 70, 20, 5000); 
 
        CricketPlayer.sort(players); 
 
        for (CricketPlayer player : players) { 
            player.display(); 
        } 
    } 
}