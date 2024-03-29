//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBSystemLayoutViewController : UIViewController
{
    NSMutableArray *_constraints;
    unsigned long long _horizontalLayoutType;
    unsigned long long _verticalLayoutType;
    struct CGSize _centeredOffsets;
    struct UIEdgeInsets _minimumInsets;
}

+ (id)systemLayoutViewControllerWithViewController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize centeredOffsets; // @synthesize centeredOffsets=_centeredOffsets;
@property(nonatomic) struct UIEdgeInsets minimumInsets; // @synthesize minimumInsets=_minimumInsets;
@property(nonatomic) unsigned long long verticalLayoutType; // @synthesize verticalLayoutType=_verticalLayoutType;
@property(nonatomic) unsigned long long horizontalLayoutType; // @synthesize horizontalLayoutType=_horizontalLayoutType;
- (void)updateViewConstraints;

@end

