import React from 'react';

export default function TextForm(props) {
  return (
    <div>
      <h1>{props.heading}</h1>
      <div className="mb-3">
      <textarea className="form-control" id="exampleFormControlTextarea1" rows="6"></textarea>
      </div>
      <button className="btn btn-primary">Convert To UPPERCASE</button>
    </div>
  );
}
