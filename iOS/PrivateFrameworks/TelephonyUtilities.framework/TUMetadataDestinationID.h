//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>

@class NSString;

@interface TUMetadataDestinationID : NSObject <NSCopying>
{
    NSString *_destinationID;
    NSString *_countryCode;
    struct __CFPhoneNumber *_phoneNumber;
    NSString *_cacheKey;
}

+ (id)destinationIDWithRecentCall:(id)arg1;
+ (id)destinationIDWithCall:(id)arg1;
+ (id)destinationIDWithDestinationID:(id)arg1 countryCode:(id)arg2;
@property(readonly, copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) struct __CFPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithRecentCall:(id)arg1;
- (id)initWithCall:(id)arg1;
- (id)initWithDestinationID:(id)arg1 countryCode:(id)arg2;

@end

