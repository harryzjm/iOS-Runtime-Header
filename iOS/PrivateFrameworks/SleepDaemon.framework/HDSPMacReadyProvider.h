//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSPEnvironment, NSString;
@protocol HDSPSystemReadyDelegate;

__attribute__((visibility("hidden")))
@interface HDSPMacReadyProvider : NSObject
{
    HDSPEnvironment *_environment;
    id <HDSPSystemReadyDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HDSPSystemReadyDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) _Bool isSystemReady;
- (_Bool)isInDemoMode;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

