//
//  MyStoreViewController.h
//  TheStoreApp
//
//  Created by jiming huang on 12-7-3.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserVO.h"
#import "OrderVO.h"
#import "Page.h"
#import "OrderService.h"
#import "FavoriteService.h"
#import "FavoriteVO.h"
#import "ASIHTTPRequest.h"
#import "UserService.h"
#import "GlobalValue.h"
#import "Homepage.h"
#import "MyOrder.h"
#import "GoodReceiver.h"
#import "GroupBuyOrderDetail.h"
#import "UserManageTool.h"
#import "OrderDone.h"
#import "CheckOrder.h"
#import "MyCoupon.h"
#import "UseCoupon.h"
#import "BindViewController.h"
#import "OTSServiceHelper.h"

@interface MyStoreViewController : OTSBaseViewController<UITableViewDelegate,UITableViewDataSource, UnionPayDelegate,OrderDoneDelegate,CheckOrderDelegate> {
    IBOutlet UIScrollView *m_ScrollView;
    IBOutlet UILabel *m_NameLabel;
    IBOutlet UILabel *m_IntegralLabel;
    IBOutlet UILabel *m_BalanceLabel;
    IBOutlet UIButton *m_BalanceDetailBtn;
//    UITableView *m_MessageTable;
//    UITableView *m_OrderTable;
//    UITableView *m_CouponTable;
//    UITableView *m_ReceiverTable;
//    UITableView *m_FavoriteTable;
    UITableView* m_tableView;
    
    int m_ThreadStatus;
    BOOL m_ThreadRunning;
    
    UserVO *m_UserVO;
    
    CGFloat m_BalanceMoney;
    CGFloat m_FrozenMoney;
    int m_OrderCount;//正在处理的订单数量
    BOOL isBindMobile;//是否绑定手机
    NSNumber * bindMobileNum;//绑定的手机号码
}
@property(retain) UserVO                          *m_UserVO;
@property(nonatomic,retain)IBOutlet UILabel       *m_NameLabel;
@property(nonatomic,retain)IBOutlet UILabel       *m_IntegralLabel;
@property(nonatomic,retain)IBOutlet UILabel       *m_BalanceLabel;
@property(nonatomic,retain)IBOutlet UIButton      *m_BalanceDetailBtn;

-(void)initMyStore;
-(MyStoreViewController *)updateMyStore;
-(void)setUpThread;
-(void)stopThread;
-(IBAction)toBalanceDetail;
-(void)selectAndRefreshMe;
-(void)setBadge:(NSString*)aBadgeValue; // 设置badge
-(void)logout;
-(void)enterCoupon;
-(void)enter1mallOrder;
-(void)enterOrder;
-(void)enterOrderSubmitOKVC:(NSString *)onlineOrderId;
//-(void)enterChoosePayMethod:(NSNumber *) gateway;
-(void)enterOrderDetail:(NSString *)onlineOrderId;
-(void)enterOrderDone:(NSString *)onlineOrderId;
@end
