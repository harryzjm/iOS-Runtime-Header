//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _MRSupportedCommandsProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_supportedCommands;
}

+ (Class)supportedCommandType;
@property(retain, nonatomic) NSMutableArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
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
- (id)supportedCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedCommandsCount;
- (void)addSupportedCommand:(id)arg1;
- (void)clearSupportedCommands;

@end

