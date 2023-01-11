//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CarPlaySupport/BNPresentable-Protocol.h>

@class CPSBannerItem, CPSGuidanceBannerView, NSString, PLPlatterView;
@protocol CPSBannerViewControllerDelegate;

@interface CPSBannerViewController : UIViewController <BNPresentable>
{
    NSString *_requestIdentifier;
    id <CPSBannerViewControllerDelegate> _delegate;
    CPSBannerItem *_bannerItem;
    PLPlatterView *_platterView;
    CPSGuidanceBannerView *_bannerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CPSGuidanceBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) PLPlatterView *platterView; // @synthesize platterView=_platterView;
@property(readonly, nonatomic) CPSBannerItem *bannerItem; // @synthesize bannerItem=_bannerItem;
@property(nonatomic) __weak id <CPSBannerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleBackGesture:(id)arg1;
- (void)_bannerTapped:(id)arg1;
- (struct CGSize)preferredContentSizeWithPresentationSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableDidAppearAsBanner:(id)arg1;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
- (void)updateBannerWithBannerItem:(id)arg1;
- (void)viewDidLoad;
- (void)_wheelChangedWithEvent:(id)arg1;
- (id)initWithBannerItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long presentableType;
@property(readonly) Class superclass;

@end
