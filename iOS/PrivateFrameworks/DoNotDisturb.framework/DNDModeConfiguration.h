//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/DNDDiffBuilding-Protocol.h>
#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDConfiguration, DNDMode, NSArray, NSDate, NSString;

@interface DNDModeConfiguration : NSObject <DNDDiffBuilding, NSCopying, NSMutableCopying, NSSecureCoding>
{
    DNDMode *_mode;
    DNDConfiguration *_configuration;
    NSArray *_triggers;
    unsigned long long _impactsAvailability;
    unsigned long long _dimsLockScreen;
    NSDate *_lastModified;
    NSDate *_created;
    _Bool _automaticallyGenerated;
    _Bool _hasSecureData;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultModeConfiguration;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAutomaticallyGenerated) _Bool automaticallyGenerated; // @synthesize automaticallyGenerated=_automaticallyGenerated;
@property(readonly, copy, nonatomic) NSDate *created; // @synthesize created=_created;
@property(readonly, copy, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, nonatomic) unsigned long long dimsLockScreen; // @synthesize dimsLockScreen=_dimsLockScreen;
@property(readonly, nonatomic) unsigned long long impactsAvailability; // @synthesize impactsAvailability=_impactsAvailability;
@property(readonly, copy, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(readonly, copy, nonatomic) DNDConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) DNDMode *mode; // @synthesize mode=_mode;
- (_Bool)_containsSecureTriggers:(id)arg1;
- (void)diffAgainstObject:(id)arg1 usingDiffBuilder:(id)arg2 withDescription:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)shortDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)log:(id)arg1 withMessage:(id)arg2;
- (_Bool)hasSecureData;
- (id)mergeWithModeConfiguration:(id)arg1;
@property(readonly, nonatomic) unsigned long long allowSmartEntry; // @dynamic allowSmartEntry;
- (id)_initWithModeConfiguration:(id)arg1;
- (id)initWithMode:(id)arg1 configuration:(id)arg2 triggers:(id)arg3 impactsAvailability:(unsigned long long)arg4 dimsLockScreen:(unsigned long long)arg5 created:(id)arg6 lastModified:(id)arg7 automaticallyGenerated:(_Bool)arg8;
- (id)initWithMode:(id)arg1 configuration:(id)arg2 triggers:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
