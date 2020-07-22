//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BLRetouchReefRepairOperator : NSObject
{
    void *_buffer;
    int _rowBytes;
    int _width;
    int _height;
    void *_maskBuffer;
    int _maskRowBytes;
    int _maskWidth;
    int _maskHeight;
    int _brushSize;
    struct CGRect _maskRect;
}

+ (int)borderWithBrushSize:(int)arg1;
- (void)repairWithOffset:(struct CGPoint)arg1;
- (struct CGPoint)analyzeOffset;
- (void)repair;
- (void)setBrushSize:(int)arg1;
- (void)setMaskData:(void *)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)setMaskRect:(struct CGRect)arg1;
- (id)initWithRepairSourceData:(void *)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4;

@end

