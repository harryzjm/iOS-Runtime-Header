//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>

@protocol CKComposeRecipientViewDelegate;

__attribute__((visibility("hidden")))
@interface CKComposeRecipientView : CNComposeRecipientTextView
{
    id <CKComposeRecipientViewDelegate> layoutDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CKComposeRecipientViewDelegate> layoutDelegate; // @synthesize layoutDelegate;
- (struct UIEdgeInsets)layoutMargins;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (void)reset;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

