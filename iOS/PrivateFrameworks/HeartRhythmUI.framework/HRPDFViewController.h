//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKViewController.h>

@class NSData, PDFDocument;

@interface HRPDFViewController : HKViewController
{
    NSData *_pdfData;
    PDFDocument *_pdfDocument;
}

@property(retain, nonatomic) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
@property(retain, nonatomic) NSData *pdfData; // @synthesize pdfData=_pdfData;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)pdfView;
- (id)initWithPDFData:(id)arg1;

@end
