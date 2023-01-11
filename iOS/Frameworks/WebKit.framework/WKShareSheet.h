//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSString;
@protocol WKShareSheetDelegate;

__attribute__((visibility("hidden")))
@interface WKShareSheet : NSObject <UIAdaptivePresentationControllerDelegate>
{
    struct RetainPtr<NSURL> _temporaryFileShareDirectory;
    struct WeakObjCPtr<WKWebView> _webView;
    struct WeakObjCPtr<id<WKShareSheetDelegate>> _delegate;
    CompletionHandler_e3f3fa93 _completionHandler;
    struct RetainPtr<UIActivityViewController> _shareSheetViewController;
    struct RetainPtr<UIViewController> _presentationViewController;
    _Bool _didShareSuccessfully;
}

+ (id)writeFileToShareableURL:(id)arg1 data:(id)arg2 temporaryDirectory:(id)arg3;
+ (id)createRandomSharingDirectoryForFile:(id)arg1;
+ (id)createTemporarySharingDirectory;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dismiss;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)presentWithShareDataArray:(id)arg1 inRect:(Optional_93f3c085)arg2;
- (void)presentWithParameters:(const struct ShareDataWithParsedURL *)arg1 inRect:(Optional_93f3c085)arg2 completionHandler:(CompletionHandler_e3f3fa93 *)arg3;
- (id)initWithView:(id)arg1;
@property(nonatomic) __weak id <WKShareSheetDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
