//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CLSHolidayCalendarEventOverrides : NSObject
{
    NSString *_uuid;
    NSString *_countryCode;
    NSArray *_dateRuleOverrides;
    double _locationScore;
    NSDictionary *_sceneImportanceOverrides;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *sceneImportanceOverrides; // @synthesize sceneImportanceOverrides=_sceneImportanceOverrides;
@property(readonly, nonatomic) double locationScore; // @synthesize locationScore=_locationScore;
@property(readonly, nonatomic) NSArray *dateRuleOverrides; // @synthesize dateRuleOverrides=_dateRuleOverrides;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)sceneImportanceStringForSceneName:(id)arg1;
- (id)initWithUUID:(id)arg1 countryCode:(id)arg2 dateRuleOverrides:(id)arg3 locationScore:(double)arg4 sceneImportanceOverrides:(id)arg5;

@end
