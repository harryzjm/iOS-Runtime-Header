//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICImageSetRep, NSData, NSString;

@interface IBICImageSetRepFileNameLinkingMutator
{
    IBICImageSetRep *_imageRep;
    NSString *_newFileName;
    NSString *_resultAbsolutePath;
    NSData *_newImageData;
    NSString *_oldFileName;
    NSData *_oldImageData;
    NSString *_pendingManifestPath;
    NSData *_pendingManifestData;
}

- (void).cxx_destruct;
- (id)inverseMutator;
- (id)mutationDescription;
- (void)applyToDiskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applyToModel;
- (id)initWithImageRep:(id)arg1 fileName:(id)arg2 imageData:(id)arg3;
- (id)initWithImageRep:(id)arg1 andSibling:(id)arg2;

@end

