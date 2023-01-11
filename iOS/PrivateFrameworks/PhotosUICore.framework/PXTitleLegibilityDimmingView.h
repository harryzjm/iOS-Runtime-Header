//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class CABackdropLayer, CALayer, NSString;
@protocol NSCopying;

@interface PXTitleLegibilityDimmingView : UIView <PXGReusableView>
{
    CALayer *_filterLayer;
    CABackdropLayer *_backdropLayer;
    id <NSCopying> _userData;
    NSString *_gradientImageName;
    struct CGRect _clippingRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *gradientImageName; // @synthesize gradientImageName=_gradientImageName;
@property(copy, nonatomic) id <NSCopying> userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
