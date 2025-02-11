/*
* Copyright (c) 2013-2021, The PurpleI2P Project
*
* This file is part of Purple i2pd project and licensed under BSD3
*
* See full license text in LICENSE file at top of project tree
*/

#ifndef HTTP_SERVER_RESOURCES_H__
#define HTTP_SERVER_RESOURCES_H__

namespace i2p
{
namespace http
{
	const std::string itoopieFavicon =
		"data:image/png;base64,"
		"iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAAAXNSR0IArs4c6QAAAARnQU1BAACx"
		"jwv8YQUAAAAJcEhZcwAALiIAAC4iAari3ZIAAAAHdElNRQfgCQsUNSZrkhi1AAAAGXRFWHRTb2Z0"
		"d2FyZQBwYWludC5uZXQgNC4wLjEyQwRr7AAAAoJJREFUOE9jwAUqi4Q1oEwwcDTV1+5sETaBclGB"
		"vb09C5QJB6kWpvFQJoOCeLC5kmjEHCgXE2SlyETLi3h6QrkM4VL+ssWSCZUgtopITLKqaOotRTEn"
		"cbAkLqAkGtOqLBLVAWLXyWSVFkkmRiqLxuaqiWb/VBYJMAYrwgckJY25VEUzniqKhjU2y+RtCRSP"
		"6lUXy/1jIBV5tlYxZUaFVMq2NInwIi9hO8fSfOEAqDZUoCwal6MulvOvyS7gi69K4j9zxZT/m0ps"
		"/28ptvvvquXXryIa7QYMMdTwqi0WNtVi0GIDseXl7TnUxFKfnGlxAGp0+D8j2eH/8Ub7/9e7nf7X"
		"+Af/B7rwt6pI0h0l0WhQADOC9DBkhSirpImHNVZKp24ukkyoshGLnN8d5fA/y13t/44Kq/8hlnL/"
		"z7fZ/58f6vcxSNpbVUVFhV1RLNBVTsQzVYZPSwhsCAhkiIfpNMrkbO6TLf071Sfk/5ZSi/+7q6z/"
		"P5ns+v9mj/P/CpuI/20y+aeNGYxZoVoYGmsF3aFMBAAZlCwftnF9ke3//bU2//fXWP8/UGv731Am"
		"+V+DdNblSqnUYqhSTKAiYSOqJBrVqiaa+S3UNPr/gmyH/xuKXf63hnn/B8bIP0UxHfEyyeSNQKVM"
		"EB1AEB2twhcTLp+gIBJUoyKasEpVJHmqskh8qryovUG/ffCHHRU2q/Tk/YuB6eGPsbExa7ZkpLu1"
		"oLEcVDtuUCgV1w60rQzElpRUE1EVSX0BYidHiInXF4nagNhYQW60EF+ApH1ktni0A1SIITSUgVlZ"
		"JHYnlIsfzJjIp9xZKswL5YKBHL+coKJoRDaUSzoozxHVrygQU4JykQADAwAT5b1NHtwZugAAAABJ"
		"RU5ErkJggg==";

	// bundled style sheet
	const std::string internalCSS =
		"<style>\r\n"
		"  body { font: 100%/1.5em sans-serif; margin: 0; padding: 1.5em; background: #FAFAFA; color: #103456; }\r\n"
		"  a, .slide label { text-decoration: none; color: #894C84; }\r\n"
		"  a:hover, .slide label:hover { color: #FAFAFA; background: #894C84; }\r\n"
		"  a.button { -webkit-appearance: button; -moz-appearance: button; appearance: button; text-decoration: none;\r\n"
		"    padding: 0 5px; border: 1px solid #894C84; }\r\n"
		"  .header { font-size: 2.5em; text-align: center; margin: 1em 0; color: #894C84; }\r\n"
		"  .wrapper { margin: 0 auto; padding: 1em; max-width: 64em; }\r\n"
		"  .menu { display: block; float: left; overflow: hidden; max-width: 12em; white-space: nowrap; text-overflow: ellipsis; }\r\n"
		"  .listitem { display: block; font-family: monospace; font-size: 1.2em; white-space: nowrap; }\r\n"
		"  .tableitem { font-family: monospace; font-size: 1.2em; white-space: nowrap; }\r\n"
		"  .content { float: left; font-size: 1em; margin-left: 4em; max-width: 48em; overflow: auto; }\r\n"
		"  .tunnel.established { color: #56B734; } .tunnel.expiring { color: #D3AE3F; }\r\n"
		"  .tunnel.failed { color: #D33F3F; } .tunnel.building { color: #434343; }\r\n"
		"  caption { font-size: 1.5em; text-align: center; color: #894C84; }\r\n"
		"  table { display: table; border-collapse: collapse; text-align: center; }\r\n"
		"  table.extaddr { text-align: left; } table.services { width: 100%; }\r\n"
		"  textarea { word-break: break-all; }\r\n"
		"  .streamdest { width: 120px; max-width: 240px; overflow: hidden; text-overflow: ellipsis;}\r\n"
		"  .slide div.slidecontent, .slide [type=\"checkbox\"] { display: none; }\r\n"
		"  .slide [type=\"checkbox\"]:checked ~ div.slidecontent { display: block; margin-top: 0; padding: 0; }\r\n"
		"  .disabled { color: #D33F3F; } .enabled { color: #56B734; }\r\n"
		"  @media screen and (max-width: 1150px) {\r\n" /* adaptive style */
		"    .wrapper { max-width: 58em; } .menu { max-width: 10em; }\r\n"
		"    .content { margin-left: 2em; max-width: 42em; }\r\n"
		"  }\r\n"
		"  @media screen and (max-width: 980px) {\r\n"
		"    body { padding: 1.5em 0 0 0; }\r\n"
		"    .menu { width: 100%; max-width: unset; display: block; float: none; position: unset; font-size: 16px;\r\n"
		"      text-align: center; }\r\n"
		"    .menu a, .commands a { display: inline-block; padding: 4px; }\r\n"
		"    .content { float: none; margin-left: unset; margin-top: 16px; max-width: 100%; width: 100%;\r\n"
		"      text-align: center; }\r\n"
		"    a, .slide label { /* margin-right: 10px; */ display: block; /* font-size: 18px; */ }\r\n"
		"    .header { margin: unset; font-size: 1.5em; } small {display: block}\r\n"
		"    a.button { -webkit-appearance: button; -moz-appearance: button; appearance: button; text-decoration: none;\r\n"
		"      margin-top: 10px; padding: 6px; border: 1px solid #894c84; width: -webkit-fill-available; }\r\n"
		"    input, select { width: 35%; text-align: center; padding: 5px;\r\n"
		"      border: 2px solid #ccc; -webkit-border-radius: 5px; border-radius: 5px; font-size: 18px; }\r\n"
		"    table.extaddr { margin: auto; text-align: unset; }\r\n"
		"    textarea { width: -webkit-fill-available; height: auto; padding:5px; border:2px solid #ccc;\r\n"
		"      -webkit-border-radius: 5px; border-radius: 5px; font-size: 12px; }\r\n"
		"    button[type=submit] { padding: 5px 15px; background: #ccc; border: 0 none; cursor: pointer;\r\n"
		"      -webkit-border-radius: 5px; border-radius: 5px; position: relative; height: 36px; display: -webkit-inline-box; margin-top: 10px; }\r\n"
		"  }\r\n"
		"</style>\r\n";

	// for external style sheet
	std::string externalCSS;

} // http
} // i2p

#endif /* HTTP_SERVER_RESOURCES_H__ */
