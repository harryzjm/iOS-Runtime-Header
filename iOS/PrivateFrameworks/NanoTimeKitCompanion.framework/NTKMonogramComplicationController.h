//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class NSString;
@protocol NTKMonogramComplicationDisplay;

@interface NTKMonogramComplicationController <NTKTimeTravel>
{
    NSString *_monogramText;
}

+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
- (void)_handleLocaleChange;
- (void)_handleFaceDefaultsChanged;
- (void)_handleCustomMonogramChanged;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_reloadMonogramText;
- (void)_updateDisplay;
- (_Bool)hasTapAction;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_activate;

// Remaining properties
@property(readonly, nonatomic) __weak id <NTKMonogramComplicationDisplay> legacyDisplay; // @dynamic legacyDisplay;

@end

