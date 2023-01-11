//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXCMMCloudViewViewDelegate-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXCMMCloudView, PXGadgetSpec;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCMMCloudGadgetViewController : UIViewController <PXCMMCloudViewViewDelegate, PXGadget>
{
    _Bool _isCPLOn;
    _Bool _hasContentToDisplay;
    long long _priority;
    id <PXCMMCloudGadgetViewControllerDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    NSString *_gadgetTitle;
    PXCMMCloudView *_cloudView;
}

+ (id)_userDefaults;
+ (void)setDidDismissCloudGadget:(_Bool)arg1;
+ (_Bool)didDismissCloudGadget;
@property(retain, nonatomic) PXCMMCloudView *cloudView; // @synthesize cloudView=_cloudView;
@property(copy, nonatomic) NSString *gadgetTitle; // @synthesize gadgetTitle=_gadgetTitle;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(nonatomic) __weak id <PXCMMCloudGadgetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (void)_updateViewInsets;
- (struct NSObject *)contentViewController;
@property(readonly, nonatomic) _Bool hasContentToDisplay; // @synthesize hasContentToDisplay=_hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)completeMyMomentCloudPhotoViewDismissTapped:(id)arg1;
- (void)completeMyMomentCloudPhotoViewLearnMoreTapped:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_updateCPLStatus;
@property(nonatomic) _Bool disableDismissAction;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic) struct CGRect visibleContentRect;

@end
