#[allow(unused_imports)]
use std::io;
use std::str::FromStr;
fn main() {
    let mut scanner = Scanner::default();
    let t = scanner.next::<u64>();

    //for _ in 0..t{
    //    solve();
   // }
    if (t % 2 == 0) && (t > 2) {
        println!("YES");
    }
    else{
        println!("NO");
    }
}

fn solve(){
    let mut s = Scanner::default();
    let x = s.int();
    if x % 2 == 0 {
        println!("YES");
    }
    else{
        println!("NO");
    }
}

#[derive(Default)]
struct Scanner {
    input: Vec<String>,
}
#[allow(dead_code)]
impl Scanner {
    fn next<T: FromStr>(&mut self) -> T {
        loop {
            if let Some(value) = self.input.pop() {
                return value.parse().ok().expect("Failed at parsing!");
            }
            let mut input = String::new();
            io::stdin()
                .read_line(&mut input)
                .expect("Failed at taking inputs");
            self.input = input
                .trim()
                .split_whitespace()
                .rev()
                .map(String::from)
                .collect();
        }
    }

    fn int(&mut self) -> i64 {
        loop {
            if let Some(value) = self.input.pop() {
                return value.parse().ok().expect("Failed at parsing!");
            }
            let mut input = String::new();
            io::stdin()
                .read_line(&mut input)
                .expect("Failed at taking inputs");
            self.input = input
                .trim()
                .split_whitespace()
                .rev()
                .map(String::from)
                .collect();
        }
    }
}
