package com.example.ageinminutes

import android.app.DatePickerDialog
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.TextView
import android.widget.Toast
import java.text.SimpleDateFormat
import java.util.*

class MainActivity : AppCompatActivity() {
    private var SD : TextView? = null
    private var SDinM:TextView? = null
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val datePicker : Button = findViewById(R.id.datepicker)
        SD=findViewById(R.id.SD)
        SDinM=findViewById(R.id.SDinM)
        datePicker.setOnClickListener {
            datepik()
        }
    }
    fun datepik(){
        val calendar = Calendar.getInstance()
        val year = calendar.get(Calendar.YEAR)
        val month = calendar.get(Calendar.MONTH)
        val day = calendar.get(Calendar.DAY_OF_MONTH)
        DatePickerDialog(this,
          {view , Selectedyear , Selectedmonth , SelecteddayofMonth ->
              Toast.makeText(this,"Year was $Selectedyear,Month was ${Selectedmonth+1}" +
                      ",Day was $SelecteddayofMonth" ,Toast.LENGTH_LONG).show()
              val selectedDate = "$SelecteddayofMonth.${Selectedmonth+1}.$Selectedyear"
              SD?.text=selectedDate
              val sdf = SimpleDateFormat("dd.MM.yyyy", Locale.ENGLISH)
              val thedate = sdf.parse(selectedDate)
              val SDinMin = thedate.time / 60000
              val currentD = sdf.parse(sdf.format(System.currentTimeMillis()))
              val CinM = currentD.time / 60000
              val difference = CinM - SDinMin
              SDinM?.text=difference.toString()
          },
            year,
            month,
            day
            ).show()
    }
}