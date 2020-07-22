//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PDFKit/NSCopying-Protocol.h>

@class PDFActionNamedPrivateVars;

@interface PDFActionNamed <NSCopying>
{
    PDFActionNamedPrivateVars *_private2;
}

- (void).cxx_destruct;
- (id)toolTip;
- (void)addNameToDictionaryRef:(struct __CFDictionary *)arg1;
- (const struct __CFDictionary *)createDictionaryRef;
- (void)commonInit;
- (id)initWithActionDictionary:(struct CGPDFDictionary *)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (id)description;
@property(nonatomic) long long name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(long long)arg1;

@end
