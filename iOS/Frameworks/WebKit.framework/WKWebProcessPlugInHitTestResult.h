//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, WKWebProcessPlugInNodeHandle;

@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleHitTestResult> _hitTestResult;
}

@property(readonly) struct Object *_apiObject;
@property(readonly) WKWebProcessPlugInNodeHandle *nodeHandle;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

