//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperKit/PDFDocumentDelegate-Protocol.h>

@class NSArray, PDFAnnotation, PDFDocument, PDFPage, VKCImageAnalysis;

@protocol PDFDocumentDelegatePrivate <PDFDocumentDelegate>

@optional
- (_Bool)shouldReadAKInkAnnotations;
- (void)pdfDocument:(PDFDocument *)arg1 handleTabFrom:(PDFAnnotation *)arg2 direction:(unsigned long long)arg3;
- (void)pdfDocument:(PDFDocument *)arg1 detectedAnnotations:(NSArray *)arg2 forPage:(PDFPage *)arg3;
- (void)pdfDocument:(PDFDocument *)arg1 didReceiveAnalysis:(VKCImageAnalysis *)arg2 forPage:(PDFPage *)arg3;
- (void)pdfDocument:(PDFDocument *)arg1 loadedAnnotations:(NSArray *)arg2 forPage:(PDFPage *)arg3;
- (_Bool)documentCanBeEdited:(PDFDocument *)arg1;
- (_Bool)requestAccessPermissions:(unsigned int)arg1;
@end

