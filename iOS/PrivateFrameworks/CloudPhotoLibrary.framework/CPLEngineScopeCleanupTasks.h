//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSMutableArray, NSString;

@interface CPLEngineScopeCleanupTasks <CPLAbstractObject>
{
    long long _currentCleanupScopeIndex;
    NSMutableArray *_remainingStoragesToCleanup;
    _Bool _shouldRequestACleanupToScheduler;
}

+ (id)scopeTypeDescriptionForScopeType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (_Bool)hasCleanupTasks;
- (_Bool)cleanupStepHasMore:(_Bool *)arg1 error:(id *)arg2;
- (_Bool)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)scopeType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

