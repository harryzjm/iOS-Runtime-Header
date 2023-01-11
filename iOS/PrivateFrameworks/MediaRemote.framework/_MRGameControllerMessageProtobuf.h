//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRGameControllerButtonsProtobuf, _MRGameControllerDigitizerProtobuf, _MRGameControllerMotionProtobuf;

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _controllerID;
    _MRGameControllerButtonsProtobuf *_buttons;
    _MRGameControllerDigitizerProtobuf *_digitizer;
    _MRGameControllerMotionProtobuf *_motion;
    CDStruct_669c4a63 _has;
}

@property(retain, nonatomic) _MRGameControllerDigitizerProtobuf *digitizer; // @synthesize digitizer=_digitizer;
@property(retain, nonatomic) _MRGameControllerButtonsProtobuf *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) _MRGameControllerMotionProtobuf *motion; // @synthesize motion=_motion;
@property(nonatomic) unsigned long long controllerID; // @synthesize controllerID=_controllerID;
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
@property(readonly, nonatomic) _Bool hasDigitizer;
@property(readonly, nonatomic) _Bool hasButtons;
@property(readonly, nonatomic) _Bool hasMotion;
@property(nonatomic) _Bool hasControllerID;

@end

