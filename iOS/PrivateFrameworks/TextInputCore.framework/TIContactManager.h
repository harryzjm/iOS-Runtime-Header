//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIContactManaging-Protocol.h>

@class NSString, NSUUID;

@interface TIContactManager : NSObject <TIContactManaging>
{
    NSUUID *contactCollectionUUID;
}

+ (id)singletonInstance;
+ (id)sharedTIContactManager;
+ (void)setSharedTIContactManager:(id)arg1;
@property(readonly, copy, nonatomic) NSUUID *contactCollectionUUID; // @synthesize contactCollectionUUID;
- (void).cxx_destruct;
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)unload;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (void)getOnce:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

