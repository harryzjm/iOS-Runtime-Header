//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSArray, SMSessionConfigurationEnumerationOptions, SMSessionStateEnumerationOptions;

@protocol SMSessionStoreProtocol <NSObject>
- (void)clearSessionsWithHandler:(void (^)(NSError *))arg1;
- (void)fetchSessionConfigurationsWithOptions:(SMSessionConfigurationEnumerationOptions *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchSessionManagerStatesWithOptions:(SMSessionStateEnumerationOptions *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)storeSessionConfigurations:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
- (void)storeSessionManagerStates:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
@end

