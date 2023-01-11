//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile;

@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriting : NSObject
{
    HDProfile *_profile;
}

@property(readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)companionAvailabilityStateKeyFromUniqueName:(id)arg1;
- (_Bool)markTemplateAvailable:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1;

@end
