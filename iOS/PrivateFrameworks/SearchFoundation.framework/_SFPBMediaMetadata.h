//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMediaMetadata-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBMediaMetadata : PBCodable <_SFPBMediaMetadata, NSSecureCoding>
{
    int _mediaType;
    NSString *_mediaName;
    NSString *_artistName;
    NSString *_albumName;
    NSArray *_mediaPunchouts;
    NSArray *_bundleIdentifiersToExcludes;
    NSString *_disambiguationTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *disambiguationTitle; // @synthesize disambiguationTitle=_disambiguationTitle;
@property(copy, nonatomic) NSArray *bundleIdentifiersToExcludes; // @synthesize bundleIdentifiersToExcludes=_bundleIdentifiersToExcludes;
@property(copy, nonatomic) NSArray *mediaPunchouts; // @synthesize mediaPunchouts=_mediaPunchouts;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *mediaName; // @synthesize mediaName=_mediaName;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)bundleIdentifiersToExcludeAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleIdentifiersToExcludeCount;
- (void)addBundleIdentifiersToExclude:(id)arg1;
- (void)clearBundleIdentifiersToExclude;
- (void)setBundleIdentifiersToExclude:(id)arg1;
- (id)mediaPunchoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaPunchoutsCount;
- (void)addMediaPunchouts:(id)arg1;
- (void)clearMediaPunchouts;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
