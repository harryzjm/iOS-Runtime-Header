//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, _MRAudioFormatSettingsProtobuf;

@interface _MRVoiceInputDeviceDescriptorProtobuf : PBCodable <NSCopying>
{
    _MRAudioFormatSettingsProtobuf *_defaultFormat;
    NSMutableArray *_supportedFormats;
}

+ (Class)supportedFormatsType;
@property(retain, nonatomic) _MRAudioFormatSettingsProtobuf *defaultFormat; // @synthesize defaultFormat=_defaultFormat;
@property(retain, nonatomic) NSMutableArray *supportedFormats; // @synthesize supportedFormats=_supportedFormats;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDefaultFormat;
- (id)supportedFormatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedFormatsCount;
- (void)addSupportedFormats:(id)arg1;
- (void)clearSupportedFormats;
- (void)dealloc;

@end

