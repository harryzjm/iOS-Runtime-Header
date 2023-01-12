//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>

@interface VNRecognizeDocumentElementsRequestElementConfiguration : NSObject <NSCopying>
{
    _Bool _recognize;
    _Bool _generateSegmentationMask;
}

+ (id)newConfiguration;
@property _Bool generateSegmentationMask; // @synthesize generateSegmentationMask=_generateSegmentationMask;
@property _Bool recognize; // @synthesize recognize=_recognize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
