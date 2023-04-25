import PropTypes from 'prop-types';
import './App.css';
import Navbar from './components/Navbar';
import TextForm from './components/TextForm';

function App() {
  return (
    <>
    <Navbar title="Textutils" about="About"/>
    <div className="container my-3">
    <TextForm heading="Enter the text here to annalyze"  />
    </div>
     
    </>
  );
}

export default App;
Navbar.propTypes={title:PropTypes.string,about:PropTypes.string}