//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeSequence/NSObject-Protocol.h>

@class BPSCompletion, BPSSubscription, NSError;
@protocol BPSPublisher;

@protocol BPSSubscriber <NSObject>
- (void)cancel;
- (void)receiveCompletion:(BPSCompletion *)arg1;
- (void)receiveSubscription:(BPSSubscription *)arg1;
- (long long)receiveInput:(id)arg1;

@optional
- (void)completeWithError:(NSError *)arg1;
- (void)requestNextEvents;
- (void)subscribeTo:(id <BPSPublisher>)arg1;
@end

