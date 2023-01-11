//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OBTemplateLabel : UILabel
{
    NSString *_displayText;
    NSString *_symbolName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void)updateTextAlignment;
- (void)setTitleTrailingSymbol:(id)arg1;
- (void)setText:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)init;

@end
