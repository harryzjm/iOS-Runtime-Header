//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesEditor/NSObject-Protocol.h>

@class ICStyleSelectorViewController, UIViewController;

@protocol ICStyleSelectorDelegate <NSObject>
@property(readonly, nonatomic) _Bool isEditingOnSystemPaperOnPad;
@property(readonly, nonatomic) _Bool isBlockQuoteEnabled;
- (void)toggleBlockQuote;
- (void)styleSelector:(ICStyleSelectorViewController *)arg1 presentViewController:(UIViewController *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)styleSelectorDidCancel:(ICStyleSelectorViewController *)arg1;
- (void)styleSelectorDidIndentRight:(ICStyleSelectorViewController *)arg1;
- (void)styleSelectorDidIndentLeft:(ICStyleSelectorViewController *)arg1;
- (_Bool)styleSelectorCanIndentRight:(ICStyleSelectorViewController *)arg1;
- (_Bool)styleSelectorCanIndentLeft:(ICStyleSelectorViewController *)arg1;
- (void)styleSelector:(ICStyleSelectorViewController *)arg1 toggleBIUS:(unsigned long long)arg2;
- (void)styleSelector:(ICStyleSelectorViewController *)arg1 didSelectStyle:(unsigned int)arg2;
@end

