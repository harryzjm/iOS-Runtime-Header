//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CKDDiscoverUserIdentitiesOperation
{
    CDUnknownBlockType _discoverUserIdentitiesProgressBlock;
    NSArray *_userIdentityLookupInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *userIdentityLookupInfos; // @synthesize userIdentityLookupInfos=_userIdentityLookupInfos;
@property(copy, nonatomic) CDUnknownBlockType discoverUserIdentitiesProgressBlock; // @synthesize discoverUserIdentitiesProgressBlock=_discoverUserIdentitiesProgressBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_discoverIdentitiesWithLookupInfos:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
