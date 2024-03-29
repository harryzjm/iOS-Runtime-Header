//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@protocol _UITraitEnvironmentInternal;

__attribute__((visibility("hidden")))
@interface _UIBarCustomizationContainerView : UIView
{
    CDUnknownBlockType _traitChangeHandler;
    id <_UITraitEnvironmentInternal> _parentTraitEnvironment;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_UITraitEnvironmentInternal> parentTraitEnvironment; // @synthesize parentTraitEnvironment=_parentTraitEnvironment;
@property(copy, nonatomic) CDUnknownBlockType traitChangeHandler; // @synthesize traitChangeHandler=_traitChangeHandler;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription *)arg1;
- (id)traitCollection;
- (id)initWithParentTraitEnvironment:(id)arg1;

@end

