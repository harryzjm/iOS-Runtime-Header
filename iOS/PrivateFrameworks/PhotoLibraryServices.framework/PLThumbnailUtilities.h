//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLThumbnailUtilities : NSObject
{
}

+ (_Bool)performSWCascadingDownscaleTo5551OnImage:(struct CGImage *)arg1 withSpecifications:(id)arg2 destinationData:(id *)arg3;
+ (_Bool)performSWDownscaleTo5551OnImage:(struct CGImage *)arg1 withSpecification:(id)arg2 destinationData:(id *)arg3 imageRect:(struct CGRect *)arg4 bytesPerRow:(int *)arg5;
+ (_Bool)_performSWDownscaleTo5551OnSourceImage:(struct CGImage *)arg1 withSourceDimensions:(CDStruct_1ef3fb1f)arg2 withSpecification:(id)arg3 destinationData:(id)arg4 imageRect:(struct CGRect *)arg5 bytesPerRow:(int *)arg6;
+ (_Bool)_validateSpecifications:(id)arg1 destinationData:(id *)arg2;
+ (_Bool)_validateSpecification:(id)arg1 destinationData:(id *)arg2;
+ (id)_destinationDataArrayFromSpecifications:(id)arg1;
+ (id)_destinationDataFromSpecification:(id)arg1;
+ (int)_requiredDataLengthForSpecification:(id)arg1;
+ (int)_bytesPerRowForWidthInPixels:(int)arg1;

@end

