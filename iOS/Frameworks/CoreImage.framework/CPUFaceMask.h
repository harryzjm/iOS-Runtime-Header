//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPUFaceMask : NSObject
{
    struct CPUColorCube _colorCube;
    struct CPUColorCube _tempColorCube;
    struct MetalFaceMaskCubeInputScaling_t _inputScalingForCube;
    int _dilateRadius;
    int _erodeRadius;
}

@property(nonatomic) int erodeRadius; // @synthesize erodeRadius=_erodeRadius;
@property(nonatomic) int dilateRadius; // @synthesize dilateRadius=_dilateRadius;
- (int)drawEyeMaskUsingQuads:(struct MetalFaceMaskEyeQuads_t *)arg1 OutputMask:(char *)arg2 OutputBytesPerRow:(unsigned long long)arg3 OutputRegion:(struct CGRect)arg4;
- (int)findToothMaskUsingInputImage:(const char *)arg1 InputBytesPerRow:(unsigned long long)arg2 InputRegion:(struct CGRect)arg3 OutputMask:(char *)arg4 OutputBytesPerRow:(unsigned long long)arg5 OutputRegion:(struct CGRect)arg6 TeethBounds:(struct CGRect)arg7 SeedPoints:(struct CGPoint *)arg8 NumberOfSeedPoints:(unsigned long long)arg9 FillValue:(unsigned char)arg10;
- (int)findSkinMaskUsingInputImage:(const char *)arg1 InputBytesPerRow:(unsigned long long)arg2 InputRegion:(struct CGRect)arg3 OutputMask:(char *)arg4 OutputBytesPerRow:(unsigned long long)arg5 OutputRegion:(struct CGRect)arg6 FaceBounds:(struct CGRect)arg7 SeedPoints:(struct CGPoint *)arg8 NumberOfSeedPoints:(unsigned long long)arg9 FillValue:(unsigned char)arg10;
- (int)trainSkinMaskUsingInputImage:(const char *)arg1 InputBytesPerRow:(unsigned long long)arg2 InputRegion:(struct CGRect)arg3 QuadRegion:(struct CGPoint [4])arg4;
- (int)clearOutputMask:(char *)arg1 WithBytesPerRow:(unsigned long long)arg2 OutputRegion:(struct CGRect)arg3;
- (id)init;

@end

