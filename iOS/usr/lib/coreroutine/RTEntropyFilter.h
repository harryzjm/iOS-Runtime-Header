//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet;

@interface RTEntropyFilter : NSObject
{
    NSCountedSet *_globalEvents;
    NSCountedSet *_relevantEvents;
    double _maximumEntropy;
}

@property(nonatomic) double maximumEntropy; // @synthesize maximumEntropy=_maximumEntropy;
@property(retain, nonatomic) NSCountedSet *relevantEvents; // @synthesize relevantEvents=_relevantEvents;
@property(retain, nonatomic) NSCountedSet *globalEvents; // @synthesize globalEvents=_globalEvents;
- (void).cxx_destruct;
- (double)weightForBundleIdentifier:(id)arg1;
- (void)removeAllEvents;
- (void)addGlobalEvents:(id)arg1;
- (void)addReleventEvent:(id)arg1;
- (id)initWithGlobalEvents:(id)arg1 relevantEvents:(id)arg2 maximumEntropy:(double)arg3;
- (id)initWithMaximumEntropy:(double)arg1;
- (id)init;

@end
