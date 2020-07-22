//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBUserActivityInfo;

@protocol _SFPBUserActivityData <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *userInfos;
@property(readonly, nonatomic) _Bool hasActivityType;
@property(copy, nonatomic) NSString *activityType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBUserActivityInfo *)userInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfoCount;
- (void)addUserInfo:(_SFPBUserActivityInfo *)arg1;
- (void)clearUserInfo;
@end

