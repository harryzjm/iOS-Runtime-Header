//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDSpringBoardSwitcherPresentationInteraction : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_source;
    _Bool _didCommit;
    struct {
        unsigned int timestamp:1;
        unsigned int didCommit:1;
    } _has;
}

@property(nonatomic) _Bool didCommit; // @synthesize didCommit=_didCommit;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDidCommit;
@property(readonly, nonatomic) _Bool hasSource;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

