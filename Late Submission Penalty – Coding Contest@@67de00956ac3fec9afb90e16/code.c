int calculatePenalty(int subDay, int subMonth, int subYear, int dueDay,int dueMonth, int dueYear){
    if(subMonth==dueMonth && subYear==dueYear){
        int diff= subDay-dueDay;
        return diff*10;
    }
    else if(subMonth!=dueMonth && subYear==dueYear){
        int diff= subMonth-dueMonth;
        return diff*200;
    }
    else if(subYear!=dueYear){
        return 5000;
    }
}