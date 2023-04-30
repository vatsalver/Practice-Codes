import React , {useState} from 'react';


export default function TextForm(props) {
  const handleUPClick = ()=>{
    let newText = text.toUpperCase();
    setText(newText)
    props.showAlert("Converted to Uppercase !" , "success");
  }  
  const handleLPClick = ()=>{
    let newText = text.toLowerCase();
    setText(newText)
    props.showAlert("Converted to Lowercase !" , "success");
  }  
  const handleClearClick = ()=>{
    let newText ="";
    setText(newText)
  }  
  
  const handleOnChange = (event)=>{
    setText(event.target.value)
  }
  const [text, setText] = useState('')
  
  return (
    <>
    <div className='container' style={{color:props.mode==='dark'?'white':'black'}}>
      <h1>{props.heading}</h1>
      <div className="mb-3">
      <textarea className="form-control" value={text} onChange={handleOnChange} style={{backgroundColor:props.mode==='light'?'white':'grey' ,color:props.mode==='dark'?'white':'black'}} id="exampleFormControlTextarea1" rows="6"></textarea>
      </div>
      <button className="btn btn-primary mx-2" onClick={handleUPClick}>Convert To UPPERCASE</button>
      <button className="btn btn-primary mx-2" onClick={handleLPClick}>Convert To LOWERCASE</button>
      <button className="btn btn-primary mx-2" onClick={handleClearClick}>Clear Text</button>
    </div>
    <div className='container my-3' style={{color:props.mode==='dark'?'white':'black'}}>
     <h1>Your Text Summary</h1>
     <p>{text.split(" ").length} words and {text.length} characters</p>
     <p>{0.003* text.split(" ").length} Minutes to Read </p>
     <h2>Preview</h2>
     <p>{text.length>0?text:"Enter Something to Preview it here"}</p>
    </div>
    </>
  );
}
