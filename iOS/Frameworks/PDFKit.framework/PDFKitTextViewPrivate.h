//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFAnnotation, PDFPageView, PDFTextWidgetTextView, PDFView, UIView;

__attribute__((visibility("hidden")))
@interface PDFKitTextViewPrivate : NSObject
{
    UIView *topLevelView;
    PDFTextWidgetTextView *textView;
    PDFView *pdfView;
    PDFPageView *pdfPageView;
    PDFAnnotation *annotation;
}

- (void).cxx_destruct;

@end

