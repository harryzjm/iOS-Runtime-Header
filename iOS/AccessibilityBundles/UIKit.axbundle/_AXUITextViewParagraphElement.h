//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

#import <UIKit/UIAccessibilityElementDelegate-Protocol.h>

@class NSArray, NSString;

@interface _AXUITextViewParagraphElement : UIAccessibilityElement <UIAccessibilityElementDelegate>
{
    NSArray *_links;
    struct _NSRange _textRange;
}

@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
- (void).cxx_destruct;
- (_Bool)accessibilityActivate;
- (struct CGRect)accessibilityFrame;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (id)accessibilityLabel:(id)arg1;
- (struct CGRect)accessibilityFrame:(id)arg1;
- (_Bool)_accessibilityIsScannerElement;
- (id)initWithAccessibilityContainer:(id)arg1 textRange:(struct _NSRange)arg2 links:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

