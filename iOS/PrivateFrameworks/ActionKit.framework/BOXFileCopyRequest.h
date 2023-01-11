//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface BOXFileCopyRequest
{
    _Bool _requestAllFileFields;
    NSString *_fileID;
    NSString *_destinationFolderID;
    NSString *_fileName;
}

@property(nonatomic) _Bool requestAllFileFields; // @synthesize requestAllFileFields=_requestAllFileFields;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSString *destinationFolderID; // @synthesize destinationFolderID=_destinationFolderID;
@property(readonly, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
- (void).cxx_destruct;
- (struct NSString *)itemTypeForSharedLink;
- (id)itemIDForSharedLink;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithFileID:(id)arg1 destinationFolderID:(id)arg2;

@end
