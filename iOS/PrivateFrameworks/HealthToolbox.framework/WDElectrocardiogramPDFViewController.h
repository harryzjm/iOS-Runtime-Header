//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSData, NSDate, NSString, PDFDocument, PDFView;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramPDFViewController : UIViewController
{
    NSData *_pdfData;
    NSDate *_sampleDate;
    PDFDocument *_pdfDocument;
    NSString *_firstName;
    NSString *_lastName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
@property(readonly, nonatomic) NSDate *sampleDate; // @synthesize sampleDate=_sampleDate;
@property(readonly, nonatomic) NSData *pdfData; // @synthesize pdfData=_pdfData;
- (unsigned long long)overrideMask;
- (void)didTapShare:(id)arg1;
- (void)didTapDone;
- (void)loadView;
@property(readonly, nonatomic) PDFView *pdfView;
- (id)initWithPDFData:(id)arg1 sampleDate:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

