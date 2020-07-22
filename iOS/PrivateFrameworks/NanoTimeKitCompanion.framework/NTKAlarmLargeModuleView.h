//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKAlarmComplicationDisplay-Protocol.h>

@class NSDate, NSString, NTKColoringLabel, NTKDigitalTimeLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKAlarmLargeModuleView <NTKAlarmComplicationDisplay>
{
    NTKColoringLabel *_titleLabel;
    NTKColoringLabel *_subtitleLabel;
    NTKDigitalTimeLabel *_alarmLabel;
    NTKColoringLabel *_snoozeDurationLabel;
    NSDate *_alarmDate;
}

- (void).cxx_destruct;
- (void)_updateSnoozeTime:(double)arg1;
- (void)_updateAlarmTime;
- (void)_setAlarmDate:(id)arg1;
- (void)setStateSnoozingWithDuration:(double)arg1;
- (void)setStateActiveWithDate:(id)arg1;
- (void)setStateNoAlarms;
- (void)setStateAllAlarmsOff;
- (void)_layoutContentView;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

