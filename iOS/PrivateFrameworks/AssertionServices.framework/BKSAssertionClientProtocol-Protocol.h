//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssertionServices/NSObject-Protocol.h>

@class BKSAssertionEvent, NSObject, NSString;
@protocol BKSAssertionClientHandler, OS_dispatch_queue;

@protocol BKSAssertionClientProtocol <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;
- (void)sendDestroyEvent:(BKSAssertionEvent *)arg1;
- (void)sendUpdateEvent:(BKSAssertionEvent *)arg1;
- (_Bool)sendCreateEvent:(BKSAssertionEvent *)arg1 error:(id *)arg2;
- (void)unregisterClientHandlerForAssertionIdentifier:(NSString *)arg1;
- (void)registerClientHandler:(id <BKSAssertionClientHandler>)arg1 forAssertionIdentifier:(NSString *)arg2;
@end
