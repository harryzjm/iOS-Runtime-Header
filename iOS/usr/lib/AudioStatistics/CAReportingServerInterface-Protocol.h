//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudioStatistics/NSObject-Protocol.h>

@class NSArray, NSDictionary, PBCodable;

@protocol CAReportingServerInterface <NSObject>
- (void)postAWDMetric:(unsigned int)arg1 withData:(PBCodable *)arg2;
- (void)postSimpleAWDMetric:(unsigned int)arg1;
- (void)getAllReporters:(void (^)(NSArray *))arg1;
- (void)reporterID:(long long)arg1 valid:(void (^)(NSDictionary *))arg2;
- (void)destroyReportingSession:(long long)arg1;
- (void)stopReportingSessionForID:(long long)arg1;
- (void)sendMessage:(NSDictionary *)arg1 withCategory:(unsigned short)arg2 andType:(unsigned short)arg3 forReportingIDs:(NSArray *)arg4 reply:(void (^)(NSError *))arg5;
- (void)startReportingSessionForID:(long long)arg1;
- (void)getServiceNameForReporterID:(long long)arg1 reply:(void (^)(unsigned short))arg2;
- (void)setServiceType:(unsigned short)arg1 reportingSession:(long long)arg2;
- (void)createReportingSession:(long long)arg1;
@end

