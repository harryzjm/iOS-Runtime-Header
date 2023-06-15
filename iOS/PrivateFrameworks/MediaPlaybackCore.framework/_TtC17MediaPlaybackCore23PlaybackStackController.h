//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface _TtC17MediaPlaybackCore23PlaybackStackController : _TtCs12_SwiftObject
{
    MISSING_TYPE *queueController;
    MISSING_TYPE *playerController;
    MISSING_TYPE *reporter;
    MISSING_TYPE *assetQueueController;
    MISSING_TYPE *errorController;
    MISSING_TYPE *backgroundTaskController;
    MISSING_TYPE *currentSetQueueIdentifier;
}

@property(nonatomic, readonly) NSDictionary *stateDictionary;
- (void)resetWithReason:(id)arg1;
- (void)activateAudioSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAudioSessionWithConfiguration:(id)arg1;
- (void)setupForManagedSessionWithAudioSession:(id)arg1;
- (void)setupForShared;
- (void)setupForSolo;
@property(nonatomic, readonly) _Bool isModeManagedSession;
@property(nonatomic, readonly) _Bool isModeShared;
@property(nonatomic, readonly) _Bool isModeSolo;
@property(nonatomic, readonly) NSString *modeDescription;
- (void)setRelativeVolume:(float)arg1;
- (void)setSpatializationFormat:(long long)arg1;

@end

