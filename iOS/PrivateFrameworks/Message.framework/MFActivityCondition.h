//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFActivityCondition-Protocol.h>
#import <Message/MFActivityConditionBuilder-Protocol.h>

@class EFCancelationToken, EFObservable, NSString;
@protocol EFScheduler;

@interface MFActivityCondition : NSObject <MFActivityConditionBuilder, MFActivityCondition>
{
    _Bool _requireExternalPower;
    _Bool _requireWiFi;
    _Bool _requireScreenLocked;
    _Bool _requireLowPowerModeDisabled;
    _Bool _satisfied;
    float _minBatteryLevel;
    long long _maxThermalPressureLevel;
    EFCancelationToken *_cancellationToken;
    id <EFScheduler> _scheduler;
}

+ (id)alwaysSatisfiedCondition;
- (void).cxx_destruct;
@property(retain, nonatomic) id <EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) EFCancelationToken *cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(nonatomic, getter=isSatisfied) _Bool satisfied; // @synthesize satisfied=_satisfied;
@property(nonatomic) long long maxThermalPressureLevel; // @synthesize maxThermalPressureLevel=_maxThermalPressureLevel;
@property(nonatomic) _Bool requireLowPowerModeDisabled; // @synthesize requireLowPowerModeDisabled=_requireLowPowerModeDisabled;
@property(nonatomic) float minBatteryLevel; // @synthesize minBatteryLevel=_minBatteryLevel;
@property(nonatomic) _Bool requireScreenLocked; // @synthesize requireScreenLocked=_requireScreenLocked;
@property(nonatomic) _Bool requireWiFi; // @synthesize requireWiFi=_requireWiFi;
@property(nonatomic) _Bool requireExternalPower; // @synthesize requireExternalPower=_requireExternalPower;
- (_Bool)_isValidConfiguration;
@property(readonly, nonatomic) EFObservable *conditionsObservable;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
