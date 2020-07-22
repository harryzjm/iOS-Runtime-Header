//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSIndexPath, PUGridMagnifiedView;

__attribute__((visibility("hidden")))
@interface PUGridMagnifiedImageViewController : UIViewController
{
    _Bool _canShowFullScreen;
    id _delegate;
    NSIndexPath *_itemIndexPath;
    double _magnifiedYOffset;
    PUGridMagnifiedView *_magnifiedView;
    double _shadowRadius;
    double _shadowOpacity;
    struct CGPoint _gestureWindLocation;
    struct CGSize _imageSize;
    struct CGSize _magnifiedSize;
    struct CGSize _shadowOffset;
    struct CGPoint _lastLocation;
    struct CGRect _itemWindFrame;
    struct CGRect _trackingWindFrame;
    struct UIEdgeInsets _magnifiedDragEdgeInsets;
}

@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) struct CGSize magnifiedSize; // @synthesize magnifiedSize=_magnifiedSize;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) struct UIEdgeInsets magnifiedDragEdgeInsets; // @synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets;
@property(retain, nonatomic) PUGridMagnifiedView *magnifiedView; // @synthesize magnifiedView=_magnifiedView;
@property(nonatomic) double magnifiedYOffset; // @synthesize magnifiedYOffset=_magnifiedYOffset;
@property(nonatomic) struct CGRect trackingWindFrame; // @synthesize trackingWindFrame=_trackingWindFrame;
@property(readonly, nonatomic) _Bool canShowFullScreen; // @synthesize canShowFullScreen=_canShowFullScreen;
@property(nonatomic) struct CGRect itemWindFrame; // @synthesize itemWindFrame=_itemWindFrame;
@property(retain, nonatomic) NSIndexPath *itemIndexPath; // @synthesize itemIndexPath=_itemIndexPath;
@property(nonatomic) struct CGPoint gestureWindLocation; // @synthesize gestureWindLocation=_gestureWindLocation;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)magnifiedImageWindFrame;
- (id)imageForIndexPath:(id)arg1;
- (id)imageForMagnifyLocation:(struct CGPoint)arg1;
- (_Bool)isValidMagnifyLocation:(struct CGPoint)arg1;
- (_Bool)gestureInNewLocation;
- (void)hideMagnifiedThumbnailWithAnimation:(_Bool)arg1;
- (void)setupMagnifiedView;
- (id)installMagnifiedView;
- (void)continueMagnification;
- (void)beginMagnificationAnimated:(_Bool)arg1;
- (void)prepareForRelease;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

@end

