//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable
{
    NSString *_featureString;
    unsigned int _parameterSet;
    unsigned int _payload;
    NSMutableArray *_videoRuleCollections;
}

+ (Class)videoRuleCollectionsType;
@property(nonatomic) unsigned int parameterSet; // @synthesize parameterSet=_parameterSet;
@property(retain, nonatomic) NSString *featureString; // @synthesize featureString=_featureString;
@property(retain, nonatomic) NSMutableArray *videoRuleCollections; // @synthesize videoRuleCollections=_videoRuleCollections;
@property(nonatomic) unsigned int payload; // @synthesize payload=_payload;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)videoRuleCollectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoRuleCollectionsCount;
- (void)addVideoRuleCollections:(id)arg1;
- (void)clearVideoRuleCollections;
- (void)dealloc;

@end

