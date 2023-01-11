//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface CSLockScreenPasscodeSettings : PTSettings
{
    double _lightenSourceOverColorWhite;
    double _lightenSourceOverColorAlpha;
    double _plusDColorWhite;
    double _plusDColorAlpha;
}

+ (id)settingsControllerModule;
@property(nonatomic) double plusDColorAlpha; // @synthesize plusDColorAlpha=_plusDColorAlpha;
@property(nonatomic) double plusDColorWhite; // @synthesize plusDColorWhite=_plusDColorWhite;
@property(nonatomic) double lightenSourceOverColorAlpha; // @synthesize lightenSourceOverColorAlpha=_lightenSourceOverColorAlpha;
@property(nonatomic) double lightenSourceOverColorWhite; // @synthesize lightenSourceOverColorWhite=_lightenSourceOverColorWhite;
- (void)setDefaultValues;

@end
