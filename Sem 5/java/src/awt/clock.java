class clock { 
    int hours, minutes, seconds; 
 
    public clock(int hours, int minutes, int seconds) { 
         if (isValid(hours, minutes, seconds)) { 
            this.hours = hours; 
            this.minutes = minutes; 
            this.seconds = seconds; 
        } else { 
            System.out.println("Invalid Time"); 
        } 
    } 
 
    private boolean isValid(int hours, int minutes, int seconds) { 
        return (hours >= 0 && hours < 24) && (minutes >= 0 && minutes < 60) && (seconds >= 0 
&& seconds < 60); 
    } 
 
    public void displayTimeInAMPM() { 
        String period = (hours < 12) ? "AM" : "PM"; 
        int displayHours = (hours % 12 == 0) ? 12 : hours % 12; 
        System.out.println("Time: " + displayHours + ":" + minutes + ":" + seconds + " " + period); 
    } 
 
    public static void main(String[] args) { 
        clock clock = new clock(14, 45, 30); 
        clock.displayTimeInAMPM(); 
    } 
} 