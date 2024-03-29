//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSyncOperationOptions, HMFTimer, NSArray, NSMutableArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSyncOperation : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_operationCompletions;
    NSUUID *_identifier;
    HMFTimer *_delayTimer;
    CDUnknownBlockType _operationBlock;
    HMDSyncOperationOptions *_options;
}

+ (id)cloudOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(_Bool)arg2 block:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cloudFetchSyncOperationWithCloudConflict:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cloudForcePushSyncOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cloudPushSyncOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cancelOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)postFetchOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)queryDatabaseOperationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDSyncOperationOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(retain, nonatomic) HMFTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)removeAllOperationCompletions;
- (void)updateOperationCompletionsWithArray:(id)arg1;
@property(readonly) NSArray *operationCompletions;
@property(readonly, nonatomic) NSString *zoneName;
@property(readonly, nonatomic) unsigned long long operationType;
- (id)description;
- (id)_initWithOptions:(id)arg1 syncBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end

