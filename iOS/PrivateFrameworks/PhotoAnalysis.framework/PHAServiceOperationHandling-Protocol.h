//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHAServiceCancelableOperation;

@protocol PHAServiceOperationHandling
- (void)handleOperation:(PHAServiceCancelableOperation *)arg1;

@optional
- (void)operationDidFinish:(PHAServiceCancelableOperation *)arg1;
- (void)operationWillStart:(PHAServiceCancelableOperation *)arg1;
@end

