//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Security/OS_sec_experiment-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SecExpConcrete_sec_experiment : NSObject <OS_sec_experiment>
{
    const char *identifier;
    _Bool sampling_disabled;
}

- (id)initWithBundle:(const char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
