//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SSMetricsLogEvent
{
}

+ (id)_stringFromLogLevel:(unsigned long long)arg1;
+ (unsigned long long)_logLevelFromString:(id)arg1;
- (id)description;
@property(retain, nonatomic) NSString *message;
@property(retain, nonatomic) NSString *logSubsystem;
@property(nonatomic) unsigned long long logLevel;
- (id)init;

@end
