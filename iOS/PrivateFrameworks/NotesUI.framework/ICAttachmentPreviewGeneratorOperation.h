//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class ICAttachmentModel, NSManagedObjectContext, NSManagedObjectID;

@interface ICAttachmentPreviewGeneratorOperation : NSOperation
{
    NSManagedObjectID *_attachmentID;
    NSManagedObjectContext *_managedObjectContext;
    ICAttachmentModel *_attachmentModel;
}

@property(retain) ICAttachmentModel *attachmentModel; // @synthesize attachmentModel=_attachmentModel;
@property(retain) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain) NSManagedObjectID *attachmentID; // @synthesize attachmentID=_attachmentID;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithAttachmentManagedObjectID:(id)arg1;

@end

