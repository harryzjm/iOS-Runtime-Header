//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTPerformanceStatistic : NSObject
{
    NSString *_name;
    CDUnknownBlockType _checkpointBlock;
    CDUnknownBlockType _logBlock;
}

+ (void)freezePerformanceStatisticRegistration;
+ (id)allStatistics;
+ (id)registerStatisticWithName:(id)arg1 checkpointBlock:(CDUnknownBlockType)arg2 logBlock:(CDUnknownBlockType)arg3;
+ (void)initialize;
@property(readonly, copy) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
@property(readonly, copy) CDUnknownBlockType checkpointBlock; // @synthesize checkpointBlock=_checkpointBlock;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 checkpointBlock:(CDUnknownBlockType)arg2 logBlock:(CDUnknownBlockType)arg3;

@end
