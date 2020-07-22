//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface ADTVMediaCountdownView : UIView
{
    UILabel *_adLabel;
    UILabel *_remainingTimeLabel;
}

@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) UILabel *adLabel; // @synthesize adLabel=_adLabel;
- (void)updateElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)_addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end
