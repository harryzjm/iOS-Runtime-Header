//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, SCRCMathExpression;

@interface UIAccessibilityMathViewController : UIViewController
{
    SCRCMathExpression *_mathExpression;
    NSDictionary *_mathDictionary;
}

+ (id)_uiaxBundle;
@property(readonly, nonatomic) NSDictionary *mathDictionary; // @synthesize mathDictionary=_mathDictionary;
- (void).cxx_destruct;
- (void)_styleBarButtonItem:(id)arg1;
- (void)_doneButtonTapped;
- (id)_htmlString;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithMathDictionary:(id)arg1;

@end

