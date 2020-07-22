//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class CNPostalAddress, GEOAddress, GEOAddressObject, GEOPDAddress, GEOPDAddressObject, GEOPDEntity, GEOPDPlaceInfo, GEOStructuredAddress, NSDictionary, NSOrderedSet, NSString;

@protocol GEOAddressObjectProtocol <NSObject>
+ (NSString *)libraryVersion;
@property(readonly, nonatomic) int knownAccuracy;
@property(readonly, nonatomic) _Bool hasKnownAccuracy;
- (NSString *)spokenAddressForLocale:(NSString *)arg1;
- (NSString *)phoneticLocaleIdentifier;
- (NSOrderedSet *)titlesForMapRect:(CDStruct_90e2a262)arg1;
- (NSString *)venueShortAddress;
- (NSString *)venueLevel;
- (NSString *)venueLabel:(long long)arg1;
- (NSString *)venueLabel;
- (NSString *)parkingDisplayName;
- (NSString *)weatherDisplayName;
- (NSString *)cityDisplayNameWithFallback:(_Bool)arg1;
- (NSString *)shortAddress;
- (NSString *)fullAddressNoCurrentCountryWithMultiline:(_Bool)arg1;
- (NSString *)fullAddressWithMultiline:(_Bool)arg1 relative:(GEOAddressObject *)arg2;
- (NSString *)fullAddressWithMultiline:(_Bool)arg1;
- (GEOAddress *)phoneticAddress;
- (NSString *)phoneticName;
- (GEOStructuredAddress *)spokenStructuredAddress;
- (NSString *)spokenAddress;
- (NSString *)spokenName;
- (CNPostalAddress *)cnPostalAddress;
- (NSDictionary *)addressDictionary;
- (GEOAddress *)address;
- (NSString *)name;
- (id)initWithCurrentCountry;
- (id)initWithCNPostalAddress:(CNPostalAddress *)arg1 langauge:(NSString *)arg2 country:(NSString *)arg3 phoneticLocale:(NSString *)arg4;
- (id)initWithContactAddressDictionary:(NSDictionary *)arg1 langauge:(NSString *)arg2 country:(NSString *)arg3 phoneticLocale:(NSString *)arg4;
- (id)initWithPlaceDataAddressObject:(GEOPDAddressObject *)arg1 placeDataAddress:(GEOPDAddress *)arg2 placeDataInfo:(GEOPDPlaceInfo *)arg3 placeDataEntity:(GEOPDEntity *)arg4 language:(NSString *)arg5 country:(NSString *)arg6 phoneticLocale:(NSString *)arg7;
@end

