//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CVMLFaceModelObservation;

@interface CVMLFaceId : NSObject
{
    struct shared_ptr<vision::mod::VIPIdentification> _mVIPAlgorithmImpl;
    CVMLFaceModelObservation *_modelData;
}

@property(retain) CVMLFaceModelObservation *modelData; // @synthesize modelData=_modelData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)probeForIdentity:(id)arg1 andParameters:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool buildModels;
- (_Bool)removeIdentity:(id)arg1 andParameters:(id)arg2 error:(id *)arg3;
- (_Bool)removeFace:(id)arg1 andParameters:(id)arg2 error:(id *)arg3;
- (_Bool)enrollFace:(id)arg1 andParameters:(id)arg2 error:(id *)arg3;
- (id)initWithFaceModelData:(id)arg1 error:(id *)arg2;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
