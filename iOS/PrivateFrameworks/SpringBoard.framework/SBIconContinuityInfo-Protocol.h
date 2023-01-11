//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol SBIconContinuityInfo
@property(readonly, copy, nonatomic) NSString *originatingDeviceType;
- (_Bool)isFirstWakePrediction;
- (_Bool)isHeadphonesPrediction;
- (_Bool)isBluetoothAudioPrediction;
- (_Bool)isBluetoothPrediction;
- (_Bool)isLocationBasedSuggestion;
@end
