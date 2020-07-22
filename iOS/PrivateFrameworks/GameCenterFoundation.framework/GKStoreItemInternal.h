//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString, NSURL;

@interface GKStoreItemInternal
{
    NSNumber *_adamID;
    NSString *_artistName;
    NSString *_priceDisplay;
    NSURL *_viewItemURL;
    NSURL *_shortViewItemURL;
    NSURL *_tellAFriendMessageContentsUrl;
    NSDate *_expirationDate;
    unsigned int _numberOfUserRatings;
    float _averageUserRating;
    _Bool _owned;
}

+ (id)secureCodedPropertyKeys;
@property(nonatomic) _Bool owned; // @synthesize owned=_owned;
@property(nonatomic) float averageUserRating; // @synthesize averageUserRating=_averageUserRating;
@property(nonatomic) unsigned int numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSURL *tellAFriendMessageContentsUrl; // @synthesize tellAFriendMessageContentsUrl=_tellAFriendMessageContentsUrl;
@property(retain, nonatomic) NSURL *shortViewItemURL; // @synthesize shortViewItemURL=_shortViewItemURL;
@property(retain, nonatomic) NSURL *viewItemURL; // @synthesize viewItemURL=_viewItemURL;
@property(retain, nonatomic) NSString *priceDisplay; // @synthesize priceDisplay=_priceDisplay;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
- (void)storeItemURLForGamePlatform:(unsigned char)arg1 withContext:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)storeItemURLForURL:(id)arg1 gamePlatform:(unsigned char)arg2 extraQueryParams:(id)arg3;
- (_Bool)isValid;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end

