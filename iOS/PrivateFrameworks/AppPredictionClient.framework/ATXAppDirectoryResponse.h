//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXResponse, NSArray, NSError;

@interface ATXAppDirectoryResponse : NSObject
{
    NSError *_error;
    NSArray *_predictedApps;
    NSArray *_recentApps;
    ATXResponse *_response;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ATXResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSArray *recentApps; // @synthesize recentApps=_recentApps;
@property(readonly, nonatomic) NSArray *predictedApps; // @synthesize predictedApps=_predictedApps;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithoutDedupingForRecents:(id)arg1 predictedApps:(id)arg2 error:(id)arg3;
- (id)initWithResponse:(id)arg1 recentApps:(id)arg2 otherAppsOnScreen:(id)arg3 numAppsToPredict:(unsigned long long)arg4 error:(id)arg5;

@end
