//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVItem, MPCMediaFoundationTranslator, MPCPlaybackEngine, NSMutableSet, NSString;
@protocol MPCExternalPlaybackRouter;

__attribute__((visibility("hidden")))
@interface MPCPlaybackErrorController : NSObject
{
    _Bool _itemsHavePlayed;
    NSString *preferredFirstContentItemID;
    MPCPlaybackEngine *_playbackEngine;
    MPCMediaFoundationTranslator *_translator;
    NSMutableSet *_failedItemsIdentifiers;
    id <MPCExternalPlaybackRouter> _externalPlaybackRouter;
    MPAVItem *_lastItemUsedForErrorResolution;
    long long _contiguousFailSilentlyResolutionCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long contiguousFailSilentlyResolutionCount; // @synthesize contiguousFailSilentlyResolutionCount=_contiguousFailSilentlyResolutionCount;
@property(retain, nonatomic) MPAVItem *lastItemUsedForErrorResolution; // @synthesize lastItemUsedForErrorResolution=_lastItemUsedForErrorResolution;
@property(retain, nonatomic) id <MPCExternalPlaybackRouter> externalPlaybackRouter; // @synthesize externalPlaybackRouter=_externalPlaybackRouter;
@property(retain, nonatomic) NSMutableSet *failedItemsIdentifiers; // @synthesize failedItemsIdentifiers=_failedItemsIdentifiers;
@property(readonly, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(copy, nonatomic) NSString *preferredFirstContentItemID; // @synthesize preferredFirstContentItemID;
- (_Bool)isLeaseTakenError:(id)arg1;
- (_Bool)shouldHandleFirstItemFailure:(id)arg1 item:(id)arg2;
- (_Bool)isAssetUnavailableFailure:(id)arg1;
- (_Bool)isUnrecoverableAssetLoadingError:(id)arg1;
- (_Bool)isQueueLoadingFailure:(id)arg1;
- (_Bool)isFirstItemFailure:(id)arg1 item:(id)arg2;
- (_Bool)canHandleFirstItemFailure;
- (void)_notifyObserversForError:(id)arg1 item:(id)arg2;
- (long long)_resolutionForPlaybackError:(id)arg1 item:(id)arg2;
- (void)_playbackFailedWithError:(id)arg1 item:(id)arg2 canResolve:(_Bool)arg3 proposedResolution:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)reportCriticalError:(id)arg1 forItem:(id)arg2;
- (void)resolveError:(id)arg1 forItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetWithReason:(id)arg1;
@property(nonatomic) _Bool itemsHavePlayed;
- (id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2 externalPlaybackRouter:(id)arg3;

@end

