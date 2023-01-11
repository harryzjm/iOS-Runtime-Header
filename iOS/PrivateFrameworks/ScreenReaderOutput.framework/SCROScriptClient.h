//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, SCRCTargetSelectorTimer, SCROConnection;
@protocol OS_dispatch_queue;

@interface SCROScriptClient : NSObject
{
    NSLock *_lock;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_timer;
    _Bool _isReady;
    NSObject<OS_dispatch_queue> *__scriptDispatchQueue;
}

+ (id)sharedClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_scriptDispatchQueue; // @synthesize _scriptDispatchQueue=__scriptDispatchQueue;
- (void).cxx_destruct;
- (_Bool)runScriptFile:(id)arg1;
- (void)handleCallback:(id)arg1;
- (_Bool)_isReady;
- (id)_lazyConnection;
- (void)_killConnection;
- (void)dealloc;
- (id)init;

@end

