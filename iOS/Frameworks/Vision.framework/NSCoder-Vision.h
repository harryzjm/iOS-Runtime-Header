//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class MISSING_TYPE;

@interface NSCoder (Vision)
- (float)vn_decodeValidatedScoreForKey:(id)arg1;
- (void)vn_encodeValidatedScore:(float)arg1 forKey:(id)arg2;
- (float)vn_decodeValidatedConfidenceForKey:(id)arg1;
- (void)vn_encodeValidatedConfidence:(float)arg1 forKey:(id)arg2;
- (struct __CVBuffer *)vn_decodePixelBufferForKey:(id)arg1;
- (void)vn_encodePixelBuffer:(struct __CVBuffer *)arg1 forKey:(id)arg2;
- (struct CGRect)vn_decodeRectForKey:(id)arg1;
- (void)vn_encodeRect:(struct CGRect)arg1 forKey:(id)arg2;
- (struct CGSize)vn_decodeSizeForKey:(id)arg1;
- (void)vn_encodeSize:(struct CGSize)arg1 forKey:(id)arg2;
- (struct CGPoint)vn_decodePointForKey:(id)arg1;
- (void)vn_encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (CDStruct_5c5366e1)vn_decodeTimeRangeForKey:(id)arg1;
- (void)vn_encodeTimeRange:(CDStruct_5c5366e1)arg1 forKey:(id)arg2;
- (MISSING_TYPE *)vn_decodeSimdFloat3ForKey:(id)arg1;
- (void)vn_encodeSimdFloat3:(id)arg1 forKey: /* Error: Ran out of types for this method. */;
- (CDStruct_f1db2b5e)vn_decode4x4MatrixForKey:(id)arg1;
- (void)vn_encode4x4Matrix:(CDStruct_f1db2b5e)arg1 forKey:(id)arg2;
- (CDStruct_d80e62f2)vn_decode3x3MatrixForKey:(id)arg1;
- (void)vn_encode3x3Matrix:(CDStruct_d80e62f2)arg1 forKey:(id)arg2;
- (struct CGAffineTransform)vn_decodeCGAffineTransformForKey:(id)arg1;
- (void)vn_encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;
- (unsigned int)vn_decodeCodingVersionForKey:(id)arg1;
- (void)vn_encodeCodingVersion:(unsigned int)arg1 forKey:(id)arg2;
- (id)vn_decodeEntityUniqueIdentifierArrayForKey:(id)arg1;
- (id)vn_decodeEntityUniqueIdentifierForKey:(id)arg1;
- (void)vn_encodeEntityUniqueIdentifierArray:(id)arg1 forKey:(id)arg2;
- (void)vn_encodeEntityUniqueIdentifier:(id)arg1 forKey:(id)arg2;
- (id)vn_decodePersonUniqueIdentifierForKey:(id)arg1;
- (void)vn_encodePersonUniqueIdentifier:(id)arg1 forKey:(id)arg2;
@end

