//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class MTMaterialView, NSString, PUPhotoEditButtonMaterialView, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface PUPhotoEditNotchButton : UIButton
{
    UIColor *_backgroundColor;
    MTMaterialView *_backgroundView;
    PUPhotoEditButtonMaterialView *_materialView;
    NSString *_notchButtonTitle;
    NSString *_symbolName;
    long long _notchButtonType;
}

- (void).cxx_destruct;
@property(nonatomic) long long notchButtonType; // @synthesize notchButtonType=_notchButtonType;
@property(retain, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(retain, nonatomic) NSString *notchButtonTitle; // @synthesize notchButtonTitle=_notchButtonTitle;
@property(readonly, nonatomic) PUPhotoEditButtonMaterialView *materialView; // @synthesize materialView=_materialView;
@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)_updateContentImage;
- (void)_didInvalidateContentImageMetrics;
@property(readonly, nonatomic) struct UIEdgeInsets backgroundInsets;
@property(readonly, nonatomic) UIImage *defaultContentImage;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

