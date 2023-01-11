//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCoding-Protocol.h>

@class NSDictionary, NSString;

@interface MPStoreOfferContentRating : NSObject <NSCoding>
{
    NSDictionary *_dictionary;
    long long _ratingLevel;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    unsigned long long _ratingSystem;
}

+ (unsigned long long)ratingSystemFromString:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long ratingSystem; // @synthesize ratingSystem=_ratingSystem;
@property(copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(copy, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property(nonatomic) long long ratingLevel; // @synthesize ratingLevel=_ratingLevel;
- (void).cxx_destruct;
@property(readonly, nonatomic) id mediaPropertyContentRatingValue;
- (_Bool)_isRatingSystemForTV:(unsigned long long)arg1;
- (_Bool)_isRatingSystemForMusic:(unsigned long long)arg1;
- (_Bool)_isRatingSystemForMovies:(unsigned long long)arg1;
- (_Bool)_isRatingSystemForApps:(unsigned long long)arg1;
- (id)valueForProperty:(id)arg1;
@property(readonly, nonatomic, getter=isRestrictedPurchase) _Bool restrictedPurchase;
@property(readonly, nonatomic, getter=isRestrictedContent) _Bool restrictedContent;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

