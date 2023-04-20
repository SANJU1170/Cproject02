pipeline {
          agent {label 'slave1'}
		stages {
			stage ('BUILD'){
				parallel {
				
			 stage ('BUILD-01-JOB-01'){
				steps {
					echo "This is Build stage-01"
					sh "https://github.com/SANJU1170/C-Projects.git"
					sh 'make ABC.exe'
					  }
				   }  	
			stage ('BUILD-02-JOB-02'){
					steps {
					echo "This is BUILD stage-02"
					sh "https://github.com/SANJU1170/Cproject02.git"
					sh 'make SUM.exe'
					  }
					 } 	
				}
	      }
		 }
	   }
