//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MPUArtworkView, NSArray, UIImage, UIImageView;

@interface VideosExtrasConstrainedArtworkContainerView : UIView
{
    _Bool _shouldAutoresizeMaskLayerToFillBounds;
    _Bool _shouldBottomAlignArtwork;
    MPUArtworkView *_artworkView;
    UIImage *_overlayImage;
    double _overlayScale;
    UIImageView *_overlayView;
    NSArray *_overlaySizeConstraints;
}

@property(retain, nonatomic) NSArray *overlaySizeConstraints; // @synthesize overlaySizeConstraints=_overlaySizeConstraints;
@property(retain, nonatomic) UIImageView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) double overlayScale; // @synthesize overlayScale=_overlayScale;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) _Bool shouldBottomAlignArtwork; // @synthesize shouldBottomAlignArtwork=_shouldBottomAlignArtwork;
@property(nonatomic) _Bool shouldAutoresizeMaskLayerToFillBounds; // @synthesize shouldAutoresizeMaskLayerToFillBounds=_shouldAutoresizeMaskLayerToFillBounds;
@property(retain, nonatomic) MPUArtworkView *artworkView; // @synthesize artworkView=_artworkView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

