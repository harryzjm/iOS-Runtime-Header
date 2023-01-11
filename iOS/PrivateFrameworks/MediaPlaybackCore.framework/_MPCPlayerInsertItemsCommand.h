//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerInsertItemsCommand-Protocol.h>

@class NSArray, NSSet, NSString;

@interface _MPCPlayerInsertItemsCommand <MPCPlayerInsertItemsCommand>
{
    NSArray *_devices;
    NSSet *_supportedInsertionPositions;
    NSSet *_supportedQueueTypes;
    NSSet *_supportedCustomDataQueueIdentifiers;
}

@property(retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers; // @synthesize supportedCustomDataQueueIdentifiers=_supportedCustomDataQueueIdentifiers;
@property(retain, nonatomic) NSSet *supportedQueueTypes; // @synthesize supportedQueueTypes=_supportedQueueTypes;
@property(retain, nonatomic) NSSet *supportedInsertionPositions; // @synthesize supportedInsertionPositions=_supportedInsertionPositions;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (_Bool)_isSupportedPlaybackIntent:(id)arg1 forRemotePlayer:(_Bool)arg2 atInsertionPosition:(int)arg3;
- (id)_insertWithOptions:(id)arg1;
- (id)insertAtEndOfTracklistWithPlaybackIntent:(id)arg1;
- (id)insertPlaybackIntent:(id)arg1 afterItem:(id)arg2;
- (id)insertAfterPlayingItemWithPlaybackIntent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

