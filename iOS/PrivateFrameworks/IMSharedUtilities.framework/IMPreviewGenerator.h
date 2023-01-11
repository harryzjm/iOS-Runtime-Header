//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/IMPreviewGeneratorProtocol-Protocol.h>
#import <IMSharedUtilities/IMUTITypeInformation-Protocol.h>

@interface IMPreviewGenerator : NSObject <IMPreviewGeneratorProtocol, IMUTITypeInformation>
{
}

+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (double)maxUpScale;
+ (_Bool)shouldShadePreview;
+ (_Bool)shouldScaleUpPreview;
+ (_Bool)writesToDisk;
+ (id)previewExtension;
+ (id)UTITypes;

@end
