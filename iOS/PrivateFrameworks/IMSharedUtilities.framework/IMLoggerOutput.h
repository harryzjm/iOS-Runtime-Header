//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface IMLoggerOutput : NSObject
{
}

+ (id)loggerOutputFromLoggingLevel:(long long)arg1;
+ (id)loggerOutputFromString:(id)arg1;
+ (long long)loggingLevelFromString:(id)arg1;
- (id)description;
@property(readonly) long long loggingLevel;
- (void)logForCategory:(const char *)arg1 string:(id)arg2;

@end
