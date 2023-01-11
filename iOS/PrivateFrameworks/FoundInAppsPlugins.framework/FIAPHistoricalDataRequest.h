//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FoundInAppsPlugins/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface FIAPHistoricalDataRequest : NSObject <NSSecureCoding>
{
    unsigned long long _requestId;
    NSString *_pluginIdentifier;
    NSString *_personHandle;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)historicalDataRequestWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSString *personHandle; // @synthesize personHandle=_personHandle;
@property(readonly, nonatomic) NSString *pluginIdentifier; // @synthesize pluginIdentifier=_pluginIdentifier;
@property(readonly, nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (_Bool)subsetOfHistoricalDataRequest:(id)arg1;
- (_Bool)_dateRangeIsSubsetOfHistoricalDataRequest:(id)arg1;
- (_Bool)isEqualToHistoricalDataRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)setRequestId:(unsigned long long)arg1;
- (void)setPluginIdentifier:(id)arg1;
- (id)initWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end

