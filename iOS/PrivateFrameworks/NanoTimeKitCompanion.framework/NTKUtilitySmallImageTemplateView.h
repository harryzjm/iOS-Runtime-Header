//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;
@protocol NTKComplicationImageView;

@interface NTKUtilitySmallImageTemplateView
{
    _Bool _needsLayoutContent;
    UIView<NTKComplicationImageView> *_imageView;
}

+ (void)load;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
@property(retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setNeedsLayoutContent;
- (void)_updateForTemplateChange;
- (void)_layoutContentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

