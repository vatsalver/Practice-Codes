import PropTypes from 'prop-types';
import './App.css';
import Navbar from './components/Navbar';
import TextForm from './components/TextForm';
import React,{ useState } from 'react';
import About from './components/About'
import Alert from './components/Alert';
import {BrowserRouter as Main,Route,Routes} from 'react-router-dom';
import ErrorPage from './components/Errorpage';



function App() {
  const [mode, setmode] = useState('light');
  const [alert, setAlert] = useState(null);

  const showAlert = (message , type)=>{
    setAlert({
    msg: message ,
    type: type}
  )}
  setTimeout(() => {
     setAlert(null)
  }, 3000);

  const togglemode = ()=>{
    if (mode==='light'){
      setmode('dark')
      document.body.style.backgroundColor = '#040e31'  
      showAlert("Dark mode has been enabled" ,"success")
    }
    else{
      setmode ('light')
      document.body.style.backgroundColor = 'white'
      showAlert("Light mode has been enabled" ,"success")
    }
  }
  return (
    <>
    <Main>
    <Navbar title="Textutils" mode={mode} about="About" togglemode={togglemode}/>
    <Alert alert={alert} />
    <div className="container my-3">
    <Routes>
      <Route exact path='/'
      element={
       <TextForm showAlert={showAlert} mode={mode} heading="Enter the text here to annalyze"  /> 
      }
      />
      <Route exact path='/About'
      element={
      <About mode={mode}/>
      } />
      <Route path='*'
      errorelement={
      <ErrorPage/>
      } />
    </Routes>
    </div>
    </Main>
    </>
  );
}

export default App;
Navbar.propTypes={title:PropTypes.string,about:PropTypes.string}