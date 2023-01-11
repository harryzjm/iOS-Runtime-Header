//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PromotedContent/APPCMetricable-Protocol.h>

@class MISSING_TYPE, NSDate, NSDictionary, NSString;

@interface APPCMetric : NSObject <APPCMetricable>
{
    MISSING_TYPE *route;
    MISSING_TYPE *metric;
    MISSING_TYPE *timestamp;
    MISSING_TYPE *contentId;
    MISSING_TYPE *clientBundleIdentifier;
    MISSING_TYPE *deviceIdentifier;
    MISSING_TYPE *userIdentifier;
    MISSING_TYPE *properties;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSDictionary *properties;
@property(nonatomic, copy) NSString *userIdentifier;
@property(nonatomic, copy) NSString *deviceIdentifier;
@property(nonatomic, copy) NSString *clientBundleIdentifier;
@property(nonatomic, copy) NSString *contentId;
@property(nonatomic, copy) NSDate *timestamp;
@property(nonatomic) long long metric; // @synthesize metric;
@property(nonatomic) long long route; // @synthesize route;

@end
