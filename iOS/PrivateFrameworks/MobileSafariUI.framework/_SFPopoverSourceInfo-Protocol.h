//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class UIBarButtonItem, UIView;

@protocol _SFPopoverSourceInfo <NSObject>

@optional
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property(nonatomic) long long provenance;
@property(nonatomic) unsigned long long permittedArrowDirections;
@property(nonatomic) _Bool shouldHideArrow;
@property(nonatomic) _Bool shouldPassthroughSuperview;
@property(readonly, nonatomic) _Bool shouldDismissIfSourceRemovedAfterRepositioning;
@property(readonly, nonatomic) UIView *popoverSourceView;
@property(readonly, nonatomic) struct CGRect popoverSourceRect;
@end

