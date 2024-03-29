//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, UIView;

__attribute__((visibility("hidden")))
@interface SKUIViewReusePool : NSObject
{
    UIView *_parentView;
    NSMutableDictionary *_reuseClasses;
    NSMutableArray *_viewPool;
}

- (void).cxx_destruct;
- (Class)viewClassWithReuseIdentifier:(id)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)recycleReusableViews:(id)arg1;
- (void)hideUnusedViews;
- (id)dequeueReusableViewWithReuseIdentifier:(id)arg1;
- (id)initWithParentView:(id)arg1;

@end

