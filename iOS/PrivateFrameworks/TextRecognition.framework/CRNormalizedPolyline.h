//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRCodable-Protocol.h>
#import <TextRecognition/CRPolyline-Protocol.h>

@class CRImageSpacePolyline, NSArray, NSString;

@interface CRNormalizedPolyline : NSObject <CRCodable, CRPolyline>
{
    CRImageSpacePolyline *_denormalizedPolyline;
    struct CGPath *__pathRef;
    struct CGSize _normalizationSize;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property struct CGPath *_pathRef; // @synthesize _pathRef=__pathRef;
@property(retain) CRImageSpacePolyline *denormalizedPolyline; // @synthesize denormalizedPolyline=_denormalizedPolyline;
@property struct CGSize normalizationSize; // @synthesize normalizationSize=_normalizationSize;
- (id)initWithCRCodableDataRepresentation:(id)arg1;
- (id)crCodableDataRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)simplified;
- (void)appendPolyline:(id)arg1;
- (void)appendPoint:(struct CGPoint)arg1;
- (void)enumeratePoints:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *pointValues;
@property(readonly) unsigned long long pointCount;
@property(readonly) const struct CGPath *path;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)polylineByAppendingPolyline:(id)arg1;
- (id)polylineByAppendingPoint:(struct CGPoint)arg1;
- (id)initWithNormalizedPointValues:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithDenormalizedPolyline:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithPolyline:(id)arg1;
- (id)init;
- (id)initWithNormalizedPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2 size:(struct CGSize)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
