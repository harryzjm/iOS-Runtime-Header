//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIKeyboardFeedbackGeneratorConfiguration;

@interface _UIKeyboardFeedbackGenerator
{
    double _lastTypedKeyTimestamp;
}

+ (Class)_configurationClass;
@property(nonatomic, getter=_lastTypedKeyTimestamp, setter=_setLastTypedKeyTimestamp:) double lastTypedKeyTimestamp; // @synthesize lastTypedKeyTimestamp=_lastTypedKeyTimestamp;
- (id)_stats_key;
- (double)_autoDeactivationTimeout;
- (void)_playFeedbackForActionType:(long long)arg1 withCustomization:(CDUnknownBlockType)arg2;
- (id)_feedbackWithUpdatedVolume:(id)arg1;
- (float)scaleVolumeSlow:(float)arg1 fast:(float)arg2 timeSpan:(double)arg3;
- (void)actionOccurred:(long long)arg1;
- (void)_activated;
@property(readonly, nonatomic, getter=_keyboardConfiguration) _UIKeyboardFeedbackGeneratorConfiguration *keyboardConfiguration;

@end

