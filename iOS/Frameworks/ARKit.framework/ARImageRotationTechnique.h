//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ARImageRotationTechnique
{
    struct OpaqueVTImageRotationSession *_vtPixelTransferSession;
    struct __CVPixelBufferPool *_bufferPool;
    long long _rotationAngle;
    long long _mirrorMode;
}

- (_Bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (void)dealloc;
- (id)initWithRotation:(long long)arg1 mirror:(long long)arg2;

@end
