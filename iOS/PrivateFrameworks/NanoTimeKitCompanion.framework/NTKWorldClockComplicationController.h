//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class NSDate, NTKWorldClockComplication;
@protocol NTKWorldClockComplicationDisplay;

@interface NTKWorldClockComplicationController <NTKTimeTravel>
{
    struct {
        unsigned int wantsShortCity:1;
        unsigned int wantsLongCity:1;
    } _displayFlags;
    NSDate *_timeTravelDate;
}

+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_endTimeTravelAnimated:(_Bool)arg1;
- (void)_startTimeTravelAnimated:(_Bool)arg1;
- (void)_handleTimeZoneChange;
- (void)_handleLocaleChange;
- (void)_handleAbbreviationStoreChange:(id)arg1;
- (void)_updateDisplay;
- (id)complicationApplicationIdentifier;
- (void)performTapAction;
- (_Bool)hasTapAction;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setPauseDate:(id)arg1;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_activate;

// Remaining properties
@property(readonly, nonatomic) NTKWorldClockComplication *complication; // @dynamic complication;
@property(readonly, nonatomic) __weak id <NTKWorldClockComplicationDisplay> legacyDisplay; // @dynamic legacyDisplay;

@end

