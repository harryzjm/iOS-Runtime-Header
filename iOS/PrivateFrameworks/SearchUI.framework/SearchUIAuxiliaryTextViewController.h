//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TLKAuxilliaryTextView;

@interface SearchUIAuxiliaryTextViewController
{
    _Bool _shouldCenter;
    TLKAuxilliaryTextView *_auxilliaryTextView;
}

+ (_Bool)supportsRowModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCenter; // @synthesize shouldCenter=_shouldCenter;
@property(retain, nonatomic) TLKAuxilliaryTextView *auxilliaryTextView; // @synthesize auxilliaryTextView=_auxilliaryTextView;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;
- (id)setupView;
- (_Bool)shouldVerticallyCenter;

@end
