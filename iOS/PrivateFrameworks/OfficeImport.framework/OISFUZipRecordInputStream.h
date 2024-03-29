//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OISFUBufferedInputStream;

__attribute__((visibility("hidden")))
@interface OISFUZipRecordInputStream : NSObject
{
    id <OISFUBufferedInputStream> mInput;
    const char *mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
}

- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3;
- (void)dealloc;
- (id)initWithDataRepresentation:(id)arg1;

@end

