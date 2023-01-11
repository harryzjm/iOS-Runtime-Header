//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSStream.h>

@interface NSStream (NSStream)
+ (void)getStreamsToHost:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;
+ (void)getStreamsToHostWithName:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;
+ (void)getBoundStreamsWithBufferSize:(unsigned long long)arg1 inputStream:(id *)arg2 outputStream:(id *)arg3;
- (id)streamError;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (id)init;
@end
