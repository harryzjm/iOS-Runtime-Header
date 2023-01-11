//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class AXRemoteHearingAidDevice, NSNumberFormatter, UIActivityIndicatorView, UILabel, UIView;

@interface AXHearingAidDetailCell : PSTableCell
{
    AXRemoteHearingAidDevice *_device;
    UILabel *_leftLabel;
    UIView *_leftStatusIndicator;
    UILabel *_rightLabel;
    UIView *_rightStatusIndicator;
    UIActivityIndicatorView *_loadingIndicator;
    NSNumberFormatter *_numberFormatter;
    _Bool _bluetoothAvailable;
}

+ (double)heightRequiredForDevice:(id)arg1;
@property(retain, nonatomic) AXRemoteHearingAidDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateAvailability;
- (id)imageForBatteryLevel:(double)arg1;
- (void)dealloc;
- (void)bluetoothAvailabilityDidChange:(id)arg1;
- (void)updateDetails;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDevice:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
