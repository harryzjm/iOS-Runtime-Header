//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary;

@interface CKDiscoverUserInfosOperation
{
    NSArray *_emailAddresses;
    NSArray *_userRecordIDs;
    CDUnknownBlockType _discoverUserInfosCompletionBlock;
    NSMutableDictionary *_emailsToUserInfos;
    NSMutableDictionary *_userRecordIDsToUserInfos;
}

@property(retain, nonatomic) NSMutableDictionary *userRecordIDsToUserInfos; // @synthesize userRecordIDsToUserInfos=_userRecordIDsToUserInfos;
@property(retain, nonatomic) NSMutableDictionary *emailsToUserInfos; // @synthesize emailsToUserInfos=_emailsToUserInfos;
@property(copy, nonatomic) CDUnknownBlockType discoverUserInfosCompletionBlock; // @synthesize discoverUserInfosCompletionBlock=_discoverUserInfosCompletionBlock;
@property(copy, nonatomic) NSArray *userRecordIDs; // @synthesize userRecordIDs=_userRecordIDs;
@property(copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (Class)operationInfoClass;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;
- (id)init;

@end

