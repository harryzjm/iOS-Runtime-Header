//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNCVPixelBufferConversionHelpers : NSObject
{
}

+ (unsigned long long)computeHashForCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (_Bool)isCVPixelBuffer:(struct __CVBuffer *)arg1 equalToCVPixelBuffer:(struct __CVBuffer *)arg2;
+ (struct __CVBuffer *)createCVPixelBufferRefFromDictionaryRepresentation:(id)arg1;
+ (id)createDictionaryRepresentationOfCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)dictionaryRepresentationClassesSet;

@end

