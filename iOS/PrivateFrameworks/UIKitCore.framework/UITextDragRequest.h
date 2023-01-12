//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UITextRange;
@protocol UIDragSession;

__attribute__((visibility("hidden")))
@interface UITextDragRequest : NSObject
{
    _Bool _selected;
    UITextRange *_dragRange;
    NSArray *_existingItems;
    id <UIDragSession> _dragSession;
    NSArray *_suggestedItems;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSArray *suggestedItems; // @synthesize suggestedItems=_suggestedItems;
@property(readonly, nonatomic) id <UIDragSession> dragSession; // @synthesize dragSession=_dragSession;
@property(readonly, nonatomic) NSArray *existingItems; // @synthesize existingItems=_existingItems;
@property(readonly, nonatomic) UITextRange *dragRange; // @synthesize dragRange=_dragRange;
- (id)initWithRange:(id)arg1 inSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

