//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextPersisting-Protocol.h>

@protocol _CDContextPersisting;

@interface _CDPolicyBasedPersisting : NSObject <_CDContextPersisting>
{
    id <_CDContextPersisting> _persistenceSurvivingReboot;
    id <_CDContextPersisting> _persistenceSurvivingRelaunch;
}

+ (id)persistenceWithPersistenceSurvivingReboot:(id)arg1 persistenceSurvivingRelaunch:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <_CDContextPersisting> persistenceSurvivingRelaunch; // @synthesize persistenceSurvivingRelaunch=_persistenceSurvivingRelaunch;
@property(readonly, nonatomic) id <_CDContextPersisting> persistenceSurvivingReboot; // @synthesize persistenceSurvivingReboot=_persistenceSurvivingReboot;
- (id)loadRegistrations;
- (id)loadValues;
- (void)deleteDataCreatedBefore:(id)arg1;
- (void)deleteAllData;
- (void)deleteRegistration:(id)arg1;
- (void)saveRegistration:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithPersistenceSurvivingReboot:(id)arg1 persistenceSurvivingRelaunch:(id)arg2;

@end
