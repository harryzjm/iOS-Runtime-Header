//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SAAppsLaunchApp
{
}

+ (id)launchAppWithDictionary:(id)arg1 context:(id)arg2;
+ (id)launchApp;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *launchId;
@property(copy, nonatomic) NSString *executionEnvironment;
@property(copy, nonatomic) NSString *applicationClientIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

