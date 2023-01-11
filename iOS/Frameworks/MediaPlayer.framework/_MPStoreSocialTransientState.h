//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelSocialPerson, MPStoreSocialRequestOperation;
@protocol OS_dispatch_queue;

@interface _MPStoreSocialTransientState : NSObject
{
    long long _followState;
    long long _followPendingRequestState;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPStoreSocialRequestOperation *_latestFollowOperation;
    MPStoreSocialRequestOperation *_latestFollowPendingRequestOperation;
    MPModelSocialPerson *_person;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) MPModelSocialPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_endIfNeeded;
- (id)newOperationForTransientFollowPendingRequestState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long followPendingRequestState;
- (id)newOperationForTransientFollowState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long followState;
- (id)initWithPerson:(id)arg1;

@end

