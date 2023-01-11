//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NMSSHLogger : NSObject
{
    _Bool _enabled;
    CDUnknownBlockType _logBlock;
    unsigned long long _logLevel;
    NSObject<OS_dispatch_queue> *_loggerQueue;
}

+ (id)sharedLogger;
+ (id)logger;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
@property(copy, nonatomic) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
- (void)logError:(id)arg1;
- (void)logWarn:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logVerbose:(id)arg1;
- (void)log:(id)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3;

@end
