//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SLWebClient : NSObject
{
    unsigned long long _type;
}

+ (id)clientForAccountType:(id)arg1;
+ (id)clientOfType:(unsigned long long)arg1;
@property unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *userInfoURL;
@property(readonly, nonatomic) NSString *authRequestURL;
@property(readonly, nonatomic) NSString *tokenURL;
@property(readonly, nonatomic) NSString *src;
@property(readonly, nonatomic) NSString *clientRedirect;
@property(readonly, nonatomic) NSString *clientSecret;
@property(readonly, nonatomic) NSString *clientID;

@end
