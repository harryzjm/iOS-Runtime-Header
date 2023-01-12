//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesEditor/UITextDragDelegate-Protocol.h>

@class UIGestureRecognizer, UITextPosition, UITextRange, UIView;
@protocol UIDragSession, UITextDragRequest, UITextDraggable;

@protocol UITextDragDelegate_Private <UITextDragDelegate>

@optional
- (_Bool)_textDraggableView:(UIView<UITextDraggable> *)arg1 beginningDragShouldDelayCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (long long)_textDraggableView:(UIView<UITextDraggable> *)arg1 dataOwnerForDrag:(id <UITextDragRequest>)arg2;
- (UITextRange *)textDraggableView:(UIView<UITextDraggable> *)arg1 textRangeForDragFromPosition:(UITextPosition *)arg2 defaultRange:(UITextRange *)arg3 session:(id <UIDragSession>)arg4;
@end

