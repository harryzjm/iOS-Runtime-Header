//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSData;

@interface TSMTraceFileParser : NSObject
{
    NSData *mData;
    struct TSMTraceRecord_s *mRecordBuffer;
    unsigned long long mOffset;
    unsigned long long mDataLength;
}

+ (id)parserWithData:(id)arg1;
+ (_Bool)dataIsTraceFile:(id)arg1;
- (struct TSMTraceRecord_s *)nextTraceRecord;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

