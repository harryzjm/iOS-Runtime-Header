//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IntentsUtilities : NSObject
{
}

+ (id)_displayNameForApp:(id)arg1;
+ (void)setAccess:(_Bool)arg1 appID:(id)arg2;
+ (_Bool)isIntentsEnabledForAppId:(id)arg1;
+ (id)fetchEnabledAppIds;
+ (void)intentsAppsWithCompletion:(CDUnknownBlockType)arg1;

@end
