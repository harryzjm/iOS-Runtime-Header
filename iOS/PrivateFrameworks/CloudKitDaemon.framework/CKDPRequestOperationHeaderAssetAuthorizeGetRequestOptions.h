//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions : PBCodable <NSCopying>
{
    unsigned long long _contentRequestAuthorizeGetOptions;
    NSMutableArray *_contentRequestHeaders;
    struct {
        unsigned int contentRequestAuthorizeGetOptions:1;
    } _has;
}

+ (Class)contentRequestHeadersType;
@property(nonatomic) unsigned long long contentRequestAuthorizeGetOptions; // @synthesize contentRequestAuthorizeGetOptions=_contentRequestAuthorizeGetOptions;
@property(retain, nonatomic) NSMutableArray *contentRequestHeaders; // @synthesize contentRequestHeaders=_contentRequestHeaders;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasContentRequestAuthorizeGetOptions;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentRequestHeadersCount;
- (void)addContentRequestHeaders:(id)arg1;
- (void)clearContentRequestHeaders;

@end
