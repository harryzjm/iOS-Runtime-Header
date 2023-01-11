//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSError;
@protocol TLTimelineDataSource;

@interface TLOperation : NSOperation
{
    id <TLTimelineDataSource> _dataSource;
    CDUnknownBlockType _operationCompletionBlock;
    NSError *_error;
}

+ (unsigned long long)relativePriority;
- (void).cxx_destruct;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(copy) CDUnknownBlockType operationCompletionBlock; // @synthesize operationCompletionBlock=_operationCompletionBlock;
@property(retain) id <TLTimelineDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)init;

// Remaining properties
@property(copy) CDUnknownBlockType completionBlock; // @dynamic completionBlock;

@end
