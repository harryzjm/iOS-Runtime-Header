//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;
}

+ (id)normalWorld;
+ (id)world;
@property(readonly) struct Object *_apiObject;
@property(readonly) struct InjectedBundleScriptWorld *_scriptWorld;
@property(readonly, copy, nonatomic) NSString *name;
- (void)makeAllShadowRootsOpen;
- (void)clearWrappers;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
