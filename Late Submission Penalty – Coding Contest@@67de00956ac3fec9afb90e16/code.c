int calculatePenalty(int subDay, int subMonth, int subYear, int dueDay,int dueMonth, int dueYear){
    if(subMonth==dueMonth && subYear==dueYear){
        int diff= subDay-dueDay;
        if(diff>0){
        return diff*10;
        }
        else{
            return 0;
        }
    }
    else if(subMonth!=dueMonth && subYear==dueYear){
        int diff= subMonth-dueMonth;
        if(diff>0){
        return diff*200;
        }
        else{
            return 0;
        }
    }
    else if(subYear!=dueYear){
        int diff= subYear-dueYear;
        if(diff>0){
        return 5000;
        }
        else{
            return 0;
        }
    }
}