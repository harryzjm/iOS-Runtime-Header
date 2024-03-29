//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKPageModelController, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFAKPageAdaptorPrivate : NSObject
{
    _Bool isTornDown;
    PDFPage *pdfPage;
    AKPageModelController *akPageModelController;
    _Bool isObservingPageModel;
    _Bool isSyncingFromPDFPage;
    _Bool isSyncingFromAKPageModel;
}

- (void).cxx_destruct;

@end

