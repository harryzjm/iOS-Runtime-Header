//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IPStateUpdateStreamSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IPXPCEventStateUpdateStreamSource : NSObject
{
    NSString *_streamName;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _resumed;
    id <IPStateUpdateStreamSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <IPStateUpdateStreamSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_queue_handleEvent:(id)arg1;
- (void)resume;
- (id)initWithQueue:(id)arg1 streamName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

