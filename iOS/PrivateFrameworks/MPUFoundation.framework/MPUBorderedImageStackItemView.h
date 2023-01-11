//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPUBorderConfiguration, MPUBorderDrawingCache, UIImageView;

@interface MPUBorderedImageStackItemView
{
    UIImageView *_borderImageView;
    MPUBorderConfiguration *_borderConfiguration;
    MPUBorderDrawingCache *_borderDrawingCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache; // @synthesize borderDrawingCache=_borderDrawingCache;
@property(copy, nonatomic) MPUBorderConfiguration *borderConfiguration; // @synthesize borderConfiguration=_borderConfiguration;
- (void)_updateBorderImageView;
- (void)_borderDrawingCacheWasInvalidated:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
