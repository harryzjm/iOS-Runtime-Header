//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKComponentScopeRoot;

@interface CKTransactionalComponentDataSourceItem : NSObject
{
    struct CKComponentLayout _layout;
    id _model;
    CKComponentScopeRoot *_scopeRoot;
    struct CKComponentBoundsAnimation _boundsAnimation;
}

@property(readonly, nonatomic) struct CKComponentBoundsAnimation boundsAnimation; // @synthesize boundsAnimation=_boundsAnimation;
@property(readonly, nonatomic) CKComponentScopeRoot *scopeRoot; // @synthesize scopeRoot=_scopeRoot;
@property(readonly, nonatomic) id model; // @synthesize model=_model;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct CKComponentLayout *)layout;
- (id)initWithLayout:(const struct CKComponentLayout *)arg1 model:(id)arg2 scopeRoot:(id)arg3 boundsAnimation:(struct CKComponentBoundsAnimation)arg4;

@end
