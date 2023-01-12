//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentityCache, NSUUID;
@protocol MCMMetadata, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMDataProtectionChangeOperation : NSObject
{
    _Bool _retryIfLocked;
    _Bool _retried;
    int _newDataProtectionClass;
    int _changeType;
    id <MCMMetadata> _dataContainerMetadata;
    CDUnknownBlockType _retryStartBlock;
    CDUnknownBlockType _completionBlock;
    NSUUID *_internalChangeID;
    NSObject<OS_dispatch_queue> *_queue;
    MCMUserIdentityCache *_userIdentityCache;
}

+ (_Bool)deleteUpdateFileWithContainerIdentity:(id)arg1 error:(id *)arg2;
+ (id)urlForProtectionOperationWithContainerIdentity:(id)arg1;
+ (id)_readAndValidateDataProtectionUpdateAtURL:(id)arg1 userIdentityCache:(id)arg2 error:(id *)arg3;
+ (id)dataProtectionChangeOperationAtURL:(id)arg1 queue:(id)arg2 error:(id *)arg3;
+ (id)dataProtectionChangeOperationWithContainerMetadata:(id)arg1 settingClass:(int)arg2 retryingIfLocked:(_Bool)arg3 changeType:(int)arg4 queue:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSUUID *internalChangeID; // @synthesize internalChangeID=_internalChangeID;
@property(nonatomic) _Bool retried; // @synthesize retried=_retried;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy) CDUnknownBlockType retryStartBlock; // @synthesize retryStartBlock=_retryStartBlock;
@property(nonatomic) _Bool retryIfLocked; // @synthesize retryIfLocked=_retryIfLocked;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(nonatomic) int newDataProtectionClass; // @synthesize newDataProtectionClass=_newDataProtectionClass;
@property(retain, nonatomic) id <MCMMetadata> dataContainerMetadata; // @synthesize dataContainerMetadata=_dataContainerMetadata;
- (void)performChangeOperation;
- (_Bool)_runChangeOperationNeedToRetry:(_Bool *)arg1 withError:(id *)arg2;
- (_Bool)_deleteUpdateFileWithError:(id *)arg1;
- (_Bool)_onQueue_deleteUpdateFileWithError:(id *)arg1;
- (_Bool)_stillMostCurrentUpdate;
- (_Bool)_onQueue_stillMostCurrentUpdate;
- (_Bool)writeToDiskWithError:(id *)arg1;
- (_Bool)_onQueue_writeToDiskWithError:(id *)arg1;
- (id)initWithContainerMetadata:(id)arg1 newClass:(int)arg2 retryingIfLocked:(_Bool)arg3 changeType:(int)arg4 queue:(id)arg5 userIdentityCache:(id)arg6;
- (id)initWithContainerMetadata:(id)arg1 newClass:(int)arg2 retryingIfLocked:(_Bool)arg3 changeType:(int)arg4 internalChangeID:(id)arg5 queue:(id)arg6 userIdentityCache:(id)arg7;

@end

