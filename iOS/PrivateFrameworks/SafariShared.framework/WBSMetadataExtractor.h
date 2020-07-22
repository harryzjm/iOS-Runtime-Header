//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSContext, WKWebProcessPlugInFrame, WKWebProcessPlugInScriptWorld;

@interface WBSMetadataExtractor : NSObject
{
    WKWebProcessPlugInScriptWorld *_webProcessPlugInScriptWorld;
    JSContext *_context;
    WKWebProcessPlugInFrame *_webProcessPlugInFrame;
}

+ (id)metadataExtractorScriptSource;
@property(readonly, nonatomic) WKWebProcessPlugInFrame *webProcessPlugInFrame; // @synthesize webProcessPlugInFrame=_webProcessPlugInFrame;
- (void).cxx_destruct;
- (id)faviconURLs;
- (id)appleTouchIconURLs;
- (id)_resultForInvokingFunctionWithName:(id)arg1;
@property(readonly, nonatomic) JSContext *context;
- (id)makeContext;
- (void)dealloc;
- (id)initWithWebProcessPlugInFrame:(id)arg1 useNormalWorld:(_Bool)arg2;
- (id)initWithWebProcessPlugInFrame:(id)arg1;

@end

