//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, NSURL, TRIBaseTask, TRIDownloadOptions, TRITaskQueuingOptions;

@protocol TRIInternalServiceProtocol
- (NSArray *)dynamicNamespaceRecordsWithError:(id *)arg1;
- (_Bool)startNamespaceDownloadWithName:(NSString *)arg1 withTeamId:(NSString *)arg2 options:(TRIDownloadOptions *)arg3 error:(id *)arg4;
- (_Bool)deregisterNamespaceWithNamespaceName:(NSString *)arg1 withTeamId:(NSString *)arg2 error:(id *)arg3;
- (_Bool)registerNamespaceWithNamespaceName:(NSString *)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(NSURL *)arg3 withTeamId:(NSString *)arg4 appContainerId:(NSString *)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 error:(id *)arg8;
- (_Bool)setLastFetchDate:(NSDate *)arg1 forContainer:(int)arg2 teamId:(NSString *)arg3 error:(id *)arg4;
- (NSDate *)lastFetchDateForContainer:(int)arg1 teamId:(NSString *)arg2 error:(id *)arg3;
- (_Bool)submitTask:(TRIBaseTask *)arg1 options:(TRITaskQueuingOptions *)arg2 error:(id *)arg3;
- (NSArray *)experimentNotificationsWithExperimentId:(NSString *)arg1 cloudKitContainer:(int)arg2 teamId:(NSString *)arg3 error:(id *)arg4;
- (NSArray *)experimentRecordsWithError:(id *)arg1;
- (NSArray *)taskRecordsWithError:(id *)arg1;
@end
