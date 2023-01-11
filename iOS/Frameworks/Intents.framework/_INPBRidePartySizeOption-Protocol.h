//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBPriceRangeValue, _INPBRangeValue;

@protocol _INPBRidePartySizeOption <NSObject>
@property(readonly, nonatomic) _Bool hasSizeDescription;
@property(copy, nonatomic) NSString *sizeDescription;
@property(readonly, nonatomic) _Bool hasPriceRange;
@property(retain, nonatomic) _INPBPriceRangeValue *priceRange;
@property(readonly, nonatomic) _Bool hasPartySizeRange;
@property(retain, nonatomic) _INPBRangeValue *partySizeRange;
@end

