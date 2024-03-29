//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetricsEvent, AMSUIWebClientContext, AMSUIWebNavigationBarModel, AMSUIWebWrapperViewController, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebRoutePageModel : NSObject
{
    _Bool _loadUsingWebKit;
    NSString *_backgroundColor;
    AMSMetricsEvent *_impressionEvent;
    AMSUIWebNavigationBarModel *_navigationBar;
    NSDictionary *_clientOptions;
    AMSUIWebClientContext *_context;
    NSDictionary *_headers;
    NSURL *_URL;
    AMSUIWebWrapperViewController *_viewController;
    struct CGSize _windowSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSUIWebWrapperViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) _Bool loadUsingWebKit; // @synthesize loadUsingWebKit=_loadUsingWebKit;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSDictionary *clientOptions; // @synthesize clientOptions=_clientOptions;
@property(readonly, nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) AMSMetricsEvent *impressionEvent; // @synthesize impressionEvent=_impressionEvent;
@property(readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)_webPageViewController;
- (id)loadPage;
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
- (id)createViewControllerForContainer:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

