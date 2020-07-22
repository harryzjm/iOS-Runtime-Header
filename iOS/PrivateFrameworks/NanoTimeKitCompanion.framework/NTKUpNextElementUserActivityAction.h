//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUserActivity;

@interface NTKUpNextElementUserActivityAction
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
- (void)_perform;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserActivity:(id)arg1 applicationID:(id)arg2;

@end
