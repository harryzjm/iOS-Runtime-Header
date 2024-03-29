//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, SKUIViewReusePool;

__attribute__((visibility("hidden")))
@interface SKUIViewReuseView : UIView
{
    SKUIViewReusePool *_viewReusePool;
    NSArray *_allExistingViews;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allExistingViews; // @synthesize allExistingViews=_allExistingViews;
- (void)setBackgroundColor:(id)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)modifyUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

