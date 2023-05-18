import React, {useState} from 'react';
import { useNavigate } from 'react-router-dom';
import { preview } from '../assets';
import {getRandomPrompt} from '../utils'
import {FormField, Loader} from '../components'
export default function CreatePost() {
  const navigate = useNavigate();
  const [form, setForm] = useState({
      name: '',
      prompt: '',
      photo: '',
  });
  const [generatingImg, setgeneratingImg] = useState(false);
  const [loading, setloading] = useState(false);
  const handleSubmit =() =>{

  }
  const handleChange =(e) =>{

  }
  const handleSurpriseMe =()=>{

  }
  return (
    <section className='max-w-7xl mx-auto'>
      <div>
        <h1 className='font-extrabold text-[#222328] text-[32px]'>Create</h1>
        <p className='mt-2 text-[#666e75] text-[17px] max-w [500ox]'>Create Imaginative and visually stunning images through DALL-E AI and share them with the community</p>
      </div>
      <form className='mt-16 max-w-3xl' onSubmit={handleSubmit} >
         <div className='flex flex-col gap-5'>
          <FormField 
           labelName="Your Name"
           type="text"
           name="prompt"
           placeholder="3D render of a cute tropical fish in an aquarium on a dark blue background, digital art"
           value={form.prompt}
           handleChange={handleChange}
           isSurpriseMe
           handleSurpriseMe ={handleSurpriseMe} 
          />
         </div>
       </form> 
    </section>
  );
}

