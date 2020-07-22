//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PDFKit/UIDocumentPasswordViewDelegate-Protocol.h>

@class PDFView, UIView;

__attribute__((visibility("hidden")))
@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate>
{
    UIView *_passwordView;
    PDFView *_pdfView;
}

- (void).cxx_destruct;
- (void)_commonInit;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)setPDFView:(id)arg1;
- (void)loadView;

@end

