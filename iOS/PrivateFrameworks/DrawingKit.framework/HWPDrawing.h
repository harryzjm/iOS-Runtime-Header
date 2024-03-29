//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface HWPDrawing : PBCodable
{
    PBUnknownFields *_unknownFields;
    int _compressionAlgorithm;
    unsigned int _decompressedLength;
    NSData *_encodedCanvasSize;
    NSData *_encodedStrokesFrame;
    unsigned int _strokeDataFieldCount;
    NSData *_strokes;
    unsigned int _strokesCount;
    unsigned int _version;
    struct {
        unsigned int compressionAlgorithm:1;
        unsigned int decompressedLength:1;
        unsigned int strokeDataFieldCount:1;
        unsigned int strokesCount:1;
        unsigned int version:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *strokes; // @synthesize strokes=_strokes;
@property(nonatomic) unsigned int decompressedLength; // @synthesize decompressedLength=_decompressedLength;
@property(nonatomic) unsigned int strokesCount; // @synthesize strokesCount=_strokesCount;
@property(retain, nonatomic) NSData *encodedStrokesFrame; // @synthesize encodedStrokesFrame=_encodedStrokesFrame;
@property(retain, nonatomic) NSData *encodedCanvasSize; // @synthesize encodedCanvasSize=_encodedCanvasSize;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasStrokes;
@property(nonatomic) _Bool hasStrokeDataFieldCount;
@property(nonatomic) unsigned int strokeDataFieldCount; // @synthesize strokeDataFieldCount=_strokeDataFieldCount;
@property(nonatomic) _Bool hasDecompressedLength;
- (int)StringAsCompressionAlgorithm:(id)arg1;
- (id)compressionAlgorithmAsString:(int)arg1;
@property(nonatomic) _Bool hasCompressionAlgorithm;
@property(nonatomic) int compressionAlgorithm; // @synthesize compressionAlgorithm=_compressionAlgorithm;
@property(nonatomic) _Bool hasStrokesCount;
@property(readonly, nonatomic) _Bool hasEncodedStrokesFrame;
@property(readonly, nonatomic) _Bool hasEncodedCanvasSize;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) unsigned int version; // @synthesize version=_version;

@end

