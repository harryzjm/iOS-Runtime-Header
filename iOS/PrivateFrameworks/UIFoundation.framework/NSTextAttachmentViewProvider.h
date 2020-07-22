//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSLayoutManager, NSTextAttachment, UIView;

@interface NSTextAttachmentViewProvider : NSObject
{
    UIView *_view;
    unsigned long long _characterIndex;
    _Bool _tracksTextAttachmentViewBounds;
    NSTextAttachment *_textAttachment;
    NSLayoutManager *_layoutManager;
}

@property(readonly) unsigned long long characterIndex; // @synthesize characterIndex=_characterIndex;
@property _Bool tracksTextAttachmentViewBounds; // @synthesize tracksTextAttachmentViewBounds=_tracksTextAttachmentViewBounds;
@property __weak NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property __weak NSTextAttachment *textAttachment; // @synthesize textAttachment=_textAttachment;
- (void).cxx_destruct;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)dealloc;
- (void)removeView;
- (void)loadView;
@property(retain) UIView *view; // @dynamic view;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;

@end

