//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UISelectionFeedbackGeneratorConfiguration;

@interface UISelectionFeedbackGenerator
{
    double _lastSelectionChangeTime;
}

+ (Class)_configurationClass;
@property(nonatomic) double lastSelectionChangeTime; // @synthesize lastSelectionChangeTime=_lastSelectionChangeTime;
- (id)_stats_key;
- (void)_playFeedbackWithSpeed:(double)arg1;
- (void)selectionChanged;
- (void)_deactivated;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;
@property(readonly, nonatomic, getter=_selectionConfiguration) _UISelectionFeedbackGeneratorConfiguration *selectionConfiguration;

@end

