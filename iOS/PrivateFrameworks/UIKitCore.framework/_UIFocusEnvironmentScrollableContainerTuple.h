//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UIFocusEnvironment, UIFocusItemScrollableContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentScrollableContainerTuple : NSObject
{
    id <UIFocusEnvironment> _owningEnvironment;
    id <UIFocusItemScrollableContainer> _scrollableContainer;
}

+ (id)tupleWithScrollView:(id)arg1;
+ (id)tupleWithOwningEnvironment:(id)arg1 scrollableContainer:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <UIFocusItemScrollableContainer> scrollableContainer; // @synthesize scrollableContainer=_scrollableContainer;
@property(readonly, nonatomic) id <UIFocusEnvironment> owningEnvironment; // @synthesize owningEnvironment=_owningEnvironment;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOwningEnvironment:(id)arg1 scrollableContainer:(id)arg2;

@end

