//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKPlacePhotosViewDelegate-Protocol.h>
#import <MapKit/UIScrollViewDelegate-Protocol.h>

@class GEOMapItemAttribution, NSString, UIScrollView, UIStackView;
@protocol GEOPictureItemContainer, MKPictureItemContainerAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPictureItemContainerViewController : UIViewController <UIScrollViewDelegate, MKPlacePhotosViewDelegate>
{
    id <MKPictureItemContainerAnalyticsDelegate> _analyticsDelegate;
    id <GEOPictureItemContainer> _pictureItemContainer;
    GEOMapItemAttribution *_attribution;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    struct CGPoint _beginAnalyticsScrollingPoint;
}

@property(nonatomic) struct CGPoint beginAnalyticsScrollingPoint; // @synthesize beginAnalyticsScrollingPoint=_beginAnalyticsScrollingPoint;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) GEOMapItemAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) id <GEOPictureItemContainer> pictureItemContainer; // @synthesize pictureItemContainer=_pictureItemContainer;
@property(nonatomic) __weak id <MKPictureItemContainerAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
- (void).cxx_destruct;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)updateUIForTheme:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didTapOnPictureItemView:(id)arg1;
- (id)visiblePictureItemViews;
- (void)downloadImageForVisiblePictureItemViews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPictureItemContainer:(id)arg1 attribution:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
