//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, UITableViewCellAccessibilityElement;

@interface _AXTableViewCellInternal : NSObject
{
    NSMutableArray *children;
    _Bool cellOrAncestorHiddenWhileFetchingChildren;
    id removeMinusButton;
    id text;
    id removeConfirmButton;
    id accessoryButton;
    NSMutableArray *mockSubviews;
    UITableViewCellAccessibilityElement *mockParent;
    NSMutableDictionary *_subClassData;
    NSMutableArray *discardedLabels;
}

- (void).cxx_destruct;
- (id)init;

@end
