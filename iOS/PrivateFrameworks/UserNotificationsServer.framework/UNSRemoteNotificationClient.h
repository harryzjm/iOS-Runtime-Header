//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/NSCoding-Protocol.h>

@class NSData, NSString;

@interface UNSRemoteNotificationClient : NSObject <NSCoding>
{
    NSString *_tokenIdentifier;
    NSString *_environment;
    NSData *_lastKnownDeviceToken;
    _Bool _wantsPush;
    NSString *_pushDisabledReason;
}

+ (id)validEnvironmentFromEnvironment:(id)arg1;
+ (void)initialize;
@property(nonatomic, getter=doesWantPush) _Bool wantsPush; // @synthesize wantsPush=_wantsPush;
@property(retain, nonatomic) NSString *pushDisabledReason; // @synthesize pushDisabledReason=_pushDisabledReason;
@property(retain, nonatomic) NSData *lastKnownDeviceToken; // @synthesize lastKnownDeviceToken=_lastKnownDeviceToken;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, retain, nonatomic) NSString *tokenIdentifier; // @synthesize tokenIdentifier=_tokenIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)wantsPushWithCoder:(id)arg1;
- (id)init;

@end

