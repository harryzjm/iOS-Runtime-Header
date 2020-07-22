//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoPlaybackObserver-Protocol.h>

@class NSString;
@protocol SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate;

@interface SXAutomaticFullscreenVideoPlaybackBehaviorManager : NSObject <SXVideoPlaybackObserver>
{
    unsigned long long _behavior;
    id <SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> _delegate;
    struct CGRect _videoBounds;
}

@property(nonatomic) __weak id <SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) struct CGRect videoBounds; // @synthesize videoBounds=_videoBounds;
- (void).cxx_destruct;
- (void)conditionsChanged;
- (_Bool)fullscreenPlaybackRequiredForCurrentConditions;
- (void)playbackCoordinatorResumedPlayback:(id)arg1;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

