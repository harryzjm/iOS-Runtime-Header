//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NSString;

@protocol APPCMetricable
@property(nonatomic, readonly) NSDictionary *properties;
@property(nonatomic, readonly) NSString *userIdentifier;
@property(nonatomic, readonly) NSString *deviceIdentifier;
@property(nonatomic, readonly) NSString *clientIdentifier;
@property(nonatomic, readonly) NSString *contentId;
@property(nonatomic, readonly) NSDate *timestamp;
@property(nonatomic, readonly) long long metric;
@property(nonatomic, readonly) long long purpose;
@end

