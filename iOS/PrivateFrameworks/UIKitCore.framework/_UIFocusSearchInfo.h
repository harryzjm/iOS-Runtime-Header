//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusSearchInfo : NSObject
{
    _Bool _treatFocusableItemAsLeaf;
    _Bool _forceFocusToLeaveContainer;
    CDUnknownBlockType _evaluator;
}

+ (id)defaultInfo;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType evaluator; // @synthesize evaluator=_evaluator;
@property(nonatomic) _Bool forceFocusToLeaveContainer; // @synthesize forceFocusToLeaveContainer=_forceFocusToLeaveContainer;
@property(nonatomic) _Bool treatFocusableItemAsLeaf; // @synthesize treatFocusableItemAsLeaf=_treatFocusableItemAsLeaf;
- (_Bool)shouldIncludeFocusItem:(id)arg1;
- (id)initWithFocusEvaluator:(CDUnknownBlockType)arg1;

@end
