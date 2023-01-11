//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKExpandingLabel, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceTextBlockCell
{
    _Bool _constraintsAdded;
    MKExpandingLabel *_textBlock;
    NSString *_textBlockText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool constraintsAdded; // @synthesize constraintsAdded=_constraintsAdded;
@property(copy, nonatomic) NSString *textBlockText; // @synthesize textBlockText=_textBlockText;
@property(retain, nonatomic) MKExpandingLabel *textBlock; // @synthesize textBlock=_textBlock;
@property(copy, nonatomic) CDUnknownBlockType textBlockResizedBlock;
@property(nonatomic, getter=isTextBlockExpanded) _Bool textBlockExpanded;
- (void)updateConstraints;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect)arg1;

@end
