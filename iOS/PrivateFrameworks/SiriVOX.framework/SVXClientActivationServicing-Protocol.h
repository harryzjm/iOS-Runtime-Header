//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriVOX/NSObject-Protocol.h>

@class NSDictionary, SVXButtonEvent, SVXSystemEvent;
@protocol SVXClientActivationServiceDelegate;

@protocol SVXClientActivationServicing <NSObject>
@property(nonatomic) __weak id <SVXClientActivationServiceDelegate> delegate;
- (void)deactivateWithUserInfo:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
- (void)activateWithSystemEvent:(SVXSystemEvent *)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)prewarmForSystemEvent:(SVXSystemEvent *)arg1 completion:(void (^)(void))arg2;
- (void)activateWithButtonEvent:(SVXButtonEvent *)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)activateWithUserInfo:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)enqueueButtonEvent:(SVXButtonEvent *)arg1;
- (void)handleButtonEvent:(SVXButtonEvent *)arg1;
@end
