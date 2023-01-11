//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalFileSensor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    CDUnknownBlockType _eventBlock;
    _Bool _started;
    NSString *_path;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(readonly, nonatomic) _Bool started; // @synthesize started=_started;
@property(readonly, retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)stop;
- (void)start;
- (id)description;
- (void)dealloc;
- (id)initWithPath:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
