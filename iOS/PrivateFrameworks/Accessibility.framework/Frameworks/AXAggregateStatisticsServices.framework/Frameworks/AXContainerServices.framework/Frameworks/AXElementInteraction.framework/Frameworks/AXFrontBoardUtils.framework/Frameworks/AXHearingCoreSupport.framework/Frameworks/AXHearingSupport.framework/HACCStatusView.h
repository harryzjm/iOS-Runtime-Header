//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <AXHearingSupport/HACCContentModule-Protocol.h>

@class BCBatteryDevice, HACCBatteryGroupView, NSString, UIImageView, UILabel;
@protocol HACCContentModuleDelegate;

@interface HACCStatusView : UIControl <HACCContentModule>
{
    unsigned long long module;
    id <HACCContentModuleDelegate> delegate;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    HACCBatteryGroupView *_batteryView;
    BCBatteryDevice *_batteryDevice;
}

@property(retain, nonatomic) BCBatteryDevice *batteryDevice; // @synthesize batteryDevice=_batteryDevice;
@property(retain, nonatomic) HACCBatteryGroupView *batteryView; // @synthesize batteryView=_batteryView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HACCContentModuleDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned long long module; // @synthesize module;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)buttonTapped:(id)arg1;
- (_Bool)enabled;
- (id)contentValue;
- (void)updateValue;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

