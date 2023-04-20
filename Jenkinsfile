	agent any
		stages {
			stage ('BUILD')
				parallel {
				
			 stage ('BUILD-01-JOB-01'){
				steps {
					echo "This is Build stage-01"
					sh "ABC.exe"
					  }
				   }  	
			stage ('BUILD-02-JOB-02'){
					steps {
					echo "This is BUILD stage-02"
					sh "SUM.exe"
					  }
					 } 	
				}
	      }
		 }
