//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HKHeartbeatSequenceChartData : NSObject
{
    double _initialXAxisOffset;
    NSMutableArray *_sections;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) double initialXAxisOffset; // @synthesize initialXAxisOffset=_initialXAxisOffset;
- (void)_expandToSection:(long long)arg1;
- (void)enumerateSequences:(CDUnknownBlockType)arg1;
- (long long)sectionCount;
- (void)addSequencePoint:(id)arg1 section:(long long)arg2;
- (id)init;

@end
