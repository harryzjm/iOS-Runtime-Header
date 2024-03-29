//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModelNode : NSObject
{
    NSArray *_tokenIDs;
    NSMutableSet *_strings;
    NSMutableDictionary *_children;
}

+ (id)conditionalProbabilitiesForStrings:(id)arg1 modelState:(void *)arg2 copyRequired:(_Bool)arg3;
- (void).cxx_destruct;
- (void)_evaluateChildrenWithModelState:(void *)arg1 copyRequired:(_Bool)arg2 probability:(double)arg3 dictionary:(id)arg4;
- (void)_setProbability:(double)arg1 dictionary:(id)arg2;
- (void)_addString:(id)arg1 tokenIDs:(id)arg2;
- (id)treeDescription;
- (id)_treeDescriptionWithPrefix:(id)arg1;
- (id)description;
- (_Bool)isLeaf;
- (id)initWithTokenIDs:(id)arg1;

@end

