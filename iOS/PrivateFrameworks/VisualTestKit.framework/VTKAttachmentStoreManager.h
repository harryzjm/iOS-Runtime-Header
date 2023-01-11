//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKStoreManager-Protocol.h>

@class NSString, VTKFileStoreManager;

__attribute__((visibility("hidden")))
@interface VTKAttachmentStoreManager : NSObject <VTKStoreManager>
{
    VTKFileStoreManager *_fileStoreManager;
}

@property(readonly, nonatomic) VTKFileStoreManager *fileStoreManager; // @synthesize fileStoreManager=_fileStoreManager;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *itemsDirectory;
- (id)saveItems:(id)arg1 withID:(id)arg2 testCase:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
