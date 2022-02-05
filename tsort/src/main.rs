
macro_rules! input {
    ($($var:ident)*) => {
        let mut buf = String::new();
        std::io::stdin().read_line(&mut buf).unwrap();
        let mut words = buf.split_whitespace();
        $(
            $var = words.next().unwrap().parse().unwrap();
        )*
    }
}


fn main() {
    let t: i32 ;
    input!(t);
    
    let mut arr = vec!();
    for itr in 0..t{
        let num : i32;
        input!(num);
        arr.push(num);
    }
    /*for i in 0..t as usize{
        for j in i + 1 .. t as usize{
            if arr[i] > arr[j]{
                let a : i32 = arr[i];
                arr[i] =  arr[j];
                arr[j] = a;
            }
        }
    }*/
    //println!("just a re {:?}" , &arr);
    arr.sort();
    for element in &arr{
        println!("{}",element);
    }
}
