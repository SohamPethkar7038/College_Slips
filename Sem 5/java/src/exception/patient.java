class CovidException extends Exception { 
    public CovidException(String message) { 
        super(message); 
    } 
} 
 
class Patient { 
    String patient_name; 
    int patient_age; 
    int patient_oxy_level; 
    int patient_HRCT_report; 
 
    public Patient(String name, int age, int oxy_level, int HRCT_report) { 
        this.patient_name = name; 
        this.patient_age = age; 
        this.patient_oxy_level = oxy_level; 
        this.patient_HRCT_report = HRCT_report; 
    } 
 
    public void checkHealth() throws CovidException { 
        if (patient_oxy_level < 95 && patient_HRCT_report > 10) { 
            throw new CovidException("Patient is Covid Positive(+) and Needs to be Hospitalized"); 
        } else { 
            System.out.println("Patient Information: "); 
            System.out.println("Name: " + patient_name + ", Age: " + patient_age); 
            System.out.println("Oxygen Level: " + patient_oxy_level + ", HRCT Report: " + 
patient_HRCT_report); 
        } 
    } 
} 
 
public class patient { 
    public static void main(String[] args) { 
        Patient p1 = new Patient("John Doe", 45, 90, 12); 
 
        try { 
            p1.checkHealth(); 
        } catch (CovidException e) { 
            System.out.println(e.getMessage()); 
        } 
    } 
} 
 