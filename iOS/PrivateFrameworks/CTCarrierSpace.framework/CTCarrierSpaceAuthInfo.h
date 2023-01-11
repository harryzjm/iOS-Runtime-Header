//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class NSData, NSDate;

@interface CTCarrierSpaceAuthInfo : NSObject <NSSecureCoding>
{
    _Bool _shouldCache;
    NSData *_accessToken;
    NSData *_refreshToken;
    NSDate *_expiresAt;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCache; // @synthesize shouldCache=_shouldCache;
@property(retain, nonatomic) NSDate *expiresAt; // @synthesize expiresAt=_expiresAt;
@property(retain, nonatomic) NSData *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSData *accessToken; // @synthesize accessToken=_accessToken;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end
