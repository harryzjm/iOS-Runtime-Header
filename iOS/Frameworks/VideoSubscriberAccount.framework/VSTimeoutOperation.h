//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSOperationQueue;

@interface VSTimeoutOperation
{
    NSOperation *_operation;
    double _timeout;
    NSOperationQueue *_privateQueue;
}

@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithOperation:(id)arg1 timeout:(double)arg2;
- (id)init;

@end

