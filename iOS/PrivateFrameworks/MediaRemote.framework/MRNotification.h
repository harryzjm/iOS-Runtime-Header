//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MRNotification : NSObject
{
    NSString *_notification;
    NSDictionary *_userInfo;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_xpcMessage;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage; // @synthesize xpcMessage=_xpcMessage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (id)initWithNotification:(id)arg1 userInfo:(id)arg2 queue:(id)arg3;

@end

