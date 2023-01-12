//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/ICLiveLinkDelegate-Protocol.h>
#import <MediaPlaybackCore/MPCPlaybackIntentDataSource-Protocol.h>

@class ICLiveLink, ICLiveLinkIdentity, MPCPlaybackIntent, MSVBlockGuard, MSVSectionedCollection, NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface MPCSharedListeningPlaybackIntentDataSource : NSObject <ICLiveLinkDelegate, MPCPlaybackIntentDataSource>
{
    struct os_unfair_lock_s _lock;
    MSVBlockGuard *_guard;
    long long _shuffleMode;
    id _strongSelf;
    CDUnknownBlockType _completion;
    long long _buildState;
    long long _sourceState;
    MPCPlaybackIntent *_initialIntent;
    NSIndexPath *_startIndexPath;
    MSVSectionedCollection *_initialTracklist;
    long long _linkState;
    ICLiveLink *_liveLink;
    ICLiveLinkIdentity *_identity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICLiveLinkIdentity *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) ICLiveLink *liveLink; // @synthesize liveLink=_liveLink;
@property(nonatomic) long long linkState; // @synthesize linkState=_linkState;
@property(retain, nonatomic) MSVSectionedCollection *initialTracklist; // @synthesize initialTracklist=_initialTracklist;
@property(copy, nonatomic) NSIndexPath *startIndexPath; // @synthesize startIndexPath=_startIndexPath;
@property(retain, nonatomic) MPCPlaybackIntent *initialIntent; // @synthesize initialIntent=_initialIntent;
@property(nonatomic) long long sourceState; // @synthesize sourceState=_sourceState;
@property(nonatomic) long long buildState; // @synthesize buildState=_buildState;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) id strongSelf; // @synthesize strongSelf=_strongSelf;
@property(nonatomic) long long shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property(retain, nonatomic) MSVBlockGuard *guard; // @synthesize guard=_guard;
- (void)_transitionToLiveLinkState:(long long)arg1 error:(id)arg2;
- (void)_transitionToLiveLinkState:(long long)arg1;
- (void)_transitionToSourceState:(long long)arg1 error:(id)arg2;
- (void)_transitionToSourceState:(long long)arg1;
- (void)_transitionToBuildState:(long long)arg1 intent:(id)arg2 error:(id)arg3;
- (void)_transitionToBuildState:(long long)arg1;
- (void)liveLink:(id)arg1 didUpdateQueue:(id)arg2;
- (void)liveLink:(id)arg1 didEncounterError:(id)arg2 willRetry:(_Bool)arg3;
- (void)didStartLiveLink:(id)arg1;
- (void)getPlaybackContextForIntent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)buildSharedSessionIntentWithIntent:(id)arg1 identity:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
