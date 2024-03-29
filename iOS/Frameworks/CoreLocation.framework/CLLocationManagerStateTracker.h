//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLStateTracker.h"

@interface CLLocationManagerStateTracker : CLStateTracker
{
    struct _CLLocationManagerStateTrackerState _state;
    void *_identifier;
    _Bool _inTransaction;
}

+ (const char *)trackerStateTypeName;
+ (unsigned long long)trackerStateSize;
- (void *)identifier;
- (_Bool)dumpState:(void *)arg1 withSize:(unsigned long long)arg2 hints:(struct os_state_hints_s *)arg3;
- (void)updateState:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool trackRunInfoEnabled;
@property(nonatomic) _Bool isAuthorizedForWidgetUpdates;
@property(nonatomic) _Bool courtesyPromptNeeded;
@property(nonatomic) _Bool fusionInfoEnabled;
@property(nonatomic) _Bool groundAltitudeEnabled;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) _Bool updatingVehicleHeading;
@property(nonatomic) _Bool updatingVehicleSpeed;
@property(nonatomic) _Bool batchingLocation;
@property(nonatomic) _Bool allowsMapCorrection;
@property(nonatomic) _Bool showsBackgroundLocationIndicator;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) _Bool paused;
@property int pausesLocationUpdatesAutomatically;
@property(nonatomic) long long activityType;
@property(nonatomic) _Bool limitsPrecision;
@property(nonatomic) int previousAuthorizationStatus;
@property(nonatomic) _Bool previousAuthorizationStatusValid;
@property(nonatomic) _Bool dynamicAccuracyReductionEnabled;
@property(nonatomic) _Bool allowsAlteredAccessoryLocations;
@property(nonatomic) _Bool allowsLocationPrompts;
@property(nonatomic) double headingFilter;
@property(nonatomic) _Bool updatingHeading;
@property(nonatomic) _Bool updatingRanging;
@property(nonatomic) _Bool requestingRanging;
@property(nonatomic) _Bool requestingLocation;
@property(nonatomic) _Bool updatingLocation;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2 state:(CDUnknownBlockType)arg3;
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2;
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2 state:(CDUnknownBlockType)arg3;
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2;

@end

