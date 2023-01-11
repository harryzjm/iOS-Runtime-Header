//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>

@class NSMapTable, NSString;
@protocol SBReusableViewMapDelegate;

@interface SBReusableViewMap : NSObject <BSDescriptionProviding>
{
    NSMapTable *_recycledViewsByClass;
    _Bool _invalidated;
    id <SBReusableViewMapDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBReusableViewMapDelegate> delegate; // @synthesize delegate=_delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long viewRecyclingCount;
@property(readonly, nonatomic) unsigned long long recycledViewCount;
- (void)enumerateRecycledViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addRecycledViewsOfClass:(Class)arg1 upToCount:(unsigned long long)arg2;
- (void)invalidate;
- (void)purgeAllViews;
- (void)purgeViewsForClass:(Class)arg1;
- (_Bool)isViewRecycled:(id)arg1;
- (void)recycleView:(id)arg1;
- (id)dequeueReusableViewOfClass:(Class)arg1;
- (id)newViewOfClass:(Class)arg1;
- (id)viewOfClass:(Class)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
