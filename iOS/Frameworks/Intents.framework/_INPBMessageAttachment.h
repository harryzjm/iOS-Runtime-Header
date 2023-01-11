//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBMessageAttachment-Protocol.h>

@class NSString, _INPBString, _INPBURLValue;

@interface _INPBMessageAttachment : PBCodable <_INPBMessageAttachment, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    int _type;
    _INPBURLValue *_fileURL;
    _INPBString *_filename;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) _INPBURLValue *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasFilename;
@property(readonly, nonatomic) _Bool hasFileURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

