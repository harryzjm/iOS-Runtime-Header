//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <DocumentCamera/ICDocCamZoomablePageContentViewDelegate-Protocol.h>
#import <DocumentCamera/UIScrollViewDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UIScrollView;
@protocol ICDocCamZoomablePageContentDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamZoomablePageContentViewController : UIViewController <UIScrollViewDelegate, ICDocCamZoomablePageContentViewDelegate>
{
    _Bool _shouldSetupScalesInViewDidLayoutSubviews;
    id <ICDocCamZoomablePageContentDelegate> _pageContentDelegate;
    UIImage *_image;
    UIImageView *_imageView;
    unsigned long long _pageIndex;
    UIScrollView *_scrollView;
    struct CGSize _prevScrollViewSize;
}

@property(nonatomic) struct CGSize prevScrollViewSize; // @synthesize prevScrollViewSize=_prevScrollViewSize;
@property(nonatomic) _Bool shouldSetupScalesInViewDidLayoutSubviews; // @synthesize shouldSetupScalesInViewDidLayoutSubviews=_shouldSetupScalesInViewDidLayoutSubviews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak id <ICDocCamZoomablePageContentDelegate> pageContentDelegate; // @synthesize pageContentDelegate=_pageContentDelegate;
- (void).cxx_destruct;
- (void)pageContentViewDidPencilDown;
- (_Bool)accessibilityPerformEscape;
- (void)setupAccessibility;
- (void)doubleTap:(id)arg1;
- (void)singleTap;
- (void)viewDidLayoutSubviews;
- (void)setupScales;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)view:(id)arg1 setCenter:(struct CGPoint)arg2;
@property(readonly, nonatomic) double zoomScale;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)resetImageCentering;
- (void)resetZoom;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

