//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKCategorySample, NSArray;

@interface HDCoachingDiagnosticData : NSObject
{
    NSArray *_items;
    HKCategorySample *_coachingEventSample;
}

@property(retain, nonatomic) HKCategorySample *coachingEventSample; // @synthesize coachingEventSample=_coachingEventSample;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)itemForInterval:(unsigned long long)arg1 future:(_Bool)arg2;
- (id)init;

@end

