class Continent { 
    String name; 
    public Continent(String name) { 
        this.name = name; 
    } 
    public void displayContinent() { 
        System.out.println("Continent: " + name); 
    } 
} 
 
class Country extends Continent { 
    String countryName; 
    public Country(String continentName, String countryName) { 
        super(continentName); 
        this.countryName = countryName; 
    } 
    public void displayCountry() { 
        System.out.println("Country: " + countryName); 
    } 
} 
 
class State extends Country { 
    String stateName; 
    public State(String continentName, String countryName, String stateName) { 
        super(continentName, countryName); 
        this.stateName = stateName; 
    } 
    public void displayDetails() { 
        displayContinent(); 
        displayCountry(); 
        System.out.println("State: " + stateName); 
    } 
} 
 
public class continent { 
    public static void main(String[] args) { 
        State state = new State("North America", "United States", "California"); 
        state.displayDetails(); 
    } 
}