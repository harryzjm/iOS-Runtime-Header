//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TITypologyRecord;

@protocol TITypologyLogging
@property(readonly, nonatomic) unsigned long long maxNumRecords;
@property(readonly, nonatomic) unsigned long long numTraceRecords;
@property(readonly, nonatomic) unsigned long long numTypologyRecords;
- (NSString *)recordSummary;
- (NSString *)textSummary;
- (_Bool)loggedRecordOfClass:(Class)arg1;
- (void)logRecord:(TITypologyRecord *)arg1 trace:(NSString *)arg2;
- (void)logRecord:(TITypologyRecord *)arg1;
@end

