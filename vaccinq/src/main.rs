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
fn main(){
    let t : u32;
    input!(t);

    for i in 0..t{
        let (mut n,mut p,mut x,mut y) = (0,0,0,0);
        input!(n p x y);
        //let mut arr : Vec<u8> = [].to_vec();
        let mut time : i32 = 0;
        let mut line = String::new();
        std::io::stdin().read_line(&mut line).expect("input");
        let arr = line.trim().split(' ').flat_map(str::parse::<u8>).collect::<Vec<_>>();

        for z in 0..p{
            if *arr.get(z).expect("This doesn't actually exists mf") == 1 as u8{
                time = time + y;
            }
            else if *arr.get(z).expect("This doesn't exists mf") == 0 as u8{
                time = time + x;
            }
        }
        println!("{}",time);
    }
}