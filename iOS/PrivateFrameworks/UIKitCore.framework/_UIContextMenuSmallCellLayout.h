//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, NSString, _UIContextMenuCellContentView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuSmallCellLayout : NSObject
{
    _UIContextMenuCellContentView *_contentView;
    NSArray *_managedConstraints;
    NSLayoutConstraint *_firstBaselineConstraint;
    NSLayoutConstraint *_minHeightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *minHeightConstraint; // @synthesize minHeightConstraint=_minHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *firstBaselineConstraint; // @synthesize firstBaselineConstraint=_firstBaselineConstraint;
@property(retain, nonatomic) NSArray *managedConstraints; // @synthesize managedConstraints=_managedConstraints;
@property(nonatomic) __weak _UIContextMenuCellContentView *contentView; // @synthesize contentView=_contentView;
- (void)removeConstraints;
- (void)updateConstraints;
- (void)installConstraints;
- (id)preferredTextStyleUsingBoldFont:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long labelMaximumNumberOfLines;
@property(readonly, nonatomic) long long labelTextAlignment;
@property(readonly, nonatomic) long long layoutSize;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

