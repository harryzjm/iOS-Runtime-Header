//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SASettingSetSpokenNotificationsEnabled
{
}

+ (id)setSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setSpokenNotificationsEnabled;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSDate *timeToReEnable;
@property(copy, nonatomic) NSString *appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
