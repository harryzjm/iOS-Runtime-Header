//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError;

@protocol PPContactClientProtocol
- (void)contactNameRecordChangesBatch:(NSArray *)arg1 isLast:(_Bool)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(_Bool))arg5;
- (void)contactNameRecordBatch:(NSArray *)arg1 isLast:(_Bool)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(_Bool))arg5;
@end

