//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNHomeAppFaceAnalyzerMultiDetectorBase
{
}

- (_Bool)prepare_vImageBufferForCVPixelBuffer:(struct __CVBuffer *)arg1 vImageBuffer:(struct vImage_Buffer *)arg2 error:(id *)arg3;
- (struct CGRect)calculateCropRectForInputFace:(id)arg1 imageBuffer:(id)arg2 options:(id)arg3 error:(id *)arg4;

@end

