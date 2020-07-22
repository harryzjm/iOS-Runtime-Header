//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MCAirPlayPayload
{
    NSArray *_whitelistDestinations;
    NSArray *_destinationsWithPasswords;
    NSArray *_titlesAndDescriptions;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSArray *titlesAndDescriptions; // @synthesize titlesAndDescriptions=_titlesAndDescriptions;
@property(retain, nonatomic) NSArray *destinationsWithPasswords; // @synthesize destinationsWithPasswords=_destinationsWithPasswords;
@property(retain, nonatomic) NSArray *whitelistDestinations; // @synthesize whitelistDestinations=_whitelistDestinations;
- (void).cxx_destruct;
- (id)description;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

