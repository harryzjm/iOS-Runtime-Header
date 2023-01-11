//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IMPreviewGeneratorManager : NSObject
{
    NSDictionary *_UTITypes;
    NSDictionary *_dynamicTypes;
}

+ (id)previewGeneratorClasses;
+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *dynamicTypes; // @synthesize dynamicTypes=_dynamicTypes;
@property(copy, nonatomic) NSDictionary *UTITypes; // @synthesize UTITypes=_UTITypes;
- (void)dealloc;
- (Class)_classForUTIType:(id)arg1;
- (Class)_previewGeneratorClassForSourceURL:(id)arg1;
- (_Bool)movePreviewToDiskCache:(id)arg1 previewURL:(id)arg2 error:(id *)arg3;
- (_Bool)persistPreviewToDiskCache:(struct CGImage *)arg1 previewURL:(id)arg2 error:(id *)arg3;
- (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
- (_Bool)generateAndPersistPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 previewConstraints:(struct IMPreviewConstraints)arg3 error:(id *)arg4;
- (id)init;

@end

