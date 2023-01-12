//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsFeed/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, OS_dispatch_queue;
@protocol FCJSONEncodableObjectProviding><FCNewsAppConfiguration, FCNewsAppConfiguration, FCNewsAppConfigurationObserving;

@protocol FCNewsAppConfigurationManager <NSObject>
- (void)removeAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;
- (void)addAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(OS_dispatch_queue *)arg1 refreshCompletion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg2;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(OS_dispatch_queue *)arg1 completion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg2;
- (void)fetchAppConfigurationIfNeededWithCompletion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg1;
@property(nonatomic, readonly) id <FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration;
@property(nonatomic, readonly) id <FCNewsAppConfiguration> appConfiguration;

@optional
@property(nonatomic, readonly) id <FCJSONEncodableObjectProviding><FCNewsAppConfiguration> jsonEncodableAppConfiguration;
@property(nonatomic, readonly) id <FCNewsAppConfiguration> fetchedAppConfiguration;
@property(nonatomic, readonly) NSString *feldsparID;
@property(nonatomic, readonly) NSArray *segmentSetIDs;
@property(nonatomic, readonly) NSArray *treatmentIDs;
- (void)fetchAppWidgetConfigurationWithAdditionalFields:(NSDictionary *)arg1 completion:(void (^)(id <FCNewsAppConfiguration>, NSDictionary *, NSError *))arg2;
@end

