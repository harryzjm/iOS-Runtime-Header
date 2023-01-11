//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPrivateAddMediaIntentData-Protocol.h>

@class NSArray, NSString, _INPBPrivateMediaIntentData;

@interface _INPBPrivateAddMediaIntentData : PBCodable <_INPBPrivateAddMediaIntentData, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_audioSearchResults;
    _INPBPrivateMediaIntentData *_privateMediaIntentData;
}

+ (_Bool)supportsSecureCoding;
+ (Class)audioSearchResultsType;
- (void).cxx_destruct;
@property(retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData; // @synthesize privateMediaIntentData=_privateMediaIntentData;
@property(copy, nonatomic) NSArray *audioSearchResults; // @synthesize audioSearchResults=_audioSearchResults;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasPrivateMediaIntentData;
- (id)audioSearchResultsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long audioSearchResultsCount;
- (void)addAudioSearchResults:(id)arg1;
- (void)clearAudioSearchResults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
