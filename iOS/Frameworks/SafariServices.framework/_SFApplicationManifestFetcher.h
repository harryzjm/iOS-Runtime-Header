//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WKWebView, _WKApplicationManifest;

@interface _SFApplicationManifestFetcher : NSObject
{
    CDUnknownBlockType _completionHandler;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    long long _state;
}

- (void).cxx_destruct;
- (void)getApplicationManifestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithWebView:(id)arg1;

@end
