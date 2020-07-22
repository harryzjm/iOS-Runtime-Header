//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MobileTimerUI/MTClock-Protocol.h>

@class MTUIDigitalClockLabel, NSArray, NSTimeZone, UILabel;
@protocol MTUIWorldClockCellViewDelegate;

@interface MTUIWorldClockCellView : UIView <MTClock>
{
    NSTimeZone *_timeZone;
    long long _nowInMinutes;
    _Bool _editing;
    _Bool _started;
    _Bool _shouldStackViews;
    id <MTUIWorldClockCellViewDelegate> _delegate;
    MTUIDigitalClockLabel *_digitalClock;
    UILabel *_nameLabel;
    UILabel *_combinedLabel;
    NSArray *_currentConstraints;
}

+ (id)dayAndTimeZoneOffsetStringFromDate:(id)arg1 withTimeZoneOffset:(long long)arg2 timeZoneAbbreviation:(id)arg3 spaceBeforeTimeDesignator:(_Bool)arg4;
+ (double)defaultHeight;
@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(nonatomic) _Bool shouldStackViews; // @synthesize shouldStackViews=_shouldStackViews;
@property(readonly, nonatomic) UILabel *combinedLabel; // @synthesize combinedLabel=_combinedLabel;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) MTUIDigitalClockLabel *digitalClock; // @synthesize digitalClock=_digitalClock;
@property(readonly, nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) __weak id <MTUIWorldClockCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setTimeZone:(id)arg1;
- (void)updateTime;
- (double)coarseUpdateInterval;
- (double)updateInterval;
- (void)updateTimeContinuously:(long long)arg1;
@property(readonly, nonatomic) long long runMode;
- (void)localeChange:(id)arg1;
- (void)stop;
- (void)start;
- (void)significantTimeChange:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)handleTextSizeChange:(id)arg1;
- (void)updateLabelAdjustFontSize;
- (void)_configureFonts;
- (id)initWithFrame:(struct CGRect)arg1;

@end

