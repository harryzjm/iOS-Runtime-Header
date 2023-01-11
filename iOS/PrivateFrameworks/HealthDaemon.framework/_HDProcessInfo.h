//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HDProcessInfo : NSObject
{
    unsigned int _applicationState;
    int _pid;
    NSString *_bundleIdentifier;
}

+ (id)processInfoWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;

@end
