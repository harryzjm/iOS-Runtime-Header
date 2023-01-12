//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGMutableLoadingStatusComponent-Protocol.h>

@class NSMutableDictionary;

@interface PXGLoadingStatusComponent <PXGMutableLoadingStatusComponent>
{
    NSMutableDictionary *_errorByEntity;
}

+ (_Bool)shouldDiffForChanges;
+ (unsigned long long)elementSize;
- (void).cxx_destruct;
- (void)setState:(CDStruct_6b48f683)arg1 forEntities:(const CDStruct_6238c8e0 *)arg2 count:(unsigned long long)arg3;
- (void)setState:(CDStruct_6b48f683)arg1 forEntity:(CDStruct_6238c8e0)arg2;
- (CDStruct_6b48f683)stateForEntity:(CDStruct_6238c8e0)arg1;
@property(readonly, nonatomic) CDStruct_6b48f683 *mutableStates;
@property(readonly, nonatomic) const CDStruct_6b48f683 *states;
- (void)setError:(id)arg1 forEntity:(CDStruct_6238c8e0)arg2;
- (id)errorForEntity:(CDStruct_6238c8e0)arg1;
- (void)willDestroyEntities:(const CDStruct_6238c8e0 *)arg1 count:(long long)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)initWithDataStore:(id)arg1;

@end
