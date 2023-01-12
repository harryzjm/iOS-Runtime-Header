//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AppleMediaServicesUI/AMSUIMessageViewController-Protocol.h>

@class AMSBinaryPromise, AMSDialogRequest, AMSUIBubbleTipAppearance, NSString, UIImage;
@protocol AMSUIMessageViewControllerDelegate;

@interface AMSUIBubbleTipViewController : UIViewController <AMSUIMessageViewController>
{
    _Bool _shouldAutomaticallyReportMetrics;
    _Bool _didEnqueueMetrics;
    _Bool _isLoadingImage;
    AMSUIBubbleTipAppearance *_preferredAppearance;
    id <AMSUIMessageViewControllerDelegate> _delegate;
    AMSBinaryPromise *_loadPromise;
    UIImage *_loadedImage;
    AMSDialogRequest *_request;
    AMSUIBubbleTipAppearance *_requestAppearance;
    struct CGPoint _anchorPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSUIBubbleTipAppearance *requestAppearance; // @synthesize requestAppearance=_requestAppearance;
@property(retain, nonatomic) AMSDialogRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) UIImage *loadedImage; // @synthesize loadedImage=_loadedImage;
@property(nonatomic) _Bool isLoadingImage; // @synthesize isLoadingImage=_isLoadingImage;
@property(nonatomic) _Bool didEnqueueMetrics; // @synthesize didEnqueueMetrics=_didEnqueueMetrics;
@property(nonatomic) _Bool shouldAutomaticallyReportMetrics; // @synthesize shouldAutomaticallyReportMetrics=_shouldAutomaticallyReportMetrics;
@property(retain, nonatomic) AMSBinaryPromise *loadPromise; // @synthesize loadPromise=_loadPromise;
@property(nonatomic) __weak id <AMSUIMessageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
- (void)_didTapActionButton:(id)arg1;
@property(retain, nonatomic) AMSUIBubbleTipAppearance *preferredAppearance; // @synthesize preferredAppearance=_preferredAppearance;
- (void)enqueueImpressionMetrics;
- (void)_commitAppearance;
- (id)_titleLabelAttributes;
- (id)_messageLabelAttributes;
- (void)_updateTextWithAttributes;
- (void)_preloadImageIfNeeded;
- (void)_setImageWithURL:(id)arg1;
- (void)_setDialogRequest:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)messageView;
- (void)loadView;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
