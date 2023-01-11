//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NTKComplicationLayout : NSObject
{
    NSMutableArray *_stateLayouts;
}

+ (id)layoutWithDefaultRule:(id)arg1;
- (void).cxx_destruct;
- (id)_layoutForState:(long long)arg1;
- (id)defaultLayoutRuleForState:(long long)arg1;
- (id)layoutRuleForComplicationState:(long long)arg1 layoutOverride:(long long)arg2;
- (void)setOverrideLayoutRule:(id)arg1 forState:(long long)arg2 layoutOverride:(long long)arg3;
- (void)setDefaultLayoutRule:(id)arg1 forState:(long long)arg2;
- (id)init;

@end
