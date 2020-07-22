//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoProviding-Protocol.h>

@class NSString, NSURL, SXTimeline;
@protocol SXAnalyticsReporting, SXVideoMetadataProviding;

@interface SXVideoProvider : NSObject <SXVideoProviding>
{
    NSURL *_URL;
    id <SXAnalyticsReporting> _analyticsReporter;
    id <SXVideoMetadataProviding> _metadata;
    SXTimeline *_timeline;
    double _pausedAtTime;
}

@property(nonatomic) double pausedAtTime; // @synthesize pausedAtTime=_pausedAtTime;
@property(readonly, nonatomic) SXTimeline *timeline; // @synthesize timeline=_timeline;
@property(nonatomic) __weak id <SXVideoMetadataProviding> metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) id <SXAnalyticsReporting> analyticsReporter; // @synthesize analyticsReporter=_analyticsReporter;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (_Bool)supportsQuartileReporting;
- (void)playbackResumedAtTime:(double)arg1;
- (void)playbackPausedAtTime:(double)arg1;
- (void)configureTimelineForQuartileReporting;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (void)muteStateChanged:(_Bool)arg1;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiated;
- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

