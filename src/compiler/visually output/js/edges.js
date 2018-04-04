var edges = [{from:10,to:8,id:'e1', label: '1', dashes:true},{from:10,to:7,id:'e2', label: '2', dashes:true},{from:10,to:6,id:'e3', label: '3', dashes:true},{from:10,to:9,id:'e4', label: '4', dashes:true},{from:13,to:12,id:'e5', label: '5', dashes:true},{from:14,to:13,id:'e6', label: '6', dashes:true},{from:15,to:14,id:'e7', label: '7', dashes:true},{from:16,to:15,id:'e8', label: '8', dashes:true},{from:17,to:16,id:'e9', label: '9', dashes:true},{from:18,to:17,id:'e10', label: '10', dashes:true},{from:19,to:18,id:'e11', label: '11', dashes:true},{from:20,to:19,id:'e12', label: '12', dashes:true},{from:21,to:20,id:'e13', label: '13', dashes:true},{from:23,to:22,id:'e14', label: '14', dashes:true},{from:24,to:23,id:'e15', label: '15', dashes:true},{from:25,to:24,id:'e16', label: '16', dashes:true},{from:26,to:25,id:'e17', label: '17', dashes:true},{from:27,to:26,id:'e18', label: '18', dashes:true},{from:28,to:27,id:'e19', label: '19', dashes:true},{from:29,to:28,id:'e20', label: '20', dashes:true},{from:30,to:29,id:'e21', label: '21', dashes:true},{from:31,to:21,id:'e22', label: '22', dashes:true},{from:31,to:30,id:'e23', label: '23', dashes:true},{from:32,to:31,id:'e24', label: '24', dashes:true},{from:33,to:32,id:'e25', label: '25', dashes:true},{from:34,to:33,id:'e26', label: '26', dashes:true},{from:35,to:34,id:'e27', label: '27', dashes:true},{from:36,to:35,id:'e28', label: '28', dashes:true},{from:37,to:36,id:'e29', label: '29', dashes:true},{from:38,to:37,id:'e30', label: '30', dashes:true},{from:39,to:38,id:'e31', label: '31', dashes:true},{from:42,to:41,id:'e32', label: '32', dashes:true},{from:43,to:42,id:'e33', label: '33', dashes:true},{from:44,to:40,id:'e34', label: '34', dashes:true},{from:44,to:43,id:'e35', label: '35', dashes:true},{from:45,to:44,id:'e36', label: '36', dashes:true},{from:46,to:45,id:'e37', label: '37', dashes:true},{from:47,to:46,id:'e38', label: '38', dashes:true},{from:48,to:47,id:'e39', label: '39', dashes:true},{from:51,to:50,id:'e40', label: '40', dashes:true},{from:52,to:51,id:'e41', label: '41', dashes:true},{from:53,to:52,id:'e42', label: '42', dashes:true},{from:54,to:53,id:'e43', label: '43', dashes:true},{from:55,to:54,id:'e44', label: '44', dashes:true},{from:56,to:55,id:'e45', label: '45', dashes:true},{from:57,to:56,id:'e46', label: '46', dashes:true},{from:58,to:57,id:'e47', label: '47', dashes:true},{from:59,to:58,id:'e48', label: '48', dashes:true},{from:61,to:60,id:'e49', label: '49', dashes:true},{from:62,to:61,id:'e50', label: '50', dashes:true},{from:63,to:62,id:'e51', label: '51', dashes:true},{from:64,to:63,id:'e52', label: '52', dashes:true},{from:65,to:64,id:'e53', label: '53', dashes:true},{from:66,to:65,id:'e54', label: '54', dashes:true},{from:67,to:66,id:'e55', label: '55', dashes:true},{from:68,to:67,id:'e56', label: '56', dashes:true},{from:69,to:59,id:'e57', label: '57', dashes:true},{from:69,to:68,id:'e58', label: '58', dashes:true},{from:70,to:69,id:'e59', label: '59', dashes:true},{from:71,to:70,id:'e60', label: '60', dashes:true},{from:72,to:71,id:'e61', label: '61', dashes:true},{from:73,to:72,id:'e62', label: '62', dashes:true},{from:74,to:73,id:'e63', label: '63', dashes:true},{from:75,to:74,id:'e64', label: '64', dashes:true},{from:76,to:75,id:'e65', label: '65', dashes:true},{from:77,to:76,id:'e66', label: '66', dashes:true},{from:80,to:79,id:'e67', label: '67', dashes:true},{from:81,to:80,id:'e68', label: '68', dashes:true},{from:83,to:82,id:'e69', label: '69', dashes:true},{from:84,to:83,id:'e70', label: '70', dashes:true},{from:85,to:81,id:'e71', label: '71', dashes:true},{from:85,to:78,id:'e72', label: '72', dashes:true},{from:85,to:84,id:'e73', label: '73', dashes:true},{from:86,to:85,id:'e74', label: '74', dashes:true},{from:87,to:86,id:'e75', label: '75', dashes:true},{from:88,to:87,id:'e76', label: '76', dashes:true},{from:89,to:77,id:'e77', label: '77', dashes:true},{from:89,to:88,id:'e78', label: '78', dashes:true},{from:90,to:89,id:'e79', label: '79', dashes:true},{from:91,to:90,id:'e80', label: '80', dashes:true},{from:92,to:49,id:'e81', label: '81', dashes:true},{from:92,to:91,id:'e82', label: '82', dashes:true},{from:93,to:92,id:'e83', label: '83', dashes:true},{from:94,to:93,id:'e84', label: '84', dashes:true},{from:95,to:94,id:'e85', label: '85', dashes:true},{from:96,to:95,id:'e86', label: '86', dashes:true},{from:98,to:96,id:'e87', label: '87', dashes:true},{from:98,to:48,id:'e88', label: '88', dashes:true},{from:98,to:39,id:'e89', label: '89', dashes:true},{from:98,to:11,id:'e90', label: '90', dashes:true},{from:98,to:10,id:'e91', label: '91', dashes:true},{from:98,to:97,id:'e92', label: '92', dashes:true},{from:99,to:98,id:'e93', label: '93', dashes:true},{from:100,to:99,id:'e94', label: '94', dashes:true},{from:101,to:100,id:'e95', label: '95', dashes:true},{from:102,to:5,id:'e96', label: '96', dashes:true},{from:102,to:101,id:'e97', label: '97', dashes:true},{from:105,to:103,id:'e98', label: '98', dashes:true},{from:105,to:104,id:'e99', label: '99', dashes:true},];