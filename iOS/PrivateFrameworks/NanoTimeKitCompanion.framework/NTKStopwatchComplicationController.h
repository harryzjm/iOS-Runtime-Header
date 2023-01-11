//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class NSDate;
@protocol NTKStopwatchComplicationDisplay;

@interface NTKStopwatchComplicationController <NTKTimeTravel>
{
    NSDate *_timeTravelDate;
}

+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_updateDisplay;
- (void)_handleStopwatchChange;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (id)complicationApplicationIdentifier;
- (void)performTapAction;
- (_Bool)hasTapAction;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_activate;

// Remaining properties
@property(readonly, nonatomic) __weak id <NTKStopwatchComplicationDisplay> legacyDisplay; // @dynamic legacyDisplay;

@end
