//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CVNLPPerformanceResult : NSObject
{
    double maxpeak;
    double peakdelta;
    double recentpeak;
    double current;
    double cpuTime;
    double cpuInstructions;
    double timeInterval;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dict;
- (id)description;
- (id)initWithName:(id)arg1;

@end
