//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DDScannerResult, NSArray, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFScannerResultPrivate : NSObject
{
    DDScannerResult *ddResult;
    PDFPage *page;
    struct CGRect bounds;
    NSArray *rects;
    _Bool resultIsPastDate;
    _Bool hasRunActionsForResult;
    _Bool hasActionsForResult;
    struct __DDHighlight *highlightRef;
}

- (void).cxx_destruct;

@end
