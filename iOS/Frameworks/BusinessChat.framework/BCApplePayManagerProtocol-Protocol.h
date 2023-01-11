//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BCMessage, UIWindow;
@protocol BCApplePayManagerDelegate;

@protocol BCApplePayManagerProtocol
@property(nonatomic) __weak id <BCApplePayManagerDelegate> delegate;
- (id)initWithMessage:(BCMessage *)arg1 delegate:(id <BCApplePayManagerDelegate>)arg2;
- (BCMessage *)message;
- (void)presentApplePayWithWindow:(UIWindow *)arg1;
- (long long)applePayStatus;
@end
