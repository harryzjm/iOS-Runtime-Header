//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SiriNLUTypesConverterUtils : NSObject
{
}

+ (unique_ptr_8df694ec)convertUsoGraphFromObjCToCpp:(id)arg1;
+ (unique_ptr_f9c9e503)convertEntityCandidateFromObjCToCpp:(id)arg1;
+ (unique_ptr_0c8e3933)convertNLv4EmbeddingTensorFromObjCToCpp:(id)arg1;
+ (unique_ptr_c7951cb7)convertTokenChainFromObjCToCpp:(id)arg1;
+ (id)convertMatchingSpanFromCppToObjC:(void *)arg1;
+ (unique_ptr_bb22c476)convertMatchingSpanFromObjCToCpp:(id)arg1;
+ (id)convertNLv4ParserResponseFromCppToObjC:(void *)arg1;
+ (id)convertNLv4ParserRequestFromCppToObjC:(void *)arg1;
+ (unique_ptr_7e96dec3)convertNLv4ParserRequestToCpp:(id)arg1;
+ (struct Reader)getCppReaderFromObjCObject:(id)arg1;

@end
