//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPItem, FPItemID, NSString;

@interface FPCreateFolderOperation
{
    FPItem *_parentItem;
    NSString *_folderFilename;
    FPItemID *_placeholderID;
    _Bool _shouldBounceOnCollision;
    CDUnknownBlockType _createFolderCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType createFolderCompletionBlock; // @synthesize createFolderCompletionBlock=_createFolderCompletionBlock;
@property(nonatomic) _Bool shouldBounceOnCollision; // @synthesize shouldBounceOnCollision=_shouldBounceOnCollision;
- (void)presendNotifications;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)actionMain;
- (id)initWithParentItem:(id)arg1 folderName:(id)arg2;

@end
