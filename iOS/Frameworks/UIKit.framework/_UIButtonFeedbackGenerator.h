//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIFeedbackGeneratorUserInteractionDriven-Protocol.h>

@class _UIButtonFeedbackGeneratorConfiguration;

@interface _UIButtonFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
{
}

+ (Class)_configurationClass;
- (id)_stats_key;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;
@property(readonly, nonatomic, getter=_buttonConfiguration) _UIButtonFeedbackGeneratorConfiguration *buttonConfiguration;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (id)initWithStyle:(long long)arg1;

@end

