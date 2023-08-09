: 'Write a menu driven program to create Employee Record.
The Record should contains: Employee Name, Employee Number, and Telephone Number.
The script should be able to delete a record, search and display a specific employee details, sort the record and list the complete record.'

FILE=~/Desktop/SSLab/employee.txt
if test -f "$FILE"; then
  echo "$FILE already exists."
  echo
else
  touch $FILE
fi


#-q : This 
function createRecord() {
  read -p "Enter Employee Name: " ename
  read -p "Enter Employee Number: " eno
  read -p "Enter Telephone Number: " phone
:  'if grep -q "^.*:$eno:.*$"$FILE; then
    echo "Employee with $eno already exists. Cannot create duplicate records."
  else
    echo "$eno:$ename:$phone" >>$FILE
    echo "Employee Record Inserted Successfully!"
  fi'
  if grep -q "^.*:$eno:.*$" $FILE; then
      echo "Employee Number $eno already exists. Cannot create duplicate records."
  else
      echo "$ename:$eno:$phone" >>$FILE
      echo "Employee Record Created successfully!"
  fi
}

#-v : This prints out all the lines that do not matches the pattern
function deleteRecord() {
  read -p "Enter Employee Number to Delete: " eno
  grep -v "^.*:$eno:.*$" $FILE > temp.txt
  mv temp.txt $FILE
  echo "Employee Record Deleted Successfully!"
}

function searchRecord() {
  read -p "Enter Employee Number to Search: " eno
  grep "^.*:$eno:.*$" $FILE
}

function displayRecord() {
  searchRecord
}

function sortRecord() {
  sort -t ':' -k2n $FILE > temp.txt
  mv temp.txt $FILE
  echo "Employee Records Sorted Successfully!"
}

function listRecord() {
  sed 's/:/ /g' $FILE
}

while true
do
  echo "1. Create Employee Record"
  echo "2. Delete Employee Record"
  echo "3. Search Employee Record"
  echo "4. Display Employee Details"
  echo "5. Sort Record"
  echo "6. List All Records"
  echo "7. Exit"
  read -p "Enter your choice (1-7): " choice
  echo

  case $choice in
    "1") createRecord
         ;;

    "2") deleteRecord
         ;;

    "3") searchRecord
         ;;
         
    "4") displayRecord
         ;;                  

    "5") sortRecord
         ;;         

    "6") listRecord
         ;;        

    "7") echo "Exiting..."
         exit
         ;;
    *)   echo "Invalid choice. Please enter a valid choice (1-7): "
    	 ;;
    esac       
    echo
done

