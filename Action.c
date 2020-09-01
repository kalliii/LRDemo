Action()
{

	
	lr_output_message("%s",lr_eval_string("Random number is : {p_RanNumber}"));
	//lr_output_message("%s",lr_eval_string("Random number is : {p_RanNumber}"));
	lr_output_message("%s",lr_eval_string("username is : {username}"));
	lr_output_message("%s",lr_eval_string("card type is : {NewParam_1}"));
	
	return 0;
	
	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		
		LAST);

	
/*Correlation comment - Do not change!  Original value='REPTILES' Name ='c_categoryId' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=c_categoryId",
		"RegExp=categoryId=(.*?)\"><img\\ src",
		"Ordinal=3",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/Catalog.action*",
		LAST);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
//

/*Correlation comment - Do not change!  Original value='XG2hxAnvrAbzBBupKr5fs5hXO-42Fkp2HlH3yYPfcbMysN2IHorSVxDpc374l1W8N-0le8t9FlWIAdslT68G49R_0KL4OuiSruiGsOtDBE0=' Name ='c_sourcePage' Type ='Manual'*/
	web_reg_save_param_attrib(
		"ParamName=c_sourcePage",
		"TagName=input",
		"Extract=value",
		"Name=_sourcePage",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='L3-cr7DQQ6jOQ1_otd_MahJnxYLLkPnHx774BX9MJgKbSV5Zeq6nJV1OK49W0h5x' Name ='c__fp' Type ='Manual'*/
	web_reg_save_param_attrib(
		"ParamName=c__fp",
		"TagName=input",
		"Extract=value",
		"Name=__fp",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_url("Account.action;jsessionid=A2D0D5626F6270D4FA24A1E61AF31E89", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=A2D0D5626F6270D4FA24A1E61AF31E89?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIUCd-HvMqPGywPEgkNAo_7aBIAGgASHwk8GLxUJUMd8BIJDeeNQA4SABoAEgkNzkFMehIAGgA=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	web_submit_data("Account.action",
		"Action=https://petstore.octoperf.com/actions/Account.action",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=A2D0D5626F6270D4FA24A1E61AF31E89?signonForm=",
		"Snapshot=t11.inf",
		"Mode=HTML",
		ITEMDATA,
			"Name=username", "Value={username}", ENDITEM,
		"Name=password", "Value=j2ee", ENDITEM,
		"Name=signon", "Value=Login", ENDITEM,
		"Name=_sourcePage", "Value={c_sourcePage}", ENDITEM,
		"Name=__fp", "Value={c__fp}", ENDITEM,
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
//
	
	
/*Correlation comment - Do not change!  Original value='RP-SN-01' Name ='productId' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=productId",
		"RegExp=productId=(.*?)\">RP-SN-01",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("sm_reptiles.gif",
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId={c_categoryId}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Catalog.action",
		"Snapshot=t12.inf",
		"Mode=HTML",
		LAST);

/*Correlation comment - Do not change!  Original value='EST-11' Name ='workingItemId' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=workingItemId",
		"RegExp=itemId=(.*?)\">EST-11",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("RP-SN-01",
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId={productId}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId={c_categoryId}",
		"Snapshot=t13.inf",
		"Mode=HTML",
		LAST);

	lr_think_time(8);

	web_url("Add to Cart",
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId={workingItemId}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId={productId}",
		"Snapshot=t14.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIUCd-HvMqPGywPEgkNAo_7aBIAGgASFAk7dPHzd9RhmhIJDcXsli4SABoA?alt=proto", ENDITEM,
		LAST);

	lr_think_time(7);

/*Correlation comment - Do not change!  Original value='Visa' Name ='order.cardType' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=order.cardType",
		"RegExp=option\\ value=\"(.*?)\"\\ selected",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("Proceed to Checkout",
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId={workingItemId}",
		"Snapshot=t15.inf",
		"Mode=HTML",
		LAST);

	
	lr_think_time(19);

	
	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("Order.action",
		"Action=https://petstore.octoperf.com/actions/Order.action",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrderForm=",
		"Snapshot=t18.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=order.cardType", "Value={NewParam_1}", ENDITEM,
		"Name=order.creditCard", "Value=989898989898", ENDITEM,
		"Name=order.expiryDate", "Value=12/24", ENDITEM,
		"Name=order.billToFirstName", "Value=ABC", ENDITEM,
		"Name=order.billToLastName", "Value=XYX", ENDITEM,
		"Name=order.billAddress1", "Value=901 San Antonio Road", ENDITEM,
		"Name=order.billAddress2", "Value=MS UCUP02-206", ENDITEM,
		"Name=order.billCity", "Value=Palo Alto", ENDITEM,
		"Name=order.billState", "Value=CA", ENDITEM,
		"Name=order.billZip", "Value=94303", ENDITEM,
		"Name=order.billCountry", "Value=USA", ENDITEM,
		"Name=newOrder", "Value=Continue", ENDITEM,
		"Name=_sourcePage", "Value={c_sourcePage}", ENDITEM,
		"Name=__fp", "Value={c__fp}", ENDITEM,
		LAST);

	lr_think_time(6);

	web_url("Confirm", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Sign Out", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("json_4", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"event\":[{\"download_time_ms\":4043,\"downloaded\":22331,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"6086\",\"previousversion\":\"6085\",\"total\":22331,\"url\":\"http://redirector.gvt1.com/edgedl/release2/chrome_component/fR1B76OrcGpwXHgKObhN8A_6086/ANgsItxO0YPPLkCqk10s9kg\"},{\"eventresult\":1,\"eventtype\":3,\""
		"nextfp\":\"1.788c743abecde4a616abb9ca551a580d595730f28e2fcd8f93c32c23c24a2b38\",\"nextversion\":\"6086\",\"previousfp\":\"1.473829dc986a53d8d16ee682953788dda5e5931299dc5bbaf20c6b6706a2345d\",\"previousversion\":\"6085\"}],\"version\":\"6086\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"hw\":{\"physmemory\":4},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19041.450\"},\"prodversion\":\"85.0.4183.83\",\"protocol\":\"3.1\",\"requestid\""
		":\"{a8ab68b7-5520-4da5-8032-3257fe27f399}\",\"sessionid\":\"{01367ba6-b2b2-42ea-832e-cab1b7f89699}\",\"updaterversion\":\"85.0.4183.83\"}}", 
		LAST);

	return 0;
}