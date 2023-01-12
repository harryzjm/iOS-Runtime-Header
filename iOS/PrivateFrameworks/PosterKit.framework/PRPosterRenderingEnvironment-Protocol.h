//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/PRPosterEnvironment-Protocol.h>

@protocol PRPosterContents;

@protocol PRPosterRenderingEnvironment <PRPosterEnvironment>
@property(readonly, nonatomic) struct CGSize desiredContentSize;
@property(readonly, nonatomic) struct CGSize minimumContentSize;
@property(readonly, nonatomic, getter=isParallaxEnabled) _Bool parallaxEnabled;
@property(readonly, nonatomic) id <PRPosterContents> contents;
@property(readonly, nonatomic) unsigned long long significantEventsCounter;
@property(readonly, nonatomic) _Bool andromeda;
@property(readonly, nonatomic, getter=isLowLuminance) _Bool lowLuminance;
@property(readonly, nonatomic) _Bool wakeSourceIsSwipeToUnlock;
@property(readonly, nonatomic) double linearBacklightProgress;
@property(readonly, nonatomic) double backlightProgress;
@property(readonly, nonatomic) double unlockProgress;
@property(readonly, nonatomic, getter=isSnapshot) _Bool snapshot;
@property(readonly, nonatomic, getter=isPreview) _Bool preview;
@end

