//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSUIWebPagePresenter-Protocol.h>

@class AMSUIWebAppearance, AMSUIWebBrowserPageModel, AMSUIWebClientContext, AMSUIWebView, NSString, NSURL;
@protocol AMSUIWebPageViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIWebPageViewController <AMSUIWebPagePresenter>
{
    _Bool _replacing;
    id <AMSUIWebPageViewControllerDelegate> _delegate;
    AMSUIWebView *_webView;
    NSURL *_URL;
    AMSUIWebAppearance *_appearance;
    AMSUIWebClientContext *_context;
    AMSUIWebBrowserPageModel *_model;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool replacing; // @synthesize replacing=_replacing;
@property(retain, nonatomic) AMSUIWebBrowserPageModel *model; // @synthesize model=_model;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) AMSUIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <AMSUIWebPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_willEncodeRequest:(id)arg1;
- (void)_downloadHTMLForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didEncodeRequest:(id)arg1;
- (void)_applyAppearance;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;
- (id)loadRequest:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithContext:(id)arg1 dataProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
