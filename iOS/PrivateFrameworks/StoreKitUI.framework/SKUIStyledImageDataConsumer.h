//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKColor, UIColor;

@interface SKUIStyledImageDataConsumer
{
    struct UIEdgeInsets _borderRadii;
    IKColor *_iKBackgroundColor;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    long long _imageContentMode;
    long long _imageTreatment;
    double _shadowRadius;
    UIColor *_shadowColor;
    struct CGSize _imageSize;
    struct CGSize _shadowOffset;
    struct UIEdgeInsets _borderWidths;
    struct UIEdgeInsets _borderMargins;
    struct UIEdgeInsets _imagePadding;
}

+ (_Bool)isImageCompressionEnabled;
+ (id)purchasedMessagesConsumer;
+ (id)categoriesMessagesConsumer;
+ (id)manageMessagesConsumer;
+ (id)wishlistProductImageConsumer;
+ (id)wishlistIconConsumer;
+ (id)updatesProductImageConsumer;
+ (id)updatesIconConsumer;
+ (id)topChartsNewsstandConsumer;
+ (id)topChartsIconConsumer;
+ (id)swooshNewsstandConsumer;
+ (id)shareSheetIconConsumer;
+ (id)safariBannerProductImageConsumer;
+ (id)safariBannerIconConsumer;
+ (id)roomProductImageConsumer;
+ (id)roomIconConsumer;
+ (id)purchasedProductImageConsumer;
+ (id)purchasedIconConsumer;
+ (id)productPageProductImageConsumer;
+ (id)productImageConsumerWithSize:(struct CGSize)arg1;
+ (id)parentBundleIconConsumer;
+ (id)newsstandSwooshNewsstandConsumer;
+ (id)newsstandRoomNewsstandConsumer;
+ (id)mixedTopChartsNewsstandConsumer;
+ (id)lockupProductImageConsumerWithSize:(long long)arg1;
+ (id)lockupIconConsumerWithSize:(long long)arg1;
+ (id)listIconConsumer;
+ (id)gridIconConsumer;
+ (id)giftThemeProductImageConsumer;
+ (id)giftThemeIconConsumer;
+ (id)giftResultProductImageConsumer;
+ (id)giftResultIconConsumer;
+ (id)giftComposeProductImageConsumer;
+ (id)categoryIconConsumer;
+ (id)cardProductImageConsumer;
+ (id)cardIconConsumer;
+ (id)brickConsumerWithBrickSize:(struct CGSize)arg1;
+ (id)brickConsumer;
+ (id)applePackIconConsumer;
+ (id)appIconConsumerWithSize:(struct CGSize)arg1;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) long long imageTreatment; // @synthesize imageTreatment=_imageTreatment;
@property(nonatomic) struct UIEdgeInsets imagePadding; // @synthesize imagePadding=_imagePadding;
@property(nonatomic) long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(nonatomic) struct UIEdgeInsets borderMargins; // @synthesize borderMargins=_borderMargins;
@property(nonatomic) struct UIEdgeInsets borderWidths; // @synthesize borderWidths=_borderWidths;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)_leftToRightGradient:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_uberImageWithBounds:(struct CGRect)arg1 inputSize:(struct CGSize)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_uberBannerImageWithBounds:(struct CGRect)arg1 inputSize:(struct CGSize)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_roundedBorderWithBounds:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_radialBlurImageWithBounds:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_scaledImageWithBounds:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_arcRoundedImageWithBounds:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 cornerRadius:(double)arg3 drawBlock:(CDUnknownBlockType)arg4;
- (id)_imageWithSize:(struct CGSize)arg1 isOpaque:(_Bool)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_outputImageWithInputSize:(struct CGSize)arg1 outputSize:(struct CGSize)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (void)_drawBordersWithImageRect:(struct CGRect)arg1 bounds:(struct CGRect)arg2;
- (id)_defaultPlaceholderColor;
- (_Bool)_backgroundIsOpaque;
- (CDUnknownBlockType)_placeholderCornerPathBlock;
- (id)imagePlaceholderForColor:(id)arg1;
- (_Bool)isImagePlaceholderAvailable;
- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize)arg2;
- (id)imageForColor:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 treatment:(long long)arg2;
- (id)init;

@end

