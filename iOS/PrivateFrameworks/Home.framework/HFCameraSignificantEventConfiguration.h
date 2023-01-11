//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@interface HFCameraSignificantEventConfiguration : NSObject <NSCopying>
{
    unsigned long long _eventTypes;
    unsigned long long _personFamiliarityOptions;
}

+ (id)_configurationForCameraProfiles:(id)arg1 eventTypesTransform:(CDUnknownBlockType)arg2 personFamiliarityOptionsTransform:(CDUnknownBlockType)arg3;
+ (id)defaultSmartMotionConfiguration;
+ (id)defaultAnyMotionConfiguration;
+ (id)configurationForCameraProfilesRecordingSettings:(id)arg1;
+ (id)configurationForCameraProfilesNotificationSettings:(id)arg1;
+ (id)configurationWithEventTypes:(unsigned long long)arg1 personFamiliarityOptions:(unsigned long long)arg2;
@property(nonatomic) unsigned long long personFamiliarityOptions; // @synthesize personFamiliarityOptions=_personFamiliarityOptions;
@property(nonatomic) unsigned long long eventTypes; // @synthesize eventTypes=_eventTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)predicateRepresentation;
- (void)removeConfiguration:(id)arg1;
- (void)addConfiguration:(id)arg1;
- (_Bool)containsConfiguration:(id)arg1;
@property(readonly, nonatomic) _Bool isFaceDetectionConfiguration;

@end
