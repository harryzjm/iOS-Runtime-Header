//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class PXGTitleSubtitleViewConfiguration;

@interface PXGTitleSubtitleView <PXGReusableView>
{
    PXGTitleSubtitleViewConfiguration *_userData;
    struct CGRect _clippingRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) PXGTitleSubtitleViewConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (void)prepareForReuse;
- (void)becomeReusable;

@end
