//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationReplace
{
    struct _NSRange _replacementRange;
    NSAttributedString *_attributedString;
}

- (void).cxx_destruct;
- (void)undoRedo;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2 replacementRange:(struct _NSRange)arg3;

@end
