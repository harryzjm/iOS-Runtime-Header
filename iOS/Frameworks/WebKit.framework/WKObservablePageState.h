//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WKObservablePageState : NSObject
{
    struct RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> _page;
    struct unique_ptr<WebKit::PageLoadStateObserver, std::default_delete<WebKit::PageLoadStateObserver>> _observer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct __SecTrust *serverTrust;
@property(readonly, nonatomic) NSURL *unreachableURL;
@property(readonly, nonatomic) double estimatedProgress;
@property(readonly, nonatomic) _Bool _webProcessIsResponsive;
@property(readonly, nonatomic) _Bool hasOnlySecureContent;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)dealloc;
- (id)initWithPage:(void *)arg1;

@end

