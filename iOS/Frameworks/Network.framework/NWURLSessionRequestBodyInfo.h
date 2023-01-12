//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInputStream, NSURL;
@protocol OS_dispatch_data, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NWURLSessionRequestBodyInfo : NSObject
{
    _Bool _streamUsed;
    NSObject<OS_dispatch_data> *_data;
    NSURL *_fileURL;
    NSInputStream *_stream;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _streamOffset;
}

- (void).cxx_destruct;

@end
