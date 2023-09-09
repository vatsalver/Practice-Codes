import React from 'react';

export default function Footer() {
  return (
    <div style={{
        position: "fixed",
        left: 10,
        bottom: 0,
        right: 0,
      }}>
      <footer className="d-flex flex-wrap justify-content-between align-items-center py-3 my-4 border-top">
    <div className="col-md-4 d-flex align-items-center">
      {/* <Link to="/" className="mb-3 me-2 mb-md-0 text-muted text-decoration-none lh-1">
        
  </Link> */}
      <span className="text-muted">© 2023 Verma & Associates</span>
    </div>

    
  </footer>
    </div>
  );
}
