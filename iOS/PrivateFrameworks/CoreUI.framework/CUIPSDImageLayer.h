//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIImage;

@interface CUIPSDImageLayer
{
    CUIImage *_image;
}

@property(readonly, nonatomic) struct CGImage *cgImageRef;
- (void)dealloc;
- (id)initWithCGImageRef:(struct CGImage *)arg1;

@end
