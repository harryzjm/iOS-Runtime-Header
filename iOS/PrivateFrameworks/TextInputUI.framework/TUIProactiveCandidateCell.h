//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TIKeyboardCandidate, UIView;

@interface TUIProactiveCandidateCell
{
    TIKeyboardCandidate *_candidate;
    UIView *_slotContentView;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *slotContentView; // @synthesize slotContentView=_slotContentView;
@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end
