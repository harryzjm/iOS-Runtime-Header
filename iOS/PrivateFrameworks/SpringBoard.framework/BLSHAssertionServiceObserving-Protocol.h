//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSError;
@protocol BLSAsserting, BLSHAssertionAttributeHandlerService;

@protocol BLSHAssertionServiceObserving <NSObject>

@optional
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 didRestartTimeoutTimerForAssertion:(id <BLSAsserting>)arg2;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 didCancelAssertion:(id <BLSAsserting>)arg2 withError:(NSError *)arg3;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 willCancelAssertion:(id <BLSAsserting>)arg2;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 didResumeAssertion:(id <BLSAsserting>)arg2;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 didPauseAssertion:(id <BLSAsserting>)arg2;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 failedToAcquireAssertion:(id <BLSAsserting>)arg2 withError:(NSError *)arg3;
- (void)service:(id <BLSHAssertionAttributeHandlerService>)arg1 didAcquireAssertion:(id <BLSAsserting>)arg2;
@end

