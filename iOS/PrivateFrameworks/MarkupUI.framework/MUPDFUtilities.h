//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUPDFUtilities : NSObject
{
}

+ (struct CGAffineTransform)flattenRotationTransformForPage:(struct CGPDFPage *)arg1 outMediaBox:(struct CGRect *)arg2 outCropBox:(struct CGRect *)arg3;
+ (long long)exifOrientationOfPage:(struct CGPDFPage *)arg1;
+ (unsigned long long)normalizedRotationAngleOfPage:(struct CGPDFPage *)arg1;
+ (unsigned long long)indexOfDictionary:(struct CGPDFDictionary *)arg1 inArray:(struct CGPDFArray *)arg2;
+ (id)createDictionaryFromPDFDictionary:(struct CGPDFDictionary *)arg1;
+ (id)createPDFDateString:(id)arg1;

@end

