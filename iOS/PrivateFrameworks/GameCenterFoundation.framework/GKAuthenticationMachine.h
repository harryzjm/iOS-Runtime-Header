//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/NSCoding-Protocol.h>

@class NSString;

@interface GKAuthenticationMachine : NSObject <NSCoding>
{
    long long _loginCancelledCount;
    NSString *_accountName;
    long long _serverEnvironment;
}

+ (void)migratePreSundanceAccountInformation;
+ (void)migratePreBlacktailAccountInformation;
+ (id)authMachineForEnvironment:(long long)arg1;
@property(nonatomic) long long serverEnvironment; // @synthesize serverEnvironment=_serverEnvironment;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(nonatomic) long long loginCancelledCount; // @synthesize loginCancelledCount=_loginCancelledCount;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

