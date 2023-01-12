//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ICMusicSubscriptionStatusCacheKey : NSObject
{
    NSNumber *_DSID;
    NSString *_phoneNumber;
    NSString *_storefrontIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
- (id)stringRepresentation;
- (id)initWithStringRepresentation:(id)arg1;
- (id)dictionaryRepresentationIncludingDSID:(_Bool)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 requiringDSID:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;

@end

