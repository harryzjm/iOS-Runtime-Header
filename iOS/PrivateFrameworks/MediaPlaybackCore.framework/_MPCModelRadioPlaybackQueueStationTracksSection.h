//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/_MPCModelRadioPlaybackQueueSection-Protocol.h>

@class ICMutableRadioPlaybackHistory, MPCPlaybackRequestEnvironment, MPPropertySet, MPSectionedCollection, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface _MPCModelRadioPlaybackQueueStationTracksSection : NSObject <_MPCModelRadioPlaybackQueueSection>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_activeModelGenericAVItems;
    _Bool _isSiriInitiated;
    MPPropertySet *_itemProperties;
    ICMutableRadioPlaybackHistory *_playbackHistory;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPSectionedCollection *_trackModels;
    MPSectionedCollection *_tracks;
}

@property(readonly, copy, nonatomic) MPSectionedCollection *tracks; // @synthesize tracks=_tracks;
@property(readonly, copy, nonatomic) MPSectionedCollection *trackModels; // @synthesize trackModels=_trackModels;
- (void).cxx_destruct;
- (id)trackForItemAtIndex:(long long)arg1;
- (long long)removeExplicitItems;
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)isExplicitItemAtIndex:(long long)arg1;
- (id)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (id)AVItemAtIndex:(long long)arg1;
- (void)updateWithPersonalizedResponse:(id)arg1;
@property(readonly, nonatomic) ICMutableRadioPlaybackHistory *playbackHistory;
- (id)initWithPlaybackContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

