//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPPunchoutForFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPPunchoutForFeedback : PBCodable <_CPPunchoutForFeedback, NSSecureCoding>
{
    int _knownBundleIdentifier;
    NSString *_name;
    NSString *_label;
    NSArray *_urls;
    NSString *_bundleIdentifier;
    unsigned long long _whichBundleid;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long whichBundleid; // @synthesize whichBundleid=_whichBundleid;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) int knownBundleIdentifier; // @synthesize knownBundleIdentifier=_knownBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (void)addUrls:(id)arg1;
- (void)clearUrls;
- (void)clearBundleid;
- (id)initWithFacade:(id)arg1;
- (id)feedbackJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
