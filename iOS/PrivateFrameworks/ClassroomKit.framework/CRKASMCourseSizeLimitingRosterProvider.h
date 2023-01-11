//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRKASMCourseSizeLimitingRosterProvider
{
    long long _maxUserCount;
    long long _maxTrustedUserCount;
}

@property(readonly, nonatomic) long long maxTrustedUserCount; // @synthesize maxTrustedUserCount=_maxTrustedUserCount;
@property(readonly, nonatomic) long long maxUserCount; // @synthesize maxUserCount=_maxUserCount;
- (id)courseForIdentifier:(id)arg1;
- (_Bool)isLegalToUpdateCourse:(id)arg1 withProperties:(id)arg2 error:(id *)arg3;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createCourseWithProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRosterProvider:(id)arg1 maxUserCount:(long long)arg2 maxTrustedUserCount:(long long)arg3;

@end
