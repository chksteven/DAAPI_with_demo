/////////////////////////////////////////////////////////////////////////
/// DriectAccess Trade Engine
/// Copyright (C) Shanghai DirectAccess Technology Co., Ltd.
/// Last Modify 2019/3/18
/// Define Future Struct
/// Author (c) Wang Jian Quan (Franklin)
/////////////////////////////////////////////////////////////////////////

#pragma once

#include "DADataType.h"

namespace Directaccess {


// 错误描述
struct CFutureRspInfoField 
{
	TDAIntType			ErrorID;							// 错误码
	TDAStringType		ErrorMsg;							// 错误描述
};
// 用户登录请求
struct CFutureReqUserLoginField
{
	TDAStringType		UserId;								// 用户标识
	TDAStringType		UserPwd;							// 用户密码
	TDAStringType		UserType;							// 用户类型
	TDAStringType		MacAddress;							// MAC地址
	TDAStringType		ComputerName;						// 计算机名
	TDAStringType		SoftwareName;						// 软件名称
	TDAStringType		SoftwareVersion;					// 软件版本号
	TDAStringType		AuthorCode;							// 授权码
	TDAStringType		ErrorDescription;					// 错误信息
};
// 用户登录返回
struct CFutureRspAccountField
{
	TDAStringType		UserId;								// 用户标识
	TDAStringType		UserName;							// 用户名    
	TDAStringType		UserType;							// 用户类型             
	TDAStringType		LoginPwd;							// 登录密码             
	TDAStringType		AccountNo;							// 资金账号              
	TDAStringType		TradePwd;							// 交易密码             
	TDAStringType		IsSimulation;						// 是否模拟用户              
	TDAStringType		FrontendIp;							// 前置机IP地址              
	TDAStringType		FrontendPort;						// 前置机端口号            
	TDAStringType		CurrencyNo;							// 帐户币种           
	TDAStringType		UserState;							// 用户状态 C消户 U在用 D冻结         
	TDAStringType		SelAll;								// 是否可以卖空期权             
	TDAStringType		Strategy;							// 是否可以下自定义策略单              
	TDAStringType		Inner;								// 是否可以下国内单             
	TDAStringType		YingSun;							// 是否可以使用止损止盈和条件单功能          
	TDAStringType		ChaoDan;							// 是否可以使用炒单手功能             
	TDAStringType		Option;								// 是否可以交易期权：0             
	TDAStringType		CmeMarket;							// 是否可以获取CME行情：0              
	TDAStringType		CmeCOMEXMarket;						// 是否可以获取CME_COMEX行情               
	TDAStringType		CmeNYMEXMarket;						// 是否可以获取CME_NYMEX行情               
	TDAStringType		CmeCBTMarket;						// 是否可以获取CME_CBT行情               
	TDAStringType		IceUSMarket;						// 是否可以获取ICE US行情              
	TDAStringType		IceECMarket;						// 是否可以获取ICE EC行情             
	TDAStringType		IceEFMarket;						// 是否可以获取ICE EF行情             
	TDAStringType		CanTradeStockHK;					// 是否可以交易港股             
	TDAStringType		CanTradeStockAM;					// 是否可以交易美股            
	TDAStringType		MultiLogin;							// 是否可以多处登录          
	TDAStringType		SellStockHK;						// 是否可以卖空港股              
	TDAStringType		SellStockAM;						// 是否可以卖空美股                
	TDAStringType		CanTradeStockKRX;					// 是否可以交易韩股               
	TDAStringType		HkexMarket;							// 是否可以获取期货港交所HKEX行情：0：不可以；1：可以（不使用优惠行情）；2：境内使用优惠行情；3：境外使用优惠行情 mantis1080 mantis393           
	TDAStringType		IdNumber;							// 用户身份证（股票传身份证类型，只有类型为1时才能选88的优惠行情；期货传身份证号码，15位或18位是国内客户）    
	TDAStringType		HkexMarketFee;						// 港交所行情收费金额（为0时表示在豁免期，大于0表示开始收费）       
	TDAStringType		IsProfessional;						// CME行情权限是否是专业版（1：是；0：否）  
	TDAStringType		IsOverSea;							// 是否境外登录       
	TDAStringType		IsFirstLogin;						// 是否新设备初次登录 
	TDAStringType		UserMobile;							// 用户手机号 
	TDAStringType		HasSetQA;							// 是否已经设置了密保问题答案 
	TDAStringType		CanTradeStockSGXQ;					// 是否可以交易新加坡股      
	TDAStringType		ExistMac;							// 是否已经绑定过设备mac地址：1：是；0 or other：不是   
	TDAStringType		RatioINE;							// 上海能源可取资金系数          
	TDAStringType		EurexMarket;						// 是否可以获取Eurex行情：0：不可以；1：可以（亚太区优惠）；2：可以（非专业）；3：可以（专业投资者）；4：不可以，需提示（亚太区以外使用亚太区优惠行情）   
	TDAStringType		HkexIsOverMaxTerminal;				// 是否超过最大终端数:0:未超过,非0超过      
	TDAStringType		HkexOverMoney;						// 港交所超过终端数收费      
	TDAStringType		CanTradeStockAU;					// 是否可交易澳股      
	TDAStringType		NyFlag;								// 能源标示
};
// 用户登出请求
struct CFutureReqUserLogoutField
{
	TDAStringType		UserId;								// 用户标识
	TDAStringType		AccountNo;							// 资金账号
	TDAStringType		ErrorDescription;					// 错误信息
};
// 新增订单请求
// new order request struct
struct CFutureReqOrderInsertField
{
	TDAStringType		UserId;								// 用户标识
															// User id

	TDAStringType		AccountNo;							// 资金账号
															// Account No

	TDAStringType		LocalNo;							// API用户的程序指定的本地订单编号	
															// Order ID assigned by API user program

	TDAStringType		ExchangeCode;						// 交易所代码
															// Exchange code

	TDAStringType		ContractCode;						// 合约代码
															// Contract code 

	TDAStringType		BidAskFlag;							// 买还是卖: DERIVATIVE_BID=买,DERIVATIVE_ASK=卖	
															// Bid or ask: DERIVATIVE_BID=bid,DERIVATIVE_ASK=ask

	TDAStringType		OpenCloseFlag;						// 开仓还是平仓: DERIVATIVE_OPEN_POS_FLAG=开仓,DERIVATIVE_CLOSE_POS_FLAG=平仓
															// Open/close position flag: DERIVATIVE_OPEN_POS_FLAG=open position	,DERIVATIVE_CLOSE_POS_FLAG=close position

	TDAStringType		OrderQty;							// 订单数量
															// Order quantity

	TDAStringType		OrderPrice;							// 下单价格	
															// Order price

	// 定单类型：
	//		DERIVATIVE_LIMIT_ORDER=限价单, DERIVATIVE_MARKET_ORDER=市价单
	//		DERIVATIVE_LIMIT_STOP_ORDER=限价止损，DERIVATIVE_STOP_LOSS_ORDER=止损	
	// order type:
	//		DERIVATIVE_LIMIT_ORDER=limit order, DERIVATIVE_MARKET_ORDER=market order 
	//		DERIVATIVE_LIMIT_STOP_ORDER=limit stop order ,DERIVATIVE_STOP_LOSS_ORDER=stop loss order
	TDAStringType		OrderType;

	TDAStringType		TriggerPrice;						// 触发价格
															// Trigger price
	// 有效日期:
	//		DERIVATIVE_TDY_TIF=当日有效, DERIVATIVE_GTC_TIF=永久有效（GTC），DERIVATIVE_OPG_TIF=OPG,DERIVATIVE_IOC_TIF4=IOC
	//		DERIVATIVE_FOK_TIF=FOK，DERIVATIVE_GTD_TIF=GTD，DERIVATIVE_ATC_TIF=ATC，DERIVATIVE_FAK_TIF=FAK
	// order time in force:
	//		DERIVATIVE_TDY_TIF=the day only,DERIVATIVE_GTC_TIF=GTC,DERIVATIVE_OPG_TIF=OPG,DERIVATIVE_IOC_TIF=IOC
	//		DERIVATIVE_FOK_TIF=FOK,DERIVATIVE_GTD_TIF=GTD,DERIVATIVE_ATC_TIF=ATC,DERIVATIVE_FAK_TIF=FAK	
	TDAStringType		TIF;							
	
	TDAStringType		StrategyId;							// 策略ID 20130726 add
															// Strategy id

	TDAStringType		MaxShow;							// 冰山单显示的最大数量
															// Max show quantity for ICE order													

	TDAStringType		MinQty;								// FAK/FOK订单的最小成交量
															// Min filled quantity expected by FAK/FOK order

	TDAStringType		Tag50;								// 下单人ID(CME交易所特定)
															//  Order placer's id (CME exchange specific)

	TDAStringType		ErrorDescription;					// 错误信息
															// Error message description
	TDAIntType		    IsProgram;							// 程序化单(0)或人工单(1)	

	TDAStringType	    OrgOrderLocationID;					// ISO(3166-1)标准中定义的国家代码
															// ISO(3166-1)identifier of the physical location

	TDACharType			ContractCategory;					// 合约类型(跨期时候必填'1',默认其他类型非必填）

};
// 新增订单返回
struct CFutureRspOrderInsertField
{
	TDAStringType		UserId;								// 用户标识
															// User id
		
	TDAStringType		AccountNo;							// 资金账号
															// Account No														

	TDAStringType		SystemNo;							// 系统编号
															// System no	
		
	TDAStringType		LocalNo;							// 本地编号 API用户的程序指定的本地订单编号
															// Order ID assigned by API user program

	TDAStringType		OrderNo;							// 定单号 交易所系统给定的订单号，LocalNo:SystemNo:OrderNo是一对一对一的关系
															// The order number given by the exchange system ,LocalNo:SystemNo:OrderNo,these three are one-to-one relationships
																	
	TDAStringType		ExchangeCode;						// 交易所代码
															// Exchange code														

	TDAStringType		ContractCode;						// 合约代码
															// Contract code

	TDAStringType		BidAskFlag;							// 买还是卖: DERIVATIVE_BID=买,DERIVATIVE_ASK=卖
															// Bid or ask: DERIVATIVE_BID=bid,DERIVATIVE_ASK=ask

	TDAStringType		OrderQty;							// 订单数量
															// Order quantity

	TDAStringType		OrderPrice;							// 下单价格
															// Order price
		
	// 定单类型：
	//		DERIVATIVE_LIMIT_ORDER=限价单, DERIVATIVE_MARKET_ORDER=市价单
	//		DERIVATIVE_LIMIT_STOP_ORDER=限价止损，DERIVATIVE_STOP_LOSS_ORDER=止损	
	// Order type:
	//		DERIVATIVE_LIMIT_ORDER=limit order, DERIVATIVE_MARKET_ORDER=market order 
	//		DERIVATIVE_LIMIT_STOP_ORDER=limit stop order ,DERIVATIVE_STOP_LOSS_ORDER=stop loss order
	TDAStringType		OrderType;							
	
	TDAStringType		OrderDate;							// 下单日期
															// Order date

	TDAStringType		OrderTime;							// 下单时间
															// Order time

	TDAStringType		ErrorCode;							// 错误代码
															// Error code

	// 订单状态:
	//		DERIVATIVE_ORDER_STATE1=已请求；  DERIVATIVE_ORDER_STATE2=已排队；  DERIVATIVE_ORDER_STATE3=部分成交
	//		DERIVATIVE_ORDER_STATE4=完全成交；DERIVATIVE_ORDER_STATE5=已撤余单；DERIVATIVE_ORDER_STATE6=已撤单
	//		DERIVATIVE_ORDER_STATE7=指令失败；DERIVATIVE_ORDER_STATE8=待送出；  DERIVATIVE_ORDER_STATE9=待更改；
	//		DERIVATIVE_ORDER_STATEA=待撤单
	// Order state:
	//		DERIVATIVE_ORDER_STATE1=requested 
	//		DERIVATIVE_ORDER_STATE2=be queuing  
	//		DERIVATIVE_ORDER_STATE3=some orders were closed  
	//		DERIVATIVE_ORDER_STATE4=full order  
	//		DERIVATIVE_ORDER_STATE5=the remaining order has been cancelled
	//		DERIVATIVE_ORDER_STATE6=order has been cancelled  
	//		DERIVATIVE_ORDER_STATE7=command failure 
	//		DERIVATIVE_ORDER_STATE8=the command is waiting to be sent 
	//		DERIVATIVE_ORDER_STATE9=the command is waiting to be changed 
	//		DERIVATIVE_ORDER_STATEA=the command is waiting to be cancelled
	TDAStringType		OrderState;							
															
	
	TDAStringType		TriggerPrice;						// 触发价格
															// Trigger price
	// 有效日期:
	//		DERIVATIVE_TDY_TIF=当日有效, DERIVATIVE_GTC_TIF=永久有效（GTC），DERIVATIVE_OPG_TIF=OPG,DERIVATIVE_IOC_TIF4=IOC
	//		DERIVATIVE_FOK_TIF=FOK，DERIVATIVE_GTD_TIF=GTD，DERIVATIVE_ATC_TIF=ATC，DERIVATIVE_FAK_TIF=FAK
	// Order time in force:
	//		DERIVATIVE_TDY_TIF=the day only,DERIVATIVE_GTC_TIF=GTC,DERIVATIVE_OPG_TIF=OPG,DERIVATIVE_IOC_TIF=IOC
	//		DERIVATIVE_FOK_TIF=FOK,DERIVATIVE_GTD_TIF=GTD,DERIVATIVE_ATC_TIF=ATC,DERIVATIVE_FAK_TIF=FAK
	TDAStringType		TIF;

	TDAStringType		OpenCloseFlag;						// 开仓还是平仓: DERIVATIVE_OPEN_POS_FLAG=开仓,DERIVATIVE_CLOSE_POS_FLAG=平仓
															// Open/close position flag: DERIVATIVE_OPEN_POS_FLAG=open position	,DERIVATIVE_CLOSE_POS_FLAG=close position

	TDAStringType		StrategyId;							// 策略ID		
															// Strategy id													
		
	TDAStringType		MaxShow;							// 冰山单显示的最大数量
															// Max show quantity for ICE order

	TDAStringType		MinQty;								// FAK/FOK订单的最小成交量 
															// Min filled quantity expected by FAK/FOK order

	TDAStringType		ExchangeTime;						// 交易所返回时间
															// Exchange time
	
	TDAStringType		OrdSourceType;						// 终端类型(CME交易所特定)
															// Identify the type of terminal(CME exchange specific)

	TDAStringType		Tag50;								// 下单人ID(CME交易所特定)
															// Order placer's id (CME exchange specific)
};
// 修改订单请求
struct CFutureReqOrderModifyField
{
	TDAStringType		SystemNo;							// 系统编号
															// System No

	TDAStringType		UserId;								// 用户标识
															// User id
	
	TDAStringType		LocalNo;							// API用户的程序指定的本地订单编号
															// Order ID assigned by API user program

	TDAStringType		AccountNo;							// 资金账号
															// Account No
	
	TDAStringType		OrderNo;							// 定单号
															// The order number given by the exchange system ,LocalNo:SystemNo:OrderNo,these three are one-to-one relationships

	TDAStringType		ExchangeCode;						// 交易所代码
															// Exchange code
															
	TDAStringType		ContractCode;						// 合约代码
															// Contract code

	TDAStringType		BidAskFlag;							// 买还是卖: DERIVATIVE_BID=买,DERIVATIVE_ASK=卖
															// Bid or ask: DERIVATIVE_BID=bid,DERIVATIVE_ASK=ask

	TDAStringType		OrderQty;							// 订单数量
															// Order quantity

	TDAStringType		OrderPrice;							// 下单价格
															// Order price
	
	TDAStringType		ModifyQty;							// 改单数 
															// Modify quantity

	TDAStringType		ModifyPrice;						// 改单价格
															// Modify price
	
	// 定单类型：
	//		DERIVATIVE_LIMIT_ORDER=限价单, DERIVATIVE_MARKET_ORDER=市价单
	//		DERIVATIVE_LIMIT_STOP_ORDER=限价止损，DERIVATIVE_STOP_LOSS_ORDER=止损	
	// order type:
	//		DERIVATIVE_LIMIT_ORDER=limit order, DERIVATIVE_MARKET_ORDER=market order 
	//		DERIVATIVE_LIMIT_STOP_ORDER=limit stop order ,DERIVATIVE_STOP_LOSS_ORDER=stop loss order
	TDAStringType		OrderType;							
	
	TDAStringType		TriggerPrice;						// 触发价格
															// Trigger price

	TDAStringType		ModifyTriggerPrice;					// 改单触发价格
															// Modify trigger price
	// 有效日期:
	//		DERIVATIVE_TDY_TIF=当日有效, DERIVATIVE_GTC_TIF=永久有效（GTC）	
	// order time in force:
	//		DERIVATIVE_TDY_TIF=the day only,DERIVATIVE_GTC_TIF=GTC
	TDAStringType		TIF;

	TDAStringType		Tag50;								// 下单人ID(CME交易所特定)
															// Order placer's id (CME exchange specific)

	TDAStringType		ErrorDescription;					// 错误信息
															// Error description
	TDAStringType	    OrgOrderLocationID;					// ISO(3166-1)标准中定义的国家代码
															// ISO(3166-1)identifier of the physical location

};
// 修改订单返回
typedef CFutureRspOrderInsertField CFutureRspOrderModifyField;
// 撤单请求
struct CFutureReqOrderCancelField
{
	TDAStringType		UserId;								// 用户标识
															// User id
	
	TDAStringType		LocalNo;							// API用户的程序指定的本地订单编号
															// Order ID assigned by API user program

	TDAStringType		AccountNo;							// 资金账号
															// Account No
		
	TDAStringType		SystemNo;							// 系统编号
															// System No

	TDAStringType		OrderNo;							// 定单号
															// The order number given by the exchange system ,LocalNo:SystemNo:OrderNo,these three are one-to-one relationships
	TDAStringType		ExchangeCode;						// 交易所代码
															// Exchange code

	TDAStringType		ContractCode;						// 合约代码
															// Contract code

	TDAStringType		BidAskFlag;							// 买还是卖: DERIVATIVE_BID=买,DERIVATIVE_ASK=卖
															// Bid or ask: DERIVATIVE_BID=bid,DERIVATIVE_ASK=ask

	TDAStringType		OrderQty;							// 下单数
															// Order quantity

	TDAStringType		OrderPrice;							// 下单价格
															// Order price
	
		// 定单类型：
	//		DERIVATIVE_LIMIT_ORDER=限价单, DERIVATIVE_MARKET_ORDER=市价单
	// Order type:
	//		DERIVATIVE_LIMIT_ORDER=limit order, DERIVATIVE_MARKET_ORDER=market order 
	TDAStringType		OrderType;							
		
	TDAStringType		Tag50;								// 下单人ID(CME交易所特定)
															//  Order placer's id (CME exchange specific)

	TDAStringType		ErrorDescription;					// 错误信息
															// Error message description

	TDAStringType	    OrgOrderLocationID;					// ISO(3166-1)标准中定义的国家代码
															// ISO(3166-1)identifier of the physical location

	TDACharType			ContractCategory;					// 合约类型(跨期时候必填'1',默认其他类型非必填）

};
// 撤单返回
struct CFutureRspOrderCancelField
{
	TDAStringType		UserId;								// 用户标识
															// User id

	TDAStringType		AccountNo;							// 资金账号
															// Account No

	TDAStringType		SystemNo;							// 系统编号
															// System No

	TDAStringType		LocalNo;							// 本地编号 API用户的程序指定的本地订单编号
															// Order ID assigned by API user program

	TDAStringType		OrderNo;							// 定单号 交易所系统给定的订单号，LocalNo:SystemNo:OrderNo是一对一对一的关系
															// The order number given by the exchange system ,LocalNo:SystemNo:OrderNo,these three are one-to-one relationships

	TDAStringType		CancelNo;							// 撤单号
															// Cancel order No

	TDAStringType		ExchangeCode;						// 交易所代码
															// Exchange code

	TDAStringType		ContractCode;						// 合约代码
															// Contract code

	TDAStringType		BidAskFlag;							// 买还是卖: DERIVATIVE_BID=买,DERIVATIVE_ASK=卖
															// Bid or ask: DERIVATIVE_BID=bid,DERIVATIVE_ASK=ask

	TDAStringType		OrderQty;							// 下单数
															// Order quantity

	TDAStringType		OrderPrice;							// 下单价格
															// Order price

	TDAStringType		FilledQty;							// 已成交数
															// Filled quantity (The number of orders has been completed)

	TDAStringType		CancelledQty;						// 已撤单数
															// Cancelled quantity
	// 定单类型：
	//		DERIVATIVE_LIMIT_ORDER=限价单, DERIVATIVE_MARKET_ORDER=市价单
	// Order type:
	//		DERIVATIVE_LIMIT_ORDER=limit order, DERIVATIVE_MARKET_ORDER=market order 
	TDAStringType		OrderType;							
	
	TDAStringType		CancelledDate;						// 撤单日期
															// Cancelled date

	TDAStringType		CancelledTime;						// 撤单时间
															// Cancelled time

	TDAStringType		ErrorCode;							// 错误代码
															// Error code
	
	TDAStringType		OrdSourceType;						// 终端类型(CME交易所特定)
															// Identify the type of terminal(CME exchange specific)
															
	TDAStringType		Tag50;								// 下单人ID(CME交易所特定)
															// Order placer's id (CME exchange specific)
};
// 修改密码请求
struct CFutureReqPasswordUpdateField
{
	TDAStringType		UserId;								// 用户代码
	TDAStringType		OldPassword;						// 用户原密码
	TDAStringType		NewPassword;						// 用户新密码
	TDAStringType		ErrorDescription;					// 错误信息
};
// 修改密码返回
struct CFutureRspPasswordUpdateField
{
	TDAStringType		UserId;								// 用户代码
	TDAStringType		OldPassword;						// 用户原密码
	TDAStringType		NewPassword;						// 用户新密码
};
// 查询订单请求
struct CFutureQryOrderField
{
	TDAStringType		UserId;								// 用户标识
															// User id

	TDAStringType		AccountNo;							// 资金账号
															// Account No
// 是否模拟用户：DERIVATIVE_IS_SIMULATED_USER=是；DERIVATIVE_IS_NOT_SIMULATED_USER or other：不是
// Is it a simulated user:
// DERIVATIVE_IS_SIMULATED_USER=is a simulated user
// DERIVATIVE_IS_NOT_SIMULATED_USER or other = is not a simulated user
	TDAStringType		IsSimulation;						
															
	TDAStringType		OrderNo;							// 取得指定订单号以后的定单
															// Obtain a subsequent order with the specified order number

	TDAStringType		OrderDateTime;						// 取得指定订单时间以后的定单（格式：yyyy-MM-dd hh:mm:ss）
															// Obtain orders after the specified order time（format：yyyy-MM-dd hh:mm:ss）

	TDAStringType		ErrorDescription;					// 错误信息
															// Error description

	TDACharType			FilterFlag;							// 订单查询过滤条件. 值: DERIVATIVE_ORD_FILTER_L, DERIVATIVE_ORD_FILTER_A(缺省值)
															// Order query filter flag, values :DERIVATIVE_ORD_FILTER_L, DERIVATIVE_ORD_FILTER_A(default)
};
// 查询订单返回
struct CFutureRspOrderField
{
	TDAStringType		UserId;								// 用户标识
															// User id

	TDAStringType		AccountNo;							// 资金账号
															// Account No

	TDAStringType		SystemNo;							// 系统编号
															// System No

	TDAStringType		LocalNo;							// API用户的程序指定的本地订单编号
															// Order ID assigned by API user program

	TDAStringType		OrderNo;							// 定单号 交易所系统给定的订单号，LocalNo:SystemNo:OrderNo是一对一对一的关系
															// The order number given by the exchange system ,LocalNo:SystemNo:OrderNo,these three are one-to-one relationships
		
	TDAStringType		ExchangeCode;						// 交易所代码
															// Exchange code

	TDAStringType		ContractCode;						// 合约代码
															// Contract code

	TDAStringType		BidAskFlag;							// 买还是卖: DERIVATIVE_BID=买,DERIVATIVE_ASK=卖
															// Bid or ask: DERIVATIVE_BID=bid,DERIVATIVE_ASK=ask

	TDAStringType		OrderQty;							// 订单数量
															// Order quantity

	TDAStringType		OrderPrice;							// 下单价格
															// Order price

	TDAStringType		FilledQty;							// 已成交数
															// Filled quantity (The number of orders has been completed)

	TDAStringType		FilledPrice;						// 成交均价
															// Filled price(Average transaction price)

	// 定单类型：
	//		DERIVATIVE_LIMIT_ORDER=限价单, DERIVATIVE_MARKET_ORDER=市价单
	//		DERIVATIVE_LIMIT_STOP_ORDER=限价止损，DERIVATIVE_STOP_LOSS_ORDER=止损	
	// Order type:
	//		DERIVATIVE_LIMIT_ORDER=limit order, DERIVATIVE_MARKET_ORDER=market order 
	//		DERIVATIVE_LIMIT_STOP_ORDER=limit stop order ,DERIVATIVE_STOP_LOSS_ORDER=stop loss order
	TDAStringType		OrderType;							
	
	TDAStringType		OrderDate;							// 下单日期
															// Order date

	TDAStringType		OrderTime;							// 下单时间
															// Order time

	TDAStringType		ErrorCode;							// 错误代码
															// Error code

	// 订单状态:
	//		DERIVATIVE_ORDER_STATE1=已请求；  DERIVATIVE_ORDER_STATE2=已排队；  DERIVATIVE_ORDER_STATE3=部分成交
	//		DERIVATIVE_ORDER_STATE4=完全成交；DERIVATIVE_ORDER_STATE5=已撤余单；DERIVATIVE_ORDER_STATE6=已撤单
	//		DERIVATIVE_ORDER_STATE7=指令失败；DERIVATIVE_ORDER_STATE8=待送出；  DERIVATIVE_ORDER_STATE9=待更改；
	//		DERIVATIVE_ORDER_STATEA=待撤单
	// Order state:
	//		DERIVATIVE_ORDER_STATE1=requested 
	//		DERIVATIVE_ORDER_STATE2=be queuing  
	//		DERIVATIVE_ORDER_STATE3=some orders were closed  
	//		DERIVATIVE_ORDER_STATE4=full order  
	//		DERIVATIVE_ORDER_STATE5=the remaining order has been cancelled
	//		DERIVATIVE_ORDER_STATE6=order has been cancelled  
	//		DERIVATIVE_ORDER_STATE7=command failure 
	//		DERIVATIVE_ORDER_STATE8=the command is waiting to be sent 
	//		DERIVATIVE_ORDER_STATE9=the command is waiting to be changed 
	//		DERIVATIVE_ORDER_STATEA=the command is waiting to be cancelled
	TDAStringType		OrderState;							
	
	TDAStringType		CancelUserId;						// 撤单的用户标识
															// User id of cancel order

	TDAStringType		TriggerPrice;						// 触发价格
															// Trigger price

	// 有效日期:
	//		DERIVATIVE_TDY_TIF=当日有效, DERIVATIVE_GTC_TIF=永久有效（GTC），DERIVATIVE_OPG_TIF=OPG,DERIVATIVE_IOC_TIF4=IOC
	//		DERIVATIVE_FOK_TIF=FOK，DERIVATIVE_GTD_TIF=GTD，DERIVATIVE_ATC_TIF=ATC，DERIVATIVE_FAK_TIF=FAK
	// order time in force:
	//		DERIVATIVE_TDY_TIF=the day only,DERIVATIVE_GTC_TIF=GTC,DERIVATIVE_OPG_TIF=OPG,DERIVATIVE_IOC_TIF=IOC
	//		DERIVATIVE_FOK_TIF=FOK,DERIVATIVE_GTD_TIF=GTD,DERIVATIVE_ATC_TIF=ATC,DERIVATIVE_FAK_TIF=FAK
	TDAStringType		TIF;								

	TDAStringType		OpenCloseFlag;						// 开仓还是平仓: DERIVATIVE_OPEN_POS_FLAG=开仓,DERIVATIVE_CLOSE_POS_FLAG=平仓
															// Open/close position flag: DERIVATIVE_OPEN_POS_FLAG=open position	,DERIVATIVE_CLOSE_POS_FLAG=close position

	TDAStringType		StrategyId;							// 策略ID 20130726 add
															// Strategy id

	TDAStringType		MaxShow;							// 冰山单显示的最大数量
															// Max show quantity for ICE order

	TDAStringType		MinQty;								// FAK/FOK订单的最小成交量
															// Min filled quantity expected by FAK/FOK order

	TDAStringType		ExchangeTime;						// 交易所返回时间
															// Exchange time

	TDAStringType		CancelTime;							// 撤单时间
															// Cancel time
};
// 查询成交请求
struct CFutureQryTradeField
{

	TDAStringType		UserId;								// 用户		
	TDAStringType		ErrorDescription;					// 错误信息
	TDAStringType		lastFilledNo;						//查询的最后一条用户成交号 //update 2020.04.29 ywh
	TDAStringType		maxItemNumOnePage;					//查询成交每页最大数量		
};
// 查询成交返回
struct CFutureRspTradeField
{
	TDAStringType		UserId;								// 用户标识
	TDAStringType		AccountNo;							// 资金账号
	TDAStringType		FilledNo;							// 成交编号（要包括7位的订单编号，一共11位）
	TDAStringType		OrderNo;							// 定单号
	TDAStringType		SystemNo;							// 系统编号
	TDAStringType		LocalNo;							// 本地编号
	TDAStringType		ExchangeCode;						// 交易所代码
	TDAStringType		TreatyCode;							// 合约代码
	TDAStringType		BuySale;							// 买还是卖：1=buy 2=sell
	TDAStringType		FilledNumber;						// 成交数
	TDAStringType		FilledPrice;						// 成交价格
	TDAStringType		FilledDate;							// 成交日期(yyyy-MM-dd)
	TDAStringType		FilledTime;							// 成交时间(hh:mm:ss)
	TDAStringType		Commsion;							// 成交手续费
	TDAStringType		OrderNumber;						// 委托数量
	TDAStringType		OrderPrice;							// 委托价格
	TDAStringType		DeliveryDate;						// 合约交割日期(yyyyMMdd)
	TDAStringType		FilledType;							// 成交类别(N：普通下单成交；C、T：调期模拟成交)
	TDAStringType		OrderType;							// 定单类型（1=限价单, 2=市价单，3=限价止损（stop to limit），4=止损（stop to market）
	TDAStringType		ValidDate;							// 有效日期（1=当日有效, 2=永久有效）
	TDAStringType		AddReduce;							// 开仓还是平仓：1=开仓 2=平仓，3=平今，4=平昨
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询合约请求
struct CFutureQryInstrumentField
{
	TDAIntType			PageIndex;							// 查询多少条,每次返回的条数
	TDAStringType		ExchangeNo;							// 交易所代码，如果填写值，查询一个交易所的合约
	TDAStringType		CommodityNo;						// 合约代码。查询单个合约	
	TDAStringType		CommodityType;						// 商品类别 
	TDAStringType		ContractNo;							// 合约NO
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询合约返回
struct CFutureRspInstrumentField
{
	TDAStringType		CommodityCode;						// 商品编号合约NO 
	TDAStringType		ExchangeNo;							// 交易所编号
	TDAStringType		ContractNo;							// 合约NO
	TDAStringType		ContractFName;						// 合约名
	TDAStringType		CommodityNo;						// 商品编号
	TDAStringType		CommodityFName;						// 商品名 
	TDAStringType		CommodityType;						// 商品类别 
	TDAStringType		CommodityFCurrencyNo;				// 货币编号 
	TDAStringType		CurrencyFName;						// 货币名称 
	TDADoubleType		ProductDot;							// 点值（一个最小跳点的价值）
	TDADoubleType		UpperTick;							// 最小变动单位 
	TDAStringType		ExchangeName;						// 交易所名称 
	TDADoubleType		LastSettlePrice;					// 上日结算价 
	TDAStringType		TradeMonth;							// 交易月 (yyyyMM)/交割日 (yyyyMMdd)
	TDAIntType			DotNum;								// 行情小数点位数
	TDAIntType			LowerTick;							// 进阶单位
	TDAIntType			DotNumCarry;						// 调期小数点位数
	TDADoubleType		UpperTickCarry;						// 调期最小变动单位
	TDAStringType		FirstNoticeDay;						// 首次通知日 (yyyyMMdd)
	TDADoubleType		FreezenPercent;						// 冻结保证金百分比 （上海能源买入保证金百分比）
	TDADoubleType		FreezenMoney;						// 冻结保证金固定值 
	TDADoubleType		FeeMoney;							// 固定手续费 
	TDADoubleType		FeePercent;							// 百分比手续费 
	TDADoubleType		PriceStrike;						// 现货商品昨结算价 
	TDADoubleType		ProductDotStrike;					// 现货商品点值  
	TDADoubleType		UpperTickStrike;					// 现货商品最小变动单位 
	TDAStringType		LastTradeDay;						// 最后交易日 (yyyyMMdd)
	TDAStringType		LastUpdateDay;						// 最后更新日 (yyyyMMdd)
	TDADoubleType		CriticalPrice;						// 期权临界价格 
	TDADoubleType		CriticalMinChangedPrice;			// 期权临界价格以下的最小跳点 
	TDAStringType		ExchangeSub;						// 实际交易所(CME细分成3个交易所:CME,CME_COMEX,CME_NYMEX)
	TDAStringType		OptionType;							// 期权类型(R：看涨；F：看跌)
	TDAStringType		OptionMonth;						// 期权年月(yyyyMM)
	TDAStringType		OptionStrikePrice;					// 期权执行价格
	TDAStringType		OptionCommodityNo;					// 期权对应期货商品编号（上海能源卖出保证金百分比）
	TDAStringType		OptionContractNo;					// 期权对应期货合约编号
	TDAStringType		ContractFNameEN;					// 合约名（英文）
	TDAStringType		CommodityFNameEN;					// 商品名（英文）
	TDAStringType		OptionStyle;						// 期权类别(E：欧式；A：美式)
};
// 查询交易所请求
struct CFutureQryExchangeField
{
	TDAStringType		ProductGroupID;
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询交易所返回
struct CFutureRspExchangeField
{
	TDAStringType		ExchangeNo;							// 交易所编号
	TDAStringType		ExchangeName;						// 交易所名称
	TDAStringType		SettleType;							// 交易所类型（HK：港股；US：美股）
	TDAStringType 		NameEN;								// 交易所名称（英文）
};
// 查询资金请求
// Query fund
struct CFutureQryCapitalField
{
	TDACharType			Unused;								// 不使用
															// No use

	TDAStringType		ErrorDescription;					// 错误信息
															// Error description
};
// 查询资金返回
// Query fund return struct
struct CFutureRspCapitalField
{
	TDAStringType		UserId;								// 用户标识
															// User id

	TDAStringType		Deposit;							// 入金
															// Deposit

	TDAStringType		Withdraw;							// 出金
															// Withdraw

	TDAStringType		TodayTradableFund;					// 旧：今可用；新：今日可用于交易的资金量
															// Today tradable fund amount

	TDAStringType		TodayInitialBalance;				// 旧：今结存；新：当日期初权益
															// Today inital balance

	TDAStringType		TodayRealtimeBalance;				// 旧：今权益；新：当日实时浮动权益
															// Today realtime floating balance with Profit&Loss

	TDAStringType		FrozenFund;							// 冻结资金
															// Frozen fund

	TDAStringType		Commission;							// 佣金
															// Commission

	TDAStringType		InitialMargin;						// 旧：保证金；新：初始保证金
															// Initial margin
								
	TDAStringType		YdTradableFund;						// 旧：昨可用；新：昨日可用于交易的资金量
															// Yesterday tradable fund amount

	TDAStringType		YdInitialBalance;					// 旧：昨结存；新：昨日期初权益
															// Yesterday inital balance

	TDAStringType		YdFinalBalance;						// 旧：昨权益；新：昨日期末权益
															// Yesterday final balance with Profit&Loss

	TDAStringType		ProfitLoss;							// 浮动盈亏
															// Profit and loss

	TDAStringType		CurrencyNo;							// 币种编号 
															// Currency No

	TDAMoneyType		CurrencyRate;						// 货币与基本的汇率
															// Currency rate

	TDAMoneyType		LMEUnexpiredPL;						// LME未到期平盈
															// LME unexpired profit&losss

	TDAMoneyType		LMEUnaccountPL;						// LME未结平盈
															// LME unaccounting profit&losss

	TDAMoneyType		MaintenanceMargin;					// 维持保证金
															// Maintenance margin

	TDAMoneyType		Premium;							// 期权权利金
															// Premium for options

	TDAMoneyType		CreditAmount;						// 信任额度
															// Credit amount
	
	TDAMoneyType		IntialFund;							// 初始资金
															// Intial fund

	TDAStringType		FundAccountNo;						// 资金帐号 
															// Fund account No
							
	TDAMoneyType		TradeLimit;							// 交易限额
															// Trade limit

	TDAMoneyType		CanCashOutMoneyAmount;				// 可取资金
															// Can cash out money amount

	TDAMoneyType		DepositInterest;					// 月存款利息
															// Monthly deposit interest

	TDAMoneyType		LoanInterest;						// 月欠款利息
															// Monthly loan interest

	TDAStringType		ErrorDescription;					// 错误信息
															// Error description
};
// 查询持仓请求
struct CFutureQryPositionField
{
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询持仓返回
struct CFutureRspPositionField
{
	TDAStringType		MatchDate;							// 成交日期（yyyyMMdd）
	TDAStringType		MatchNo;							// 成交编号
	TDAStringType		ClientNo;							// 客户编号
	TDAStringType		ExchangeNo;							// 交易所编号
	TDAStringType		CommodityNo;						// 商品编号
	TDAStringType		ContractNo;							// 合约编号
	TDAStringType		Direct;								// 买卖方向（1：买；2：卖）
	TDAVolumeType		HoldVol;							// 持仓数
	TDAPriceType		HoldPrice;							// 开仓均价（原始开仓价）
	TDAStringType		CurrencyNo;							// 货币编号
	TDAPriceType		ForciblyPrice;						// 结算后的持仓均价
	TDAStringType		Account;							// 资金账号
	TDAStringType		HoldType;							// 持仓类型（0：昨仓；1：今仓）
	TDAStringType		DeliveryDate;						// 合约交割日期(yyyyMMdd)
	TDAStringType		ExchangeName;						// 交易所名称(客户端自己取得)
	TDAStringType		CurrencyName;						// 货币名称(客户端自己取得)
	TDAStringType		ContCode;							// 合约代码（商品编号+合约编号）(客户端自己取得)
	TDAPriceType		HoldMargin;							// 持仓保证金 add 20141222
};
// 查询跳点请求
struct CFutureQryTickField
{
	TDACharType			Unused;								// 不使用
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询跳点返回
struct CFutureRspTickField
{
	TDAStringType		UpperTickCode;						// 最小变动单位代码
	TDAStringType		PriceFrom;							// 最小变动单位开始行情价格
	TDAStringType		UpperTick;							// 行情最小变动单位
	TDAStringType		ProductDot;							// 最小变动单位对应的点值
	TDAStringType		DotNum;								// 行情小数位数
	TDAStringType		LowerTick;							// 进价单位
};
// 查询货币请求
struct CFutureQryCurrencyField
{
	TDACharType			Unused;								// 不使用
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询货币返回
struct CFutureRspCurrencyField
{
	TDAStringType		CurrencyNo;							// 货币编号
	TDAIntType			IsBase;								// 基币货币编号
	TDADoubleType		ChangeRate;							// 与基币的换算汇率
	TDAStringType		CurrencyName;						// 货币名称
	TDAStringType		CurrencyNameEN;						// 货币名称（英文）
};
// 查询开收盘时间请求
struct CFutureQryCommodityField
{
	TDAStringType		UpdateDate;							// 更新日期
	TDAStringType		ExchangeNo;							// 交易所编号
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询商品列表
struct CFutureRspCommodityField
{
	TDAStringType		CommodityNo;						// 商品编号
	TDAStringType		ExchangeNo;							// 交易所编号
	TDAStringType		CommodityType;						// 商品类型	
	TDAStringType		Name;								// 商品名称
	TDAStringType		Enabled;							// 交易状态
	TDAStringType		RegDate;							// 更新日	
	TDAStringType		CurrencyNo;							// 币种编号	
	TDADoubleType		ProductDot;							// 账面跳点值
	TDADoubleType		LowerTick;							// 进阶单位
	TDADoubleType		UpperTick;							// 最小变动单位	
	TDAIntType			DotNum;								// 行情小数点位数
	TDAIntType			StrikeCommodityId;					// 策略合约ID
	TDAStringType		OptionStyle;						// 期权类型
	TDAStringType		ExchangeNo2;						// 交易所编号 (在ExchangeNo下的交易所比如COMEX NYMEX)
	TDAStringType		IsSFuture;							// 是否是个股期货
};
// 查询交易所开收盘时间请求
struct CFutureQryExchangeTimeField
{
	TDACharType			Unused;								// 不使用
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询商品开收盘时间请求
struct CFutureQryCommodityTimeField
{
	TDAStringType		ExchangeNo;							// 交易所代码
	TDAStringType		CommodityNo;						// 产品代码
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询交易所开收盘时间返回
struct CFutureRspExchangeTimeField
{
	TDAStringType		Year;								//  当前年份
	TDAStringType		SummerBegin;						//  夏令时开始时间
	TDAStringType		WinterBegin;						//  冬令时开始时间
	TDAStringType		ExchangeNo;							//  交易所代码
	TDAStringType		Name;								//  交易所名称
};
// 查询商品开收盘时间返回
struct CFutureRspCommodityTimeField
{
	TDAStringType		CrossTrade;							// 是否跨日
	TDAStringType		Stage;								// 状态
	TDAStringType		Summer;								// 2冬令 1夏令	
	TDAStringType		Opendate;							// 产品开市时间
	TDAStringType		Closingdate;						// 产品收市时间
	TDAStringType		CommodityNo;						// 产品代码
	TDAStringType		ComName;							// 产品名称
	TDAStringType		ExchangeNo;							// 交易所代码
	TDAStringType		ExName;								// 交易所名称
};
// 查询版本请求
struct CFutureQryVersionField
{
	TDAStringType		UserId;								// 用户标识
	TDAStringType		UserPwd;							// 用户密码
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询版本返回
struct CFutureRspVersionField
{
	TDAStringType		Version;							// 版本号
	TDAStringType		MustUpdate;							// 是否必须更新到新版本才能正常使用（0：可以不更新；1：必须更新）
	TDAStringType		MustVersion;						// 必须要更到的版本号
	TDAStringType		VersionContent_CN;					// 版本内容中文
	TDAStringType		VersionContent_US;					// 版本内容英文
};
//-------------------------------------------------------------------------
// 推送订单变化
// Push order change struct
struct CFutureRtnOrderField
{
	TDAStringType		LocalNo;							// 本地编号 API用户的程序指定的本地订单编号
															// Order ID assigned by API user program

	TDAStringType		ExchangeCode;						// 交易所代码
															// Exchange code

	TDAStringType		ContractCode;						// 合约代码
															// Contract code

	TDAStringType		OrderNo;							// 定单号 交易所系统给定的订单号，LocalNo:SystemNo:OrderNo是一对一对一的关系
															// the order number given by the exchange system ,LocalNo:SystemNo:OrderNo,these three are one-to-one relationships

	TDAIntType			OrderQty;							// 委托数量
															// Quantity of entrusted order

	TDAIntType			FilledQty;							// 已成交数量
															// Filled quantity

	TDAPriceType		FilledAvgPrice;						// 成交均价
															// Filled average price	

	TDAIntType			LongPositionQty;					// 持买数量
															// Long position quantity

	TDAPriceType		LongPosAveragePrx;					// 旧：持买开仓均价；新：多仓成交均价
															// Long - position average price

	TDAPriceType		CNLongPosAveragePrx;				// 中国品种(比如INE/sc)盯市用的平均价
															// Long - position average price for Chinese varieties (e.g., INE/sc)

	TDAIntType			ShortPositionQty;					// 持卖数量
															// Short position quantity

	TDAPriceType		ShortPosAveragePrx;					// 旧：持卖开仓均价；新：空仓成交均价
															// Short position transaction average price

	TDAPriceType		CNShortPosAveragePrx;				// 中国品种(比如INE/sc)盯市用的平均价
															// Short - position average price for Chinese varieties (e.g., INE/sc)
	// 是否已经撤单：
	//	    DERIVATIVE_ORDER_IS_NOT_CANCELLED：没有；DERIVATIVE_ORDER_IS_CANCELLED：已撤单														// Short  position average price for Chinese varieties (e.g., INE/sc)
	// Order is cancelled ：
	//		DERIVATIVE_ORDER_IS_NOT_CANCELLED=order is not cancelled
	//		DERIVATIVE_ORDER_IS_CANCELLED=order is cancelled
	TDAStringType		IsCanceled;							
					
	TDAPriceType		FilledTotalFee;						// 成交总的手续费
															// Total transaction fee

	TDAIntType			SequenceNo;							// 顺序号
															// Sequence No

	TDAStringType		AccountNo;							// 资金帐号
															// Account No
	//持仓类型:
	//		DERIVATIVE_POSITION_TYPE_Y=昨仓,DERIVATIVE_POSITION_TYPE_T=今仓
	//Position type:
	//		DERIVATIVE_POSITION_TYPE_Y=yesterday position, DERIVATIVE_POSITION_TYPE_T=today position
	TDAStringType		PositionType;						
															

	TDAPriceType		LongPosMargin;						// 持买保证金
															// Long position margin

	TDAPriceType		ShortPosMargin;						// 持卖保证金
															// Short position margin

	TDAPriceType		CurrPrice;							// 最新价
															// Current price

	TDAPriceType		ProfitLoss;							// 浮动盈亏
															// Profit loss
};
// 推送资金变化
struct CFutureRtnCapitalField
{
	TDAStringType		ClientNo;							// 客户号
	TDAStringType		AccountNo;							// 资金帐号
	TDAStringType		CurrencyNo;							// 币种
	TDAPriceType		Available;							// 今可用
	TDAPriceType		YAvailable;							// 昨可用
	TDAPriceType		CanCashOut;							// 今可出
	TDAPriceType		Money;								// 今结存
	TDAPriceType		ExpiredProfit;						// 平仓盈亏
	TDAPriceType		FrozenDeposit;						// 冻结资金
	TDAPriceType		Fee;								// 手续费
	TDAPriceType		Deposit;							// 保证金
	TDAPriceType		KeepDeposit;						// 维持保证金
	TDAIntType			Status;								// 状态
	TDAPriceType		InMoney;							// 入金
	TDAPriceType		OutMoney;							// 出金
	TDAPriceType		UnexpiredProfit;					// 未到期平盈
	TDAPriceType		TodayTotal;							// 今权益
	TDAPriceType		UnaccountProfit;					// 未结平盈
	TDAPriceType		Royalty;							// 期权权利金
	TDAStringType		ExchangeNo;							// 交易所代码
	TDAStringType		TreatyCode;							// 合约代码
	TDAStringType		OrderNo;							// 定单号
	TDAIntType			OrderNumber;						// 委托数量
	TDAIntType			FilledNumber;						// 已成交数量
	TDAPriceType		FilledAdvPrice;						// 成交均价
	TDAIntType			BuyHoldNumber;						// 持买数量
	TDAPriceType		BuyHoldOpenPrice;					// 持买开仓均价
	TDAPriceType		BuyHoldPrice;						// 持买均价
	TDAIntType			SaleHoldNumber;						// 持卖数量
	TDAPriceType		SaleHoldOpenPrice;					// 持卖开仓均价
	TDAPriceType		SaleHoldPrice;						// 持卖均价
	TDAStringType		IsCanceled;							// 是否已经撤单（0：没有；1：已撤单）
	TDAPriceType		FilledTotalFee;						// 成交总的手续费
	TDAPriceType		Credit;								// 信任额度
	TDAPriceType		MarginLimit;						// 孖展上限额度 20150727 added for 港股
	TDAPriceType		BorrowValue;						// 借货价值 20150727 added for 港股
	TDAPriceType		MortgageMoney;						// 按揭价值 20150727 added for 港股
	TDAPriceType		T1;									// T1 20160219 added for 港股
	TDAPriceType		T2;									// T2 20160219 added for 港股
	TDAPriceType		T3;									// T3 20160219 added for 港股
	TDAPriceType		TN;									// Tn 20160219 added for 港股
	TDAPriceType		TradeLimit;							// 交易限额
	TDAPriceType		FCrossMax;							// 跨市场资金限额
	TDAPriceType		SellFreezenMoney;					// 卖空冻结资金
	TDAPriceType		SellInterest;						// 卖空利息
	TDAPriceType		SellNeedAddMargin;					// 需补按金
};
// 推送持仓变化
typedef CFutureRtnOrderField CFutureRtnPositionField;
// 推送成交返回
typedef CFutureRspTradeField CFutureRtnTradeField;
//-------------------------------------------------------------------------
// 获取问题
struct CFutureReqGetQuestionField
{
	TDAIntType			Unused;								// 用户帐号
	TDAStringType		ErrorDescription;					// 错误信息
};
// 获取问题返回
struct CFutureRspQuestionField
{
	TDAStringType		QuestionType;						// 问题类型	0：国际期货，1：国际股票
	TDAStringType		QuestionId;							// 问题编号
	TDAStringType		QuestionCN;							// 问题（中文）
	TDAStringType		QuestionEN;							// 问题（英文）
};
// 安全验证请求
struct CFutureReqSafeVerifyField
{
	TDAStringType		UserId;								// 用户帐号
	TDAStringType		UserPwd;							// 交易密码
	TDAStringType		Type;								// 类别
	TDAStringType		Question;							// 密保问题编号
	TDAStringType		Answer;								// 密保问题答案
	TDAStringType		MobileNumber;						// 手机号
	TDAStringType		VerifyCode;							// 手机验证码
	TDAStringType		SaveMac;							// 是否需要记住该设备
	TDAStringType		MacAddress;							// MAC地址
	TDAStringType		ErrorDescription;					// 错误信息
};
// 设置验证问题答案
struct CFutureReqSetVerifyQAField
{
	TDAStringType		UserId;								// 用户帐号
	TDAStringType		UserPwd;							// 交易密码
	TDAStringType		Type;								// 类别
	TDAStringType		Question;							// 密保问题编号
	TDAStringType		Answer;								// 密保问题答案
	TDAStringType		MobileNumber;						// 手机号
	TDAStringType		VerifyCode;							// 手机验证码
	TDAStringType		SaveMac;							// 是否需要记住该设备
	TDAStringType		ErrorDescription;					// 错误信息
};
// 请求验证码
struct CFutureReqVerifyCodeField
{
	TDAStringType		UserId;								// 用户帐号
	TDAStringType		UserPwd;							// 交易密码
	TDAStringType		Type;								// 类别
	TDAStringType		Question;							// 密保问题编号
	TDAStringType		Answer;								// 密保问题答案
	TDAStringType		MobileNumber;						// 手机号
	TDAStringType		VerifyCode;							// 手机验证码
	TDAStringType		ErrorDescription;					// 错误信息
};
//-------------------------------------------------------------------------
// 查询持仓合计请求
struct CFutureQryTotalPositionField
{
	TDAStringType		AccountNo;							// 资金账号
	TDAStringType		ErrorDescription;					// 错误信息
};

// 查询持仓合计返回
// Query position total return
typedef CFutureRtnOrderField CFutureRspTotalPositionField;

// 查询策略请求
struct CFutureQryStrategyField
{
	TDAStringType		ExchangeNo;							// 交易所代码，如果填写值，查询一个交易所的策略
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询策略返回
struct CFutureRspStrategyField
{
	TDAStringType		CommodityCode;					// 商品编号合约NO 
	TDAStringType		ExchangeNo;						// 交易所编号
	TDAStringType		ContractNo;						// 合约NO
	TDAStringType		ContractFName;					// 合约名
	TDAStringType		CommodityNo;					// 商品编号
	TDAStringType		CommodityFName;					// 商品名 
	TDAStringType		CommodityType;					// 商品类别 
	TDAStringType		CommodityFCurrencyNo;			// 货币编号 
	TDAStringType		CurrencyFName;					// 货币名称 
	TDAPriceType		ProductDot;						// 点值（一个最小跳点的价值）
	TDAPriceType		UpperTick;						// 最小变动单位 
	TDAStringType		ExchangeName;					// 交易所名称 
	TDAPriceType		LastSettlePrice;				// 上日结算价 
	TDAStringType		TradeMonth;						// 交易月 (yyyyMM)/交割日 (yyyyMMdd)
	TDAIntType			DotNum;							// 行情小数点位数
	TDAIntType			LowerTick;						// 进阶单位
	TDAIntType			DotNumCarry;					// 调期小数点位数
	TDAPriceType		UpperTickCarry;					// 调期最小变动单位
	TDAStringType		FirstNoticeDay;					// 首次通知日 (yyyyMMdd)
	TDAPriceType		FreezenPercent;					// 冻结保证金百分比 （上海能源买入保证金百分比）
	TDAPriceType		FreezenMoney;					// 冻结保证金固定值 
	TDAPriceType		FeeMoney;						// 固定手续费 
	TDAPriceType		FeePercent;						// 百分比手续费 
	TDAPriceType		PriceStrike;					// 现货商品昨结算价 
	TDAPriceType		ProductDotStrike;				// 现货商品点值  
	TDAPriceType		UpperTickStrike;				// 现货商品最小变动单位 
	TDAStringType		LastTradeDay;					// 最后交易日 (yyyyMMdd)
	TDAStringType		LastUpdateDay;					// 最后更新日 (yyyyMMdd)
	TDAPriceType		CriticalPrice;					// 期权临界价格 
	TDAPriceType		CriticalMinChangedPrice;		// 期权临界价格以下的最小跳点 
	TDAStringType		ExchangeSub;					// 实际交易所(CME细分成3个交易所:CME,CME_COMEX,CME_NYMEX)
	TDAStringType		OptionType;						// 期权类型(R：看涨；F：看跌)
	TDAStringType		OptionMonth;					// 期权年月(yyyyMM)
	TDAStringType		OptionStrikePrice;				// 期权执行价格
	TDAStringType		OptionCommodityNo;				// 期权对应期货商品编号（上海能源卖出保证金百分比）
	TDAStringType		OptionContractNo;				// 期权对应期货合约编号
	TDAStringType		ContractFNameEN;				// 合约名（英文）
	TDAStringType		CommodityFNameEN;				// 商品名（英文）
	TDAStringType		OptionStyle;					// 期权类别(E：欧式；A：美式)
};
// 查询策略明细请求
struct CFutureQryStrategyDetailField
{
	TDAStringType		StartegyCommodityNo;				// 合约代码
	TDAStringType		ErrorDescription;					// 错误信息
};
// 查询策略明细返回
struct CFutureRspStrategyDetailField
{
	TDAStringType		StartegyCommodityNo;				// 策略商品编号
	TDAStringType		StartegyContractNo;					// 策略合约组合编号
	TDAStringType		Price;								// 价格
	TDAIntType			LegNum;								// 腿数（2个合约套利为2腿）
	TDAStringType		LastTradeDate;						// 最后交易日（yyyy-MM-dd）
	TDAIntType			SeqId;								// 策略中合约顺序号
	TDAStringType		CommodityNo;						// 策略中合约的商品编号
	TDAStringType		ContractNo;							// 策略中合约的合约编号
	TDAStringType		Direct;								// 买卖方向（1表示买，2表示卖）
	TDAIntType			Quantity;							// 合约下单数量
	TDAStringType		Model;								// 合约下单数量
	TDAStringType		ModifyDate;							// 最后更新日期（yyyy-MM-dd）
	TDAStringType		OrderMethod;						// 下单类型（限价，市价）
	TDAPriceType		PriceTolerance;						// 价格容忍度
	TDAPriceType		PriceParam;							// 价格乘数参数
	TDAIntType			SuportQuantity;						// 合约最小对盘挂单量
	TDAIntType			MinMove;							// 合约最小移动
	TDAIntType			TimerOrder;							// 合约定时追单
	TDAStringType		TimerOrderBeyondNum;				// 定时追单滑点数
	TDAIntType			TimerOrderPrice;					// 合约定时追价
	TDAStringType		TimerOrderPriceBeyondNum;			// 定时追价滑点数
	TDAStringType		TimerOrderPriceTriggerNum;			// 定时追价触发次数
	TDAIntType			ZhiSunOrder;						// 止损追单
	TDAStringType		ZhiSunOrderBeyondNum;				// 止损追单滑点数
	TDAIntType			TimerPingCang;						// 合约定时平仓
	TDAStringType		TimerPingCangBeyondNum;				// 定时平仓滑点数
	TDAIntType			SafeDeep;							// 安全深度
	TDAIntType			MainRange;							// 主动区域
};



}//end of namespace Directaccess