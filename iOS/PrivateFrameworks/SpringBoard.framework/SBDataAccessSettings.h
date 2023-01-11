//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface SBDataAccessSettings : PTSettings
{
    _Bool _alwaysShowIndicatorForCameraCapture;
    _Bool _alwaysShowIndicatorForMicrophoneCapture;
    long long _indicatorColor;
}

+ (id)settingsControllerModule;
@property long long indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(nonatomic) _Bool alwaysShowIndicatorForMicrophoneCapture; // @synthesize alwaysShowIndicatorForMicrophoneCapture=_alwaysShowIndicatorForMicrophoneCapture;
@property(nonatomic) _Bool alwaysShowIndicatorForCameraCapture; // @synthesize alwaysShowIndicatorForCameraCapture=_alwaysShowIndicatorForCameraCapture;
- (void)setDefaultValues;

@end
