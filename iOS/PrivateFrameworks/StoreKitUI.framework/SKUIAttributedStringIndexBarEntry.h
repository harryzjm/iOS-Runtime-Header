//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIIndexBarEntry.h"

@class NSAttributedString, NSDictionary;

__attribute__((visibility("hidden")))
@interface SKUIAttributedStringIndexBarEntry : SKUIIndexBarEntry
{
    _Bool _hasValidSynthesizedAttributedString;
    NSAttributedString *_synthesizedAttributedString;
    NSAttributedString *_attributedString;
    NSDictionary *_defaultTextAttributes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *defaultTextAttributes; // @synthesize defaultTextAttributes=_defaultTextAttributes;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)_synthesizedAttributedString;
- (void)_invalidateSynthesizedAttributedString;
- (id)entryAttributedString;
- (void)_tintColorDidChange;
- (void)_drawContentInRect:(struct CGRect)arg1;
- (struct CGSize)_calculatedContentSize;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAttributedString:(id)arg1;

@end

