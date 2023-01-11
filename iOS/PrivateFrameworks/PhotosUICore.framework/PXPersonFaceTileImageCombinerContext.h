//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PXPersonFaceTileImageCombinerContext : NSObject
{
    _Bool _isLTR;
    double _displayScale;
    double _imageSize;
    double _imageOffset;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    double _borderWidth;
}

@property(readonly, nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(readonly, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double imageOffset; // @synthesize imageOffset=_imageOffset;
@property(readonly, nonatomic) double imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) _Bool isLTR; // @synthesize isLTR=_isLTR;
@property(readonly, nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
- (void).cxx_destruct;
- (id)initWithDisplayScale:(double)arg1 isLTR:(_Bool)arg2 imageSize:(double)arg3 imageOffset:(double)arg4 backgroundColor:(id)arg5 borderColor:(id)arg6 borderWidth:(double)arg7;

@end

