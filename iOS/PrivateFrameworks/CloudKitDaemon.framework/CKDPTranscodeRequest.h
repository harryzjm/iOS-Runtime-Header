//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKCodeRecordTransport, NSData;

__attribute__((visibility("hidden")))
@interface CKDPTranscodeRequest : PBRequest <NSCopying>
{
    NSData *_constructedAssetDownloadParameters;
    CKCodeRecordTransport *_record;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *constructedAssetDownloadParameters; // @synthesize constructedAssetDownloadParameters=_constructedAssetDownloadParameters;
@property(retain, nonatomic) CKCodeRecordTransport *record; // @synthesize record=_record;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasConstructedAssetDownloadParameters;
@property(readonly, nonatomic) _Bool hasRecord;

@end
