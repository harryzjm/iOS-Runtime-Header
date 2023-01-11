//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUserActivity;

@interface REElementUserActivityAction
{
    NSUserActivity *_userActivity;
    NSString *_applicationID;
}

@property(readonly, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(readonly, copy, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)_submitMetricsWithSuccess:(_Bool)arg1;
- (void)_performWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserActivity:(id)arg1 applicationID:(id)arg2;

@end
