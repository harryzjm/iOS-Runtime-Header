//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSKDocumentRoot.h>

@class TSSStylesheet, UIViewController;

@interface SXTextTangierDocumentRoot : TSKDocumentRoot
{
    UIViewController *_viewController;
    TSSStylesheet *_aStylesheet;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSSStylesheet *aStylesheet; // @synthesize aStylesheet=_aStylesheet;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)stylesheet;
- (id)initWithContext:(id)arg1;
- (id)init;

@end
