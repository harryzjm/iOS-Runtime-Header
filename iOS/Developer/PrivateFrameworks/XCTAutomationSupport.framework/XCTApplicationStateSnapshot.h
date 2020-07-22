//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>

@class NSString;

@interface XCTApplicationStateSnapshot : NSObject <NSSecureCoding>
{
    int _processID;
    NSString *_bundleID;
    NSString *_path;
    unsigned long long _runState;
    unsigned long long _activationPolicy;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long activationPolicy; // @synthesize activationPolicy=_activationPolicy;
@property(readonly) int processID; // @synthesize processID=_processID;
@property(readonly) unsigned long long runState; // @synthesize runState=_runState;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
@property(readonly, copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 path:(id)arg2 runState:(unsigned long long)arg3 processID:(int)arg4 activationPolicy:(unsigned long long)arg5;

@end

