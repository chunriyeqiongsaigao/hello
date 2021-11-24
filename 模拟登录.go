package main

import (
	"encoding/base64"
	"encoding/json"
	"fmt"
	"io/ioutil"
	"net/http"
	"strings"

	"github.com/howeyc/gopass"
)

func main() {
	client := &http.Client{}
	type Body struct {
		name     string
		password string
	}
	var name string
	fmt.Print("请输入您的木犀账号:")

	fmt.Scanln(&name)

	fmt.Print("请输入您的木犀密码:")
	paswod, _ := gopass.GetPasswdMasked()

	paswodbas64 := base64.StdEncoding.EncodeToString(paswod)

	body := Body{
		name:     name,
		password: paswodbas64,
	}
	by, _ := json.Marshal(body)

	payload := strings.NewReader(string(by))

	req, _ := http.NewRequest("POST", "http://pass.muxi-tech.xyz/auth/api/signin", payload)

	req.Header.Add("Content-Type", "application/json")

	res, _ := client.Do(req)

	byt, _ := ioutil.ReadAll(res.Body)

	content := string(byt)

	fmt.Println(content)
}
