//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PDFKit/NSCopying-Protocol.h>

@class PDFActionGoToPrivateVars, PDFDestination;

@interface PDFActionGoTo <NSCopying>
{
    PDFActionGoToPrivateVars *_private2;
}

- (void).cxx_destruct;
- (id)toolTipNoLabel;
- (id)toolTip;
- (void)addDestinationToDictionaryRef:(struct __CFDictionary *)arg1;
- (const struct __CFDictionary *)createDictionaryRef;
- (void)commonInit;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)description;
@property(retain, nonatomic) PDFDestination *destination;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDestination:(id)arg1;

@end

