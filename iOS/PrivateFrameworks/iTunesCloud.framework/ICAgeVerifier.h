//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSDate;

@interface ICAgeVerifier : NSObject <NSCopying>
{
    long long _status;
    NSDate *_verificationExpirationDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *verificationExpirationDate; // @synthesize verificationExpirationDate=_verificationExpirationDate;
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic, getter=isExplicitContentAllowed) _Bool explicitContentAllowed;
- (void)runAgeVerification;
- (id)initWithExpirationDate:(id)arg1;

@end
