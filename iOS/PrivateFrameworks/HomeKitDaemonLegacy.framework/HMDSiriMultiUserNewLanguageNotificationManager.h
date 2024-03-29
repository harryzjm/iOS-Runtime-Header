//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSiriMultiUserNewLanguageNotificationManagerContext, NSString;

__attribute__((visibility("hidden")))
@interface HMDSiriMultiUserNewLanguageNotificationManager : HMFObject
{
    HMDSiriMultiUserNewLanguageNotificationManagerContext *_context;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMDSiriMultiUserNewLanguageNotificationManagerContext *context; // @synthesize context=_context;
- (void)_postNotificationIfNecessaryForMediaAccessory:(id)arg1;
- (void)mediaAccessory:(id)arg1 didUpdateSoftwareToVersion:(id)arg2;
- (void)checkAllMediaAccessoriesAndPostNotificationIfNecessary;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

