//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SGDHarvestQueueFileRegistry : NSObject
{
    NSString *_dir;
    NSMutableDictionary *_fdForFileId;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)defaultRegistry:(id)arg1;
- (void).cxx_destruct;
- (void)flush;
- (void)_flushFileId:(int)arg1;
- (void)prepareToOpenForReading:(int)arg1;
- (int)openForWritingIfPossible:(int)arg1;
- (int)_openForReadingIfPossibleNoCacheLocked:(int)arg1;
- (int)openForReadingIfPossible:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDirectory:(id)arg1;

@end

