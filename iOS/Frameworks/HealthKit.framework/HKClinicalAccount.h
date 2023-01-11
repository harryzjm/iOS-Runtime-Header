//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKClinicalBrandable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKClinicalBrand, HKClinicalGateway, NSDate, NSString, NSUUID;

@interface HKClinicalAccount : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>
{
    _Bool _userEnabled;
    _Bool _needsRelogin;
    struct NSUUID *_identifier;
    long long _state;
    NSDate *_lastFetchDate;
    NSDate *_lastFullFetchDate;
    HKClinicalGateway *_gateway;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) HKClinicalGateway *gateway; // @synthesize gateway=_gateway;
@property(readonly, copy, nonatomic) NSDate *lastFullFetchDate; // @synthesize lastFullFetchDate=_lastFullFetchDate;
@property(readonly, copy, nonatomic) NSDate *lastFetchDate; // @synthesize lastFetchDate=_lastFetchDate;
@property(readonly, nonatomic) _Bool needsRelogin; // @synthesize needsRelogin=_needsRelogin;
@property(readonly, nonatomic, getter=isUserEnabled) _Bool userEnabled; // @synthesize userEnabled=_userEnabled;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) HKClinicalBrand *brand;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasErrorState;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(struct NSUUID *)arg1 state:(long long)arg2 userEnabled:(_Bool)arg3 needsRelogin:(_Bool)arg4 lastFetchDate:(id)arg5 lastFullFetchDate:(id)arg6 gateway:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=hasMultipleLocations) _Bool multiple;
@property(readonly) Class superclass;

@end

