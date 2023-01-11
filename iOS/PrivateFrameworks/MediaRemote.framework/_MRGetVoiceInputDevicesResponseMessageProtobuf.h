//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRGetVoiceInputDevicesResponseMessageProtobuf : PBCodable <NSCopying>
{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _deviceIDs;
    unsigned int _errorCode;
    struct {
        unsigned int errorCode:1;
    } _has;
}

@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasErrorCode;
- (void)setDeviceIDs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)deviceIDsAtIndex:(unsigned long long)arg1;
- (void)addDeviceIDs:(unsigned int)arg1;
- (void)clearDeviceIDs;
@property(readonly, nonatomic) unsigned int *deviceIDs;
@property(readonly, nonatomic) unsigned long long deviceIDsCount;
- (void)dealloc;

@end

