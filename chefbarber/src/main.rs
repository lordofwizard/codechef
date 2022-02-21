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
    let t : u32;
    input!(t);
    for _ in 0..t{
        let peeps : i32;
        let time : i32;

        input!(peeps time);
        println!("{}",peeps*time);
    }
}
