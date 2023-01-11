//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UsageTracking/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface USApplicationUsageReport : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;
    double _totalUsageTime;
    double _applicationUsageTime;
    NSDictionary *_webUsageByDomain;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSDictionary *webUsageByDomain; // @synthesize webUsageByDomain=_webUsageByDomain;
@property(readonly) double applicationUsageTime; // @synthesize applicationUsageTime=_applicationUsageTime;
@property(readonly) double totalUsageTime; // @synthesize totalUsageTime=_totalUsageTime;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_usApplicationUsageReportCommonInitWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageTime:(double)arg3 webUsageByDomain:(id)arg4;
- (id)initWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageTime:(double)arg3 webUsageByDomain:(id)arg4;

@end

