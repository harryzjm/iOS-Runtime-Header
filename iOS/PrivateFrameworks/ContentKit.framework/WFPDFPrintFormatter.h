//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>

@class UIPrintFormatter, WFPDFDocument;

__attribute__((visibility("hidden")))
@interface WFPDFPrintFormatter : NSObject <NSCopying>
{
    UIPrintFormatter *_printFormatter;
    WFPDFDocument *_document;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFPDFDocument *document; // @synthesize document=_document;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) UIPrintFormatter *printFormatter; // @synthesize printFormatter=_printFormatter;
- (id)initWithPDFDocument:(id)arg1;
- (id)initWithFileRepresentation:(id)arg1;

@end
