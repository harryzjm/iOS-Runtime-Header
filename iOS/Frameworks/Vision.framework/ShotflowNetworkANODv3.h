//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowNetworkANODv3
{
}

+ (_Bool)inputBGR;
+ (tuple_8621cb4d)inputBiasRGB;
+ (float)inputScale;
+ (_Bool)hasPose;
+ (const vector_eb9481f9 *)importantClasses;
+ (unsigned long long)mumberPosClasses;
+ (id)inputLayerName;
+ (id)modelName;
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)initializeBuffers;
- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;

@end
