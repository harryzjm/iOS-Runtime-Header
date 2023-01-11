//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSDictionary, NSString, PDFAppearanceCharacteristicsPrivate, UIColor;

@interface PDFAppearanceCharacteristics : NSObject <NSCopying>
{
    PDFAppearanceCharacteristicsPrivate *_private;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *appearanceCharacteristicsKeyValues;
@property(copy, nonatomic) NSString *downCaption;
@property(copy, nonatomic) NSString *rolloverCaption;
@property(copy, nonatomic) NSString *caption;
@property(nonatomic) long long controlType;
- (void)addColor:(id)arg1 forKey:(struct __CFString *)arg2 toDictionaryRef:(struct __CFDictionary *)arg3;
- (struct __CFDictionary *)createDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forControlType:(long long)arg2;
- (_Bool)scaleProportional;
- (struct CGPDFForm *)icon;
@property(nonatomic) long long rotation;
@property(copy, nonatomic) UIColor *borderColor;
@property(copy, nonatomic) UIColor *backgroundColor;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

