//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSTEphemeralFilter : NSObject
{
    unsigned long long mFilterIndex;
    unsigned char mColumnIndex;
    NSArray *mRules;
}

+ (id)filterWithIndex:(unsigned long long)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3;
@property(readonly, nonatomic) unsigned char columnIndex; // @synthesize columnIndex=mColumnIndex;
@property(readonly, nonatomic) unsigned long long filterIndex; // @synthesize filterIndex=mFilterIndex;
- (id)description;
- (id)filterByClearingRules;
- (id)filterByRemovingRuleAtIndex:(unsigned long long)arg1;
- (id)filterByAddingRule:(id)arg1;
- (id)filterWithRule:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)ruleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long ruleCount;
- (void)dealloc;
- (id)initWithIndex:(unsigned long long)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3;

@end
