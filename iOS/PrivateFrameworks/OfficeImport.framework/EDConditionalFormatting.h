//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class EDReferenceCollection, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDConditionalFormatting : NSObject
{
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    _Bool mApplyToDate;
}

+ (id)conditionalFormatting;
- (id)description;
- (_Bool)isApplyToDate;
- (void)addRange:(id)arg1;
- (id)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)rangeCount;
- (id)rules;
- (void)addRule:(id)arg1;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (unsigned long long)ruleCount;
- (void)dealloc;
- (id)init;

@end

