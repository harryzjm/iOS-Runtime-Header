//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesEditor/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSTextContainer, NSTextElement, NSTextLayoutFragment, NSTextLayoutManager, NSTextViewportLayoutController;
@protocol NSTextLocation;

@protocol NSTextLayoutManagerDelegate <NSObject>

@optional
- (NSTextViewportLayoutController *)textLayoutManager:(NSTextLayoutManager *)arg1 textViewportLayoutControllerForTextContainer:(NSTextContainer *)arg2;
- (_Bool)textLayoutManagerAllowsSimpleRectangularTextContainerOnly:(NSTextLayoutManager *)arg1;
- (NSTextContainer *)textLayoutManager:(NSTextLayoutManager *)arg1 textContainerForLocation:(id <NSTextLocation>)arg2;
- (NSArray *)textLayoutManager:(NSTextLayoutManager *)arg1 willChangeFromTextSelections:(NSArray *)arg2 toTextSelections:(NSArray *)arg3;
- (NSDictionary *)textLayoutManager:(NSTextLayoutManager *)arg1 renderingAttributesForLink:(id)arg2 atLocation:(id <NSTextLocation>)arg3 defaultAttributes:(NSDictionary *)arg4;
- (_Bool)textLayoutManager:(NSTextLayoutManager *)arg1 shouldBreakLineBeforeLocation:(id <NSTextLocation>)arg2 hyphenating:(_Bool)arg3;
- (NSTextLayoutFragment *)textLayoutManager:(NSTextLayoutManager *)arg1 textLayoutFragmentForLocation:(id <NSTextLocation>)arg2 inTextElement:(NSTextElement *)arg3;
@end

