import Navbar from './componenets/Navbar';
import Footer from './componenets/Footer';
import './App.css';
import Search from './screens/Search';
import SignUP from './screens/SignUP';


function App() {
  return (
    <>
    <Navbar></Navbar>
    <Search></Search>
    <SignUP></SignUP>
    <Footer></Footer>
    </>
  );
}

export default App;
