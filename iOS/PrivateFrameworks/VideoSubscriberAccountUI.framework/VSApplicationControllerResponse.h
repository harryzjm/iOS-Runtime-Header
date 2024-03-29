//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSSet, NSString, VSAccountAuthentication;

__attribute__((visibility("hidden")))
@interface VSApplicationControllerResponse : NSObject
{
    NSString *_authenticationScheme;
    NSString *_responseStatusCode;
    NSString *_responseString;
    NSNumber *_expectedAction;
    VSAccountAuthentication *_accountAuthentication;
    NSSet *_accountChannelIDs;
    NSArray *_subscriptionsToAdd;
    NSArray *_subscriptionsToRemoveByBundleID;
    NSArray *_userAccounts;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *userAccounts; // @synthesize userAccounts=_userAccounts;
@property(copy, nonatomic) NSArray *subscriptionsToRemoveByBundleID; // @synthesize subscriptionsToRemoveByBundleID=_subscriptionsToRemoveByBundleID;
@property(copy, nonatomic) NSArray *subscriptionsToAdd; // @synthesize subscriptionsToAdd=_subscriptionsToAdd;
@property(copy, nonatomic) NSSet *accountChannelIDs; // @synthesize accountChannelIDs=_accountChannelIDs;
@property(retain, nonatomic) VSAccountAuthentication *accountAuthentication; // @synthesize accountAuthentication=_accountAuthentication;
@property(copy, nonatomic) NSNumber *expectedAction; // @synthesize expectedAction=_expectedAction;
@property(copy, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(copy, nonatomic) NSString *responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(copy, nonatomic) NSString *authenticationScheme; // @synthesize authenticationScheme=_authenticationScheme;
- (id)description;

@end

