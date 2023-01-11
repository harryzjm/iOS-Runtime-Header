//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLLoader : NSObject
{
}

+ (id)loadUpdatableModelFromArchive:(struct _MLModelInputArchiver *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromArchive:(struct _MLModelInputArchiver *)arg1 configuration:(id)arg2 loaderEvent:(id)arg3 error:(id *)arg4;
+ (id)loadModelFromArchive:(struct _MLModelInputArchiver *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (_Bool)unarchiveCodedModelFrom:(struct _MLModelInputArchiver *)arg1 to:(id *)arg2 error:(id *)arg3;
+ (id)loadModelFromArchive:(struct _MLModelInputArchiver *)arg1 error:(id *)arg2;
+ (id)loadUpdatableModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 loaderEvent:(id)arg3 error:(id *)arg4;
+ (id)loadModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (_Bool)createDecryptSessionForModelAtURL:(id)arg1 configuration:(id)arg2 decryptSession:(id *)arg3 error:(id *)arg4;
+ (_Bool)checkAssetPath:(id)arg1 error:(id *)arg2;
+ (id)loadModelFromAssetAtURL:(id)arg1 error:(id *)arg2;

@end
