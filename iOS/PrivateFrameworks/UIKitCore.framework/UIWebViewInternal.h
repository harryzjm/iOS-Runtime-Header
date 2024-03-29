//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLRequest, UICheckeredPatternView, UIScrollView, UIWebBrowserView, UIWebPDFViewHandler, UIWebViewWebViewDelegate;
@protocol UIWebViewDelegate;

__attribute__((visibility("hidden")))
@interface UIWebViewInternal : NSObject
{
    UIScrollView *scroller;
    UIWebBrowserView *browserView;
    UICheckeredPatternView *checkeredPatternView;
    id <UIWebViewDelegate> delegate;
    unsigned int scalesPageToFit:1;
    unsigned int isLoading:1;
    unsigned int hasOverriddenOrientationChangeEventHandling:1;
    unsigned int drawsCheckeredPattern:1;
    unsigned int selectionEnabled:1;
    unsigned int drawInWebThread:1;
    unsigned int inRotation:1;
    unsigned int didRotateEnclosingScrollView:1;
    unsigned int safeAreaShouldAffectObscuredInsets:1;
    NSURLRequest *request;
    long long clickedAlertButtonIndex;
    UIWebViewWebViewDelegate *webViewDelegate;
    UIWebPDFViewHandler *pdfHandler;
}

@end

