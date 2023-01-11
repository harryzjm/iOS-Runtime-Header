//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSProcessIdentity-Protocol.h>
#import <FrontBoard/FBSProcessInternal-Protocol.h>
#import <FrontBoard/FBUIProcess-Protocol.h>

@class BSMachPortTaskNameRight, BSProcessDeathWatcher, BSProcessHandle, FBProcessState, FBSProcessHandle, FBWorkspace, NSHashTable, NSString;
@protocol FBProcessDelegate, OS_dispatch_queue;

@interface FBProcess : NSObject <BSDescriptionProviding, FBUIProcess, FBSProcessInternal, FBSProcessIdentity>
{
    NSObject<OS_dispatch_queue> *_queue;
    FBProcessState *_state;
    NSString *_name;
    NSString *_jobLabel;
    NSString *_bundleIdentifier;
    NSString *_executablePath;
    BSProcessHandle *_handle;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBWorkspace *_workspace;
    NSHashTable *_observers;
    id <FBProcessDelegate> _delegate;
    long long _backgroundingPolicy;
    _Bool _supportsSuspendOnLock;
    int _pid;
    _Bool _running;
    BSProcessDeathWatcher *_processDeathObserver;
    _Bool _updatingState;
    long long _executableOnSystemPartition;
}

@property(readonly, nonatomic) FBWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly, nonatomic) long long backgroundingPolicy; // @synthesize backgroundingPolicy=_backgroundingPolicy;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (_Bool)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id *)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (void)_watchdogStopped:(id)arg1;
- (void)_watchdogStarted:(id)arg1;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
@property(readonly, retain, nonatomic) BSMachPortTaskNameRight *taskNameRight;
@property(readonly, retain, nonatomic) FBSProcessHandle *handle;
@property(readonly, nonatomic) long long type;
- (_Bool)isSystemApplicationProcess;
- (_Bool)isApplicationProcess;
- (_Bool)isExtensionProcess;
- (void)_queue_toggleProcessDeathObserver:(_Bool)arg1;
- (void)_queue_processDidExit;
- (void)_queue_callExitObservers;
- (void)_queue_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_createWorkspace;
- (void)_queue_configureWithHandle:(id)arg1;
- (id)_queue;
@property(nonatomic, getter=_queue_supportsSuspendOnLock, setter=_queue_setSupportsSuspendOnLock:) _Bool supportsSuspendOnLock; // @synthesize supportsSuspendOnLock=_supportsSuspendOnLock;
- (void)_queue_noteSceneCreationAcknowledged:(id)arg1;
- (void)_queue_sceneLifecycleStateChanged:(id)arg1;
@property(nonatomic, getter=_queue_visibility, setter=_queue_setVisibility:) int queue_visibility;
- (int)_effectiveVisibilityForSceneSettings:(id)arg1 underLock:(_Bool)arg2;
- (_Bool)_isEffectivelyForegroundForSceneSettings:(id)arg1 underLock:(_Bool)arg2;
- (_Bool)_queue_consideredUnderLock;
- (int)_effectiveVisibilityForVisibility:(int)arg1 underLock:(_Bool)arg2;
- (int)_queue_effectiveVisibilityForVisibility:(int)arg1;
- (id)_queue_newWatchdogForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=_queue_taskState, setter=_queue_setTaskState:) int queue_taskState;
- (_Bool)_queue_isForeground;
@property(copy, nonatomic, getter=_queue_executablePath, setter=_queue_setExecutablePath:) NSString *queue_executablePath;
@property(copy, nonatomic, getter=_queue_jobLabel, setter=_queue_setJobLabel:) NSString *queue_jobLabel;
@property(nonatomic, getter=_queue_isRunning, setter=_queue_setRunning:) _Bool queue_running;
@property(copy, nonatomic, getter=_queue_name, setter=_queue_setName:) NSString *queue_name;
@property(nonatomic, getter=_queue_pid, setter=_queue_setPid:) int queue_pid;
- (void)_queue_updateStateWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_queue_executableLivesOnSystemPartition;
@property(readonly, nonatomic) _Bool executableLivesOnSystemPartition;
@property(nonatomic) __weak id <FBProcessDelegate> delegate;
- (id)_workspace;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy, nonatomic) FBProcessState *state;
@property(readonly, copy, nonatomic) NSString *jobLabel;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (id)initWithProcessHandle:(id)arg1 callOutQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

