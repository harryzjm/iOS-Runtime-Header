//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CNContact, UIView;
@protocol SFHighlightContactListCellDelegate;

__attribute__((visibility("hidden")))
@interface SFHighlightContactListCell : UIControl
{
    UIView *_separator;
    _Bool _firstInList;
    _Bool _lastInList;
    CNContact *_contact;
    id <SFHighlightContactListCellDelegate> _delegate;
    CDUnknownBlockType _infoViewControllerHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType infoViewControllerHandler; // @synthesize infoViewControllerHandler=_infoViewControllerHandler;
@property(nonatomic, getter=isLastInList) _Bool lastInList; // @synthesize lastInList=_lastInList;
@property(nonatomic, getter=isFirstInList) _Bool firstInList; // @synthesize firstInList=_firstInList;
@property(nonatomic) __weak id <SFHighlightContactListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)_didReceiveTap:(id)arg1;
- (void)_updateMaskedCorners;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithContact:(id)arg1;

@end

