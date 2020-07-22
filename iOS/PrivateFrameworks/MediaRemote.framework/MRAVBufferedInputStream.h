//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInputStream.h>

@class NSMutableData, NSMutableDictionary, NSObject, NSRunLoop;
@protocol NSStreamDelegate, OS_dispatch_queue;

@interface MRAVBufferedInputStream : NSInputStream
{
    unsigned long long _status;
    id <NSStreamDelegate> _delegate;
    NSMutableDictionary *_properties;
    NSRunLoop *_scheduledRunLoop;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableData *_buffer;
}

- (void)_onRunLoop_notifyDelegateOfStreamEvent:(unsigned long long)arg1;
- (void)handleStreamDisconnect;
- (void)handleDataReceived:(id)arg1;
- (void)notifyDelegateOfStreamEvent:(unsigned long long)arg1;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)init;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)_init;

@end
