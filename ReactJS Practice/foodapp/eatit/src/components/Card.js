import React from 'react';

export default function Card() {
  return (
    <div>
      <div><div className="card mt-3" style={{ "width": "18rem", "maxHeight": "360px" }}>
                <img src="https://th.bing.com/th/id/R.0c7d0a30f5c7a96616dbc84473b3972d?rik=%2f3vN9MPwZ8hJ4Q&riu=http%3a%2f%2fwww.cookforindia.com%2fwp-content%2fuploads%2f2016%2f08%2fPaneer-Tikka-_LR.jpg&ehk=rYOvgxOkr7wcmh3rwou4J5R9VCRR56wIpZFwWLqoAqw%3d&risl=&pid=ImgRaw&r=0" className="card-img-top" alt="..." />
                <div className="card-body">
                    <h5 className="card-title">Card title</h5>
                    <p className="card-text">Hello Hi Bye</p>
                    <div className='container w-100'>
                    <select className='m-2 h-100  bg-warning rounded'>
                            {Array.from(Array(8), (e,i)=>{
                                return (
                                     <option key = { i+ 1} value = { i+ 1}> {i + 1} </option>
                                )
                      })}
                    </select>
                <select className='m-2 h-100  bg-warning rounded'>
                   <option value="half">Half</option>
                   <option value="full">Full</option>
                </select>
                <div className='d-inline h-100 fs-5'>
                    Total Price
                </div>
                </div>
            </div>
            </div>
        </div >
    </div>
  );
}
