//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLRequest, WKFrameInfo;

__attribute__((visibility("hidden")))
@interface WKURLSchemeTaskImpl : NSObject
{
    struct ObjectStorage<WebKit::WebURLSchemeTask> _urlSchemeTask;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) WKFrameInfo *_frame;
- (void)_didPerformRedirection:(id)arg1 newRequest:(id)arg2;
- (void)didFailWithError:(id)arg1;
- (void)didFinish;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (void)_willPerformRedirection:(id)arg1 newRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool _requestOnlyIfCached;
@property(readonly, copy, nonatomic) NSURLRequest *request;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

