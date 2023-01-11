//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLEngineScopeStorage, CPLEngineScopedTask, CPLScopeFilter, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CPLEngineMultiscopeSyncTask <CPLEngineSyncTaskDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_currentTaskQueue;
    CPLEngineScopedTask *_currentTask;
    NSMutableArray *_coveredScopes;
    NSMutableArray *_excludedScopes;
    NSMutableDictionary *_transportScopes;
    NSString *_clientCacheIdentifier;
    CPLEngineScopeStorage *_scopes;
    CPLScopeFilter *_scopeFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CPLScopeFilter *scopeFilter; // @synthesize scopeFilter=_scopeFilter;
@property(readonly, nonatomic) CPLEngineScopeStorage *scopes; // @synthesize scopes=_scopes;
- (id)phaseDescription;
- (id)phaseDescriptionLastChangeDate:(id *)arg1;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)cancel;
- (void)setForeground:(_Bool)arg1;
- (void)setForceSync:(_Bool)arg1;
- (void)launch;
- (void)_launchTaskForNextScope;
@property(readonly, nonatomic) _Bool shouldSkipScopesWithMissingTransportScope;
- (_Bool)shouldContinueAfterError:(id)arg1 fromTask:(id)arg2;
- (_Bool)shouldProcessScope:(id)arg1 inTransaction:(id)arg2;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4;
- (_Bool)shouldStartTaskInTransaction:(id)arg1;
- (void)dispatchAsyncWithCurrentSubtask:(CDUnknownBlockType)arg1;
- (id)_currentScope;
- (void)_setCurrentTask:(id)arg1;
- (id)_currentTask;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
