//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MPStoreItemOffer : NSObject <NSSecureCoding>
{
    NSDictionary *_lookupDictionary;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_lookupDictionary;
- (void).cxx_destruct;
- (id)actionTextForType:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *price;
@property(readonly, copy, nonatomic) NSString *offerType;
@property(readonly, copy, nonatomic) NSString *formattedPrice;
@property(readonly, copy, nonatomic) NSString *buyParameters;
@property(readonly, copy, nonatomic) NSArray *assets;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (id)initWithLookupItemOffer:(id)arg1;

@end

