//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface OKMediaDateClusterPredicate
{
    unsigned long long _type;
}

@property(readonly) unsigned long long type; // @synthesize type=_type;
- (long long)hourInGMT:(id)arg1;
- (id)timeOfDayAsString:(unsigned long long)arg1;
- (unsigned long long)timeOfDay:(id)arg1;
- (float)efficiencyForItems:(id)arg1;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)title;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;

@end
