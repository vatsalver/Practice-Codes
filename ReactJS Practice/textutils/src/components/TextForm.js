import React , {useState} from 'react';


export default function TextForm(props) {
  
  const handleUPClick = ()=>{
    let newText = text.toUpperCase();
    setText(newText)
    props.showAlert("Converted to Uppercase !" , "Success");
  }  
  const handleLPClick = ()=>{
    let newText = text.toLowerCase();
    setText(newText)
    props.showAlert("Converted to Lowercase !" , "Success");
  }  
  const handleClearClick = ()=>{
    let newText ="";
    setText(newText)
    props.showAlert("Text Cleared!", "Success")
  }  
  const handleCopy = ()=>{
    navigator.clipboard.writeText(text);
    props.showAlert("Copied to Clipboard!","Success");
  }
  const handleExtraSpaces = () =>{
    let newText = text.split(/[ ]+/);
    setText(newText.join(" "));
    props.showAlert("Extra Spaces Removed!","Success")
  }
  const handleOnChange = (event)=>{
    setText(event.target.value)
  }
  const [text, setText] = useState('')
  
  return (
    <>
    <div className='container' style={{color: props.mode==='dark'?'white':'#042743'}}>
      <h1>{props.heading}</h1>
      <div className="mb-3">
      <textarea className="form-control" value={text} onChange={handleOnChange} style={{backgroundColor: props.mode==='dark'?'#13466e':'white', color: props.mode==='dark'?'white':'#042743'}} id="myBox" rows="6"></textarea>
      </div>
      <button disabled={text.length===0} className="btn btn-primary mx-2 my-1" onClick={handleUPClick}>Convert To UPPERCASE</button>
      <button disabled={text.length===0} className="btn btn-primary mx-2 my-1" onClick={handleLPClick}>Convert To LOWERCASE</button>
      <button disabled={text.length===0} className="btn btn-primary mx-2 my-1" onClick={handleClearClick}>Clear Text</button>
      <button disabled={text.length===0} className="btn btn-primary mx-2 my-1" onClick={handleCopy}>Copy Text</button>
      <button disabled={text.length===0} className="btn btn-primary mx-2 my-1" onClick={handleExtraSpaces}>Remove Extra Space</button>
    </div>
    <div className='container my-3' style={{color:props.mode==='dark'?'white':'black'}}>
     <h1>Your Text Summary</h1>
     <p>{text.split(/\s+/).filter((element)=>{return element.length!==0}).length} words and {text.length} characters</p>
     <p>{0.005* text.split(" ").filter((element)=>{return element.length!==0}).length} Minutes to Read </p>
     <h2>Preview</h2>
     <p>{text.length>0?text:"Nothing To Preview!"}</p>
    </div>
    </>
  );
}
