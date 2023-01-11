//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKPassLibrary;

@interface PKRemoteDataAccessor
{
    PKPassLibrary *_library;
    NSString *_objectUniqueID;
}

@property(readonly, nonatomic) NSString *objectUniqueID; // @synthesize objectUniqueID=_objectUniqueID;
@property(readonly, nonatomic) PKPassLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (id)displayProfileOfType:(long long)arg1;
- (id)archiveData;
- (id)dataForBundleResources:(id)arg1;
- (id)dataForBundleResource:(id)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5;
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;
- (id)content;
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSettings:(unsigned long long)arg1;
- (void)noteShared;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2;

@end

