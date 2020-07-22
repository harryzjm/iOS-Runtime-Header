//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CVMLModelFile;

@interface CVMLFaceBBoxAligner
{
    struct shared_ptr<vision::mod::FaceboxAligner> mFaceBoxAlignerImpl;
    id <CVMLModelFile> mFaceBoxAlignerModelFileHandle;
}

+ (_Bool)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
