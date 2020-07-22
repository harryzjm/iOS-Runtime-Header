//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBAnfComponentExposure : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _publisherArticleVersionInt64;
    NSString *_anfComponentId;
    NSString *_anfComponentRole;
    NSString *_anfComponentType;
    NSString *_articleId;
    NSString *_articleVersion;
    NSString *_metadata;
    NSString *_sourceChannelId;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int publisherArticleVersionInt64:1;
    } _has;
}

@property(nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(retain, nonatomic) NSString *articleVersion; // @synthesize articleVersion=_articleVersion;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *anfComponentRole; // @synthesize anfComponentRole=_anfComponentRole;
@property(retain, nonatomic) NSString *anfComponentId; // @synthesize anfComponentId=_anfComponentId;
@property(retain, nonatomic) NSString *anfComponentType; // @synthesize anfComponentType=_anfComponentType;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasBackendArticleVersionInt64;
@property(nonatomic) _Bool hasPublisherArticleVersionInt64;
@property(readonly, nonatomic) _Bool hasArticleVersion;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(readonly, nonatomic) _Bool hasAnfComponentRole;
@property(readonly, nonatomic) _Bool hasAnfComponentId;
@property(readonly, nonatomic) _Bool hasAnfComponentType;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleId;

@end

