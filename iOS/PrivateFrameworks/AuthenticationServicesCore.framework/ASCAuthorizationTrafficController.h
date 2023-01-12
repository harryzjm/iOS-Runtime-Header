//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface ASCAuthorizationTrafficController : NSObject
{
    NSMutableSet *_appsWithActiveRequests;
    NSObject<OS_dispatch_queue> *_clearanceQueue;
    NSObject<OS_dispatch_queue> *_trafficQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cancelAuthorizationForAppIdentifierIfNecessary:(id)arg1;
- (void)endAuthorizationForAppIdentifier:(id)arg1 clearanceHandler:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationForApplicationIdentifier:(id)arg1 withClearanceHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
