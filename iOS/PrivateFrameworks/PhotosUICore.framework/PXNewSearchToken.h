//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, PSIQueryToken, UIImage;

@interface PXNewSearchToken : NSObject
{
    NSString *_identifier;
    UIImage *_icon;
    NSAttributedString *_attributedTitle;
    unsigned long long _count;
    PSIQueryToken *_queryToken;
    NSString *_priorityAssetUUID;
}

+ (id)socialGroupDisplayText;
+ (id)unnamedPersonDisplayText;
+ (id)px_searchTokenForHashtag:(id)arg1;
+ (id)px_oneYearAgoSearchToken;
+ (id)px_searchTokensFromSiriSearchRequest:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *priorityAssetUUID; // @synthesize priorityAssetUUID=_priorityAssetUUID;
@property(readonly, nonatomic) PSIQueryToken *queryToken; // @synthesize queryToken=_queryToken;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)_imagewithSymbolName:(id)arg1;
- (id)_iconForSearchUserCategory:(unsigned long long)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToToken:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSocialGroup;
- (_Bool)isUnnamedPerson;
@property(readonly, nonatomic) _Bool hasLeadingHashtag;
@property(readonly, nonatomic) _Bool isPersistable;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2 priorityAssetUUID:(id)arg3;
- (id)initWithAttributedTitle:(id)arg1 queryToken:(id)arg2 priorityAssetUUID:(id)arg3;
- (id)init;

@end
