//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface RTPredictionExpertFeatureAddon : NSObject
{
    NSPredicate *_eventFilterPredicate;
}

@property(readonly, nonatomic) NSPredicate *eventFilterPredicate; // @synthesize eventFilterPredicate=_eventFilterPredicate;
- (void).cxx_destruct;
- (long long)addonType;
- (id)initWithPredicate:(id)arg1;

@end

