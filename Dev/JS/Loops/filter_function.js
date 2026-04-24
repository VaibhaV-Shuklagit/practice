const coding = ["js", "ruby", "java", "python", "cpp"]


const values = coding.forEach( (item) => { // forEach loops don't return anything 
    console.log(item);
    return item
} )

console.log(values); // that's why it will show undefined

const myNums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// const newNums = myNums.filter( (num) => num > 4)// filter function can return the values  
// Here we used Implicit return so It will return directly the values
const newNums = []

myNums.forEach( (num) => { // this is how we can use for each loop to return values Indirectly 
    if (num > 4) { // it is not returning anything but we used more functions to store the values in an array then using that array for further use
        newNums.push(num)
    }
} )

console.log(newNums);


const books = [
    { title: 'Book One', genre: 'Fiction', publish: 1981, edition: 2004 },
    { title: 'Book Two', genre: 'Non-Fiction', publish: 1992, edition: 2008 },
    { title: 'Book Three', genre: 'History', publish: 1999, edition: 2007 },
    { title: 'Book Four', genre: 'Non-Fiction', publish: 1989, edition: 2010 },
    { title: 'Book Five', genre: 'Science', publish: 2009, edition: 2014 },
    { title: 'Book Six', genre: 'Fiction', publish: 1987, edition: 2010 },
    { title: 'Book Seven', genre: 'History', publish: 1986, edition: 1996 },
    { title: 'Book Eight', genre: 'Science', publish: 2011, edition: 2016 },
    { title: 'Book Nine', genre: 'Non-Fiction', publish: 1981, edition: 1989 },
  ];

  let userBooks = books.filter( (bk) => bk.genre === 'History')

  userBooks = books.filter( (bk,idx,arr) => { 
    return bk.publish >= 1995 && bk.genre === "History"
})
  console.log(userBooks);