//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, OKPresentation, OKProducerPlugin;
@protocol OKProducerDelegate;

@interface OKProducer : NSObject
{
    id <OKProducerDelegate> _delegate;
    OKProducerPlugin *_plugin;
    OKPresentation *_presentation;
    NSOperationQueue *_liveAuthoringOperationQueue;
    _Bool _liveAuthoringInProgress;
    double _startLiveAuthorTime;
}

+ (void)setupJavascriptContext:(id)arg1;
@property(retain, nonatomic) OKPresentation *presentation; // @synthesize presentation=_presentation;
@property(retain, nonatomic) OKProducerPlugin *plugin; // @synthesize plugin=_plugin;
- (void)didChangeTextForWidget:(id)arg1 toSettings:(id)arg2;
- (void)didPanMediaForWidget:(id)arg1 toState:(id)arg2;
- (void)addSettingsFromDictionary:(id)arg1 onWidget:(id)arg2;
- (void)setSettingsObject:(id)arg1 forKeyPath:(id)arg2 onWidget:(id)arg3;
- (float)liveAuthoringProgressForMediaItem:(id)arg1;
- (float)currentLiveAuthoringProgress;
- (unsigned long long)totalNumberOfLiveAuthoringItems;
- (id)liveAuthorNextChunk:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)liveAuthorInitialBootstrap:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)resetLiveAuthoring;
- (_Bool)needsLiveAuthoring;
- (_Bool)supportsLiveAuthoring;
- (void)cancelLiveAuthoring:(_Bool)arg1;
- (void)startLiveAuthoringIfNeeded;
- (void)_continueLiveAuthoring;
- (double)_continueLiveAuthoringDelay;
- (_Bool)prepareLiveAuthoringIfNeeded:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)liveAuthoringOperationQueue;
- (void)updateSynopsisGuideline;
- (_Bool)author:(_Bool)arg1 progressBlock:(CDUnknownBlockType)arg2 requiresProducer:(inout _Bool *)arg3 error:(id *)arg4;
- (void)cleanupPresentation:(CDUnknownBlockType)arg1;
- (_Bool)migratePresentation:(CDUnknownBlockType)arg1 error:(id *)arg2;
@property(nonatomic) id <OKProducerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithPresentation:(id)arg1 andPlugin:(id)arg2;
- (id)init;

@end
