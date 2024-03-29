//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOGenericCombinations, NSArray, NSString;
@protocol GEOServerFormatTokenCountdownValue, GEOServerFormatTokenManeuverValue, GEOServerFormatTokenNumberData, GEOServerFormatTokenPriceValue, GEOServerFormatTokenUrlValue, GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _TempToken : NSObject
{
    _Bool _shouldScaleUnits;
    unsigned int _value1;
    unsigned int _value2;
    float _percentageValue;
    int _waypointIndex;
    long long _type;
    NSString *_token;
    NSArray *_value3s;
    NSString *_stringValue;
    NSString *_accessibilityLabel;
    id <GEOServerFormatTokenPriceValue> _priceValue;
    id <GEOTransitArtworkDataSource> _artworkValue;
    NSArray *_timeStampValues;
    id <GEOServerFormatTokenCountdownValue> _countdownValue;
    id <GEOServerFormatTokenUrlValue> _urlValue;
    id <GEOServerFormatTokenManeuverValue> _maneuverValue;
    id <GEOServerFormatTokenNumberData> _numberData;
    GEOGenericCombinations *_genericCombinations;
}

- (void).cxx_destruct;
@property(nonatomic) int waypointIndex; // @synthesize waypointIndex=_waypointIndex;
@property(retain, nonatomic) GEOGenericCombinations *genericCombinations; // @synthesize genericCombinations=_genericCombinations;
@property(retain, nonatomic) id <GEOServerFormatTokenNumberData> numberData; // @synthesize numberData=_numberData;
@property(retain, nonatomic) id <GEOServerFormatTokenManeuverValue> maneuverValue; // @synthesize maneuverValue=_maneuverValue;
@property(retain, nonatomic) id <GEOServerFormatTokenUrlValue> urlValue; // @synthesize urlValue=_urlValue;
@property(retain, nonatomic) id <GEOServerFormatTokenCountdownValue> countdownValue; // @synthesize countdownValue=_countdownValue;
@property(retain, nonatomic) NSArray *timeStampValues; // @synthesize timeStampValues=_timeStampValues;
@property(retain, nonatomic) id <GEOTransitArtworkDataSource> artworkValue; // @synthesize artworkValue=_artworkValue;
@property(retain, nonatomic) id <GEOServerFormatTokenPriceValue> priceValue; // @synthesize priceValue=_priceValue;
@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) _Bool shouldScaleUnits; // @synthesize shouldScaleUnits=_shouldScaleUnits;
@property(nonatomic) float percentageValue; // @synthesize percentageValue=_percentageValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSArray *value3s; // @synthesize value3s=_value3s;
@property(nonatomic) unsigned int value2; // @synthesize value2=_value2;
@property(nonatomic) unsigned int value1; // @synthesize value1=_value1;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithToken:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

