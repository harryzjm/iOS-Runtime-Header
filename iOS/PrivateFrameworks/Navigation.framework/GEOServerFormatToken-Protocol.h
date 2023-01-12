//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSCoding-Protocol.h>
#import <Navigation/NSObject-Protocol.h>

@class GEOGenericCombinations, NSArray, NSString;
@protocol GEOServerFormatTokenCountdownValue, GEOServerFormatTokenManeuverValue, GEOServerFormatTokenNumberData, GEOServerFormatTokenPriceValue, GEOServerFormatTokenUrlValue, GEOTransitArtworkDataSource;

@protocol GEOServerFormatToken <NSObject, NSCoding>
@property(readonly, nonatomic) GEOGenericCombinations *genericCombinations;
@property(readonly, nonatomic) id <GEOServerFormatTokenNumberData> numberData;
@property(readonly, nonatomic) id <GEOServerFormatTokenManeuverValue> maneuverValue;
@property(readonly, nonatomic) id <GEOServerFormatTokenUrlValue> urlValue;
@property(readonly, nonatomic) id <GEOServerFormatTokenCountdownValue> countdownValue;
@property(readonly, nonatomic) NSArray *timeStampValues;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artworkValue;
@property(readonly, nonatomic) id <GEOServerFormatTokenPriceValue> priceValue;
@property(readonly, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) _Bool shouldScaleUnits;
@property(readonly, nonatomic) float percentageValue;
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) NSArray *value3s;
@property(readonly, nonatomic) unsigned int value2;
@property(readonly, nonatomic) unsigned int value1;
@property(readonly, nonatomic) NSString *token;
@property(readonly, nonatomic) long long type;
@end

