//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLRequest, WebPolicyDecisionListener;
@protocol WebPluginContainerCheckController;

__attribute__((visibility("hidden")))
@interface WebPluginContainerCheck : NSObject
{
    NSURLRequest *_request;
    NSString *_target;
    id <WebPluginContainerCheckController> _controller;
    id _resultObject;
    SEL _resultSelector;
    id _contextInfo;
    _Bool _done;
    WebPolicyDecisionListener *_listener;
}

+ (id)checkWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;
- (id)contextInfo;
- (void)cancel;
- (void)start;
- (void)_askPolicyDelegate;
- (id)_actionInformationWithURL:(id)arg1;
- (_Bool)_isForbiddenFileLoad;
- (void)_continueWithPolicy:(int)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;

@end

