//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIFilter;

@interface CMKEffectsFullsizeView
{
    CIFilter *_selectedFilter;
    unsigned long long _selectedFilterIndex;
    unsigned long long _filterIndex;
}

@property unsigned long long filterIndex; // @synthesize filterIndex=_filterIndex;
- (void).cxx_destruct;
- (void)_renderWithInputImage:(id)arg1 ciContext:(id)arg2 mirrorRendering:(_Bool)arg3;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 ciContext:(id)arg2 mirrorRendering:(_Bool)arg3;
- (id)_updateSelectedFilter;
- (void)setFixedSize:(struct CGSize)arg1;
- (void)_layoutGLLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

