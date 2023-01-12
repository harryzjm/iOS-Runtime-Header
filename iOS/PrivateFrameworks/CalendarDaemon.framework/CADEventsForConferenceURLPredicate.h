//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>
#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface CADEventsForConferenceURLPredicate <EKDefaultPropertiesLoading, NSSecureCoding>
{
    NSString *_urlString;
    long long _limit;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 limit:(long long)arg2;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
