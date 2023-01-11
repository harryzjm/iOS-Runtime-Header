//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class CloudFamilyAnalysisPETContactEvents, NSString;

@interface CloudFamilyAnalysisPETCloudFamilyAnalysisEvent : PBCodable <NSCopying>
{
    int _batch;
    NSString *_collectionId;
    CloudFamilyAnalysisPETContactEvents *_contactEvents;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CloudFamilyAnalysisPETContactEvents *contactEvents; // @synthesize contactEvents=_contactEvents;
@property(nonatomic) int batch; // @synthesize batch=_batch;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *collectionId; // @synthesize collectionId=_collectionId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end
