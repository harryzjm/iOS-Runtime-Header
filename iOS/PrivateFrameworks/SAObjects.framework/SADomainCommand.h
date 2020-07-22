//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSURL;

@interface SADomainCommand
{
}

+ (id)domainCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *timeout;
@property(copy, nonatomic) NSURL *targetPluginId;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

