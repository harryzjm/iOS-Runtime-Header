//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDFAKAnnotationSerializationHelper : NSObject
{
}

+ (_Bool)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFDictionary:(struct CGPDFDictionary *)arg2;
+ (_Bool)_annotationClassHasSeniority:(id)arg1;
+ (id)akAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 andDictionary:(struct CGPDFDictionary *)arg2;
+ (void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(struct __CFDictionary *)arg2;

@end

