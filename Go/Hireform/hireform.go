// The above Go code prompts the user to enter values for various fields in a HireForm struct, converts
// the user input to the appropriate field types using JSON, and then prints out the entered data.
//! NOTWORKING COMPLETELY

package main

import (
	"fmt"
	"reflect"
	"encoding/json"
)

type HireForm struct {
	Name string
	NastName string
	Sex string
	Age int
	MaritalStatus string
	degree string
	FieldOfStudy string
	SpecialDiseases string
	SpecializedProfession string
	WorkExpreince string
}

func main() {
	var form HireForm;
	structType := reflect.TypeOf(form)
	structValue := reflect.ValueOf(&form).Elem()

	for i := 0; i < structType.NumField(); i++ {
		field := structValue.Field(i)
		fieldType := field.Type()

		fmt.Printf("Enter a value for %s (%s): ", structType.Field(i).Name, fieldType)

		// Read user input as a string
		var userInput string
		_, err := fmt.Scan(&userInput)
		if err != nil {
			fmt.Printf("Error reading input: %v\n", err)
			return
		}

		// Convert and set the field using JSON
		jsonValue := fmt.Sprintf(`"%s"`, userInput) // Enclose input in double quotes for JSON
		fieldValue := reflect.New(fieldType).Interface()
		if err := json.Unmarshal([]byte(jsonValue), fieldValue); err != nil {
			fmt.Printf("Error parsing input: %v\n", err)
			return
		}
		field.Set(reflect.ValueOf(fieldValue).Elem())
	}

	fmt.Println("Data entered:")
	fmt.Printf("%+v\n", form)
}