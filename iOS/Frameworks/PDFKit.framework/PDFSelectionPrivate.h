//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSUUID, PDFDocument, UIColor;

__attribute__((visibility("hidden")))
@interface PDFSelectionPrivate : NSObject
{
    PDFDocument *document;
    UIColor *color;
    NSMutableArray *pageRanges;
    _Bool forceBreaks;
    struct __CFArray *cgSelections;
    NSMutableArray *pages;
    NSUUID *pdfSelectionUUID;
}

- (void).cxx_destruct;

@end
