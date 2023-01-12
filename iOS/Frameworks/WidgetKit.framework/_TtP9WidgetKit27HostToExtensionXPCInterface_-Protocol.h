//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol _TtP9WidgetKit27HostToExtensionXPCInterface_
- (void)performCleanup;
- (void)invalidate;
- (void)getActivitiesWithRequests:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getTimelinesWithRequests:(NSArray *)arg1 isPreview:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)getPlaceholdersWithRequests:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)attachPreviewAgentWithFrameworkPath:(NSString *)arg1 endpoint:(id)arg2 handler:(void (^)(BSAuditToken *))arg3;
- (void)handleURLSessionEventsFor:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)getAllCurrentDescriptorsWithCompletion:(void (^)(_TtC9WidgetKit21DescriptorFetchResult *))arg1;
- (void)getCurrentDescriptorsWithCompletion:(void (^)(NSArray *))arg1;
@end

