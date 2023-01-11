//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface XCUIApplicationRegistryRecord : NSObject
{
    _Bool _isTestDependency;
    NSURL *_URL;
    NSString *_bundleIdentifier;
}

@property(readonly) _Bool isTestDependency; // @synthesize isTestDependency=_isTestDependency;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 isTestDependency:(_Bool)arg3;

@end

