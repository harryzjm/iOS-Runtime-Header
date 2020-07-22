//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BLPixelImageBuffer
{
}

+ (id)bufferWithSize:(struct CGSize)arg1 colorManagement:(int)arg2;
+ (id)bufferWithImage:(id)arg1 colorManagement:(int)arg2;
- (id)image;
- (void)drawInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)accessPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)accessPixelsByContextInBlock:(CDUnknownBlockType)arg1;

@end

