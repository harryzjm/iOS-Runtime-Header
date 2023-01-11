//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSScheduleSettingsRecord, NSString;

@interface DNDSSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>
{
    DNDSBehaviorSettingsRecord *_behaviorSettings;
    DNDSBypassSettingsRecord *_phoneCallBypassSettings;
    DNDSScheduleSettingsRecord *_scheduleSettings;
}

+ (id)newWithDictionaryRepresentation:(id)arg1;
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)backingStoreWithFileURL:(id)arg1;
+ (id)recordWithEncodedInfo:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) DNDSScheduleSettingsRecord *scheduleSettings; // @synthesize scheduleSettings=_scheduleSettings;
@property(readonly, copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings; // @synthesize phoneCallBypassSettings=_phoneCallBypassSettings;
@property(readonly, copy, nonatomic) DNDSBehaviorSettingsRecord *behaviorSettings; // @synthesize behaviorSettings=_behaviorSettings;
- (id)dictionaryRepresentation;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_initWithBehaviorSettings:(id)arg1 phoneCallBypassSettings:(id)arg2 scheduleSettings:(id)arg3;
- (id)_initWithRecord:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
