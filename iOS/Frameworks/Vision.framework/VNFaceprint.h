//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VNFaceprint
{
    float _confidence;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)confidenceTypeForRevision:(unsigned long long)arg1;
+ (unsigned long long)currentSerializationVersion;
+ (unsigned long long)serializationMagicNumber;
+ (id)codingTypesToCodingKeys;
+ (unsigned int)currentCodingVersion;
+ (id)currentVersion;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializedLength;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long *)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 confidence:(float)arg6 requestRevision:(unsigned long long)arg7;
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6;

@end
