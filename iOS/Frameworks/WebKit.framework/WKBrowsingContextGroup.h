//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKBrowsingContextGroup : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebPageGroup> _pageGroup;
}

@property(readonly) struct Object *_apiObject;
- (void)removeAllUserScripts;
- (void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(_Bool)arg6;
- (void)removeAllUserStyleSheets;
- (void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(_Bool)arg5;
@property _Bool privateBrowsingEnabled;
@property _Bool allowsPlugIns;
- (void)setAllowsJavaScriptMarkup:(_Bool)arg1;
- (_Bool)allowsJavaScriptMarkup;
@property _Bool allowsJavaScript;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;
@property(readonly) struct OpaqueWKPageGroup *_pageGroupRef;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
