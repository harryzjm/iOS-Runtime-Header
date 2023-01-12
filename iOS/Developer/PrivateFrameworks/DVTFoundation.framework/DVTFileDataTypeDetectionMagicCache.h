//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTExtension, DVTFileDataType, NSArray;

@interface DVTFileDataTypeDetectionMagicCache : NSObject
{
    DVTExtension *_extension;
    DVTFileDataType *_matchedType;
    DVTFileDataType *_detectedType;
    NSArray *_magicWords;
}

- (void).cxx_destruct;
@property(readonly) NSArray *magicWords; // @synthesize magicWords=_magicWords;
@property(readonly) DVTFileDataType *detectedType; // @synthesize detectedType=_detectedType;
@property(readonly) DVTFileDataType *matchedType; // @synthesize matchedType=_matchedType;
- (id)initWithExtension:(id)arg1;

@end
