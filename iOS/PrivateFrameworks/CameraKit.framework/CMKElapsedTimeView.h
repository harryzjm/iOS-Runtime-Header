//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDate, NSTimer, UIImageView, UILabel;

@interface CMKElapsedTimeView : UIView
{
    UILabel *__timeLabel;
    UIImageView *__recordingImageView;
    NSTimer *__updateTimer;
    NSDate *__startTime;
}

@property(readonly, nonatomic) NSDate *_startTime; // @synthesize _startTime=__startTime;
@property(readonly, nonatomic) NSTimer *_updateTimer; // @synthesize _updateTimer=__updateTimer;
@property(readonly, nonatomic) UIImageView *_recordingImageView; // @synthesize _recordingImageView=__recordingImageView;
@property(readonly, nonatomic) UILabel *_timeLabel; // @synthesize _timeLabel=__timeLabel;
- (void).cxx_destruct;
- (void)_endRecordingAnimation;
- (void)_beginRecordingAnimation;
- (void)resetTimer;
- (void)endTimer;
- (void)_setStartTime:(id)arg1;
- (void)startTimer;
- (void)_update:(id)arg1;
- (void)updateToContentSize:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKElapsedTimeViewInitialization;

@end

