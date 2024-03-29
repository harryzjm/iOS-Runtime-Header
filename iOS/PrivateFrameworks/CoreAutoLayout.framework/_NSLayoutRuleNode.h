//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSLayoutRule, _NSLayoutRuleNodeParent;

@interface _NSLayoutRuleNode : NSObject
{
    id <NSLayoutRule> _representedRule;
    id <_NSLayoutRuleNodeParent> _parentNode;
}

@property id <_NSLayoutRuleNodeParent> parentNode; // @synthesize parentNode=_parentNode;
@property(copy) id <NSLayoutRule> representedRule; // @synthesize representedRule=_representedRule;
- (id)description;
- (void)dealloc;
- (id)initWithRule:(id)arg1;

@end

