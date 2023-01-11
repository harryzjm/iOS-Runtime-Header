//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSData;

@interface WFPBAceCommandRequest : PBRequest <NSCopying>
{
    NSData *_aceCommandData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *aceCommandData; // @synthesize aceCommandData=_aceCommandData;
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
