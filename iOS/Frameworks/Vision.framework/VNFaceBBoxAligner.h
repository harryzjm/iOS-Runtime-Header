//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VNModelFile;

__attribute__((visibility("hidden")))
@interface VNFaceBBoxAligner
{
    struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> mFaceBoxPoseAlignerImpl;
    _Bool _modelFilesWereMemmapped;
    id <VNModelFile> mFaceBoxAlignerModelFileHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;

@end
