//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

@interface NSOutputStream (NSOutputStream)
+ (id)outputStreamWithURL:(id)arg1 append:(_Bool)arg2;
+ (id)outputStreamToFileAtPath:(id)arg1 append:(_Bool)arg2;
+ (id)outputStreamToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
+ (id)outputStreamToMemory;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToMemory;
- (_Bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (CDStruct_87dc826d)_cfStreamError;
@end
