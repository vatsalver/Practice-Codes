import React from 'react';

function Search() {
  return (
    <div className='container my-5 '>
      <div className="mb-3">
  <label for="formGroupExampleInput" class="form-label">Company Name</label>
  <input type="text" class="form-control" id="formGroupExampleInput" placeholder="Example input placeholder"/>
</div>
<div className="mb-3">
  <label for="formGroupExampleInput2" class="form-label">Owner Name</label>
  <input type="text" class="form-control" id="formGroupExampleInput2" placeholder="Another input placeholder"/>
</div>
<button type="button" class="btn btn-success">Search</button>
    </div>
  );
}

export default Search;
