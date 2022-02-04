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
    let t : u16;
    input!(t);

    for _i in 0..t{
        let c : i32;
        let g :i32;
        input!(g c);
        let answer : i32 = ((c * c)/(2 * g)) as i32;
        println!("{}",answer);
    }
}
