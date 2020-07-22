//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, OITSUImage;

__attribute__((visibility("hidden")))
@interface MFPBitmapImage
{
    NSData *mBitmapData;
    OITSUImage *mPhoneBitmapImage;
    struct CGSize mPixelSize;
    struct CGSize mPointSize;
}

- (struct CGSize)pointSize;
- (struct CGSize)pixelSize;
- (id)phoneImage;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 unit:(int)arg3 effect:(id)arg4;
- (void)dealloc;
- (id)initWithBitmapData:(id)arg1;

@end

