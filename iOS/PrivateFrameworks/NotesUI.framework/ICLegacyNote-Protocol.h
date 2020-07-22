//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/NSObject-Protocol.h>

@class NSArray, NSDate, NSManagedObjectContext, NSManagedObjectID, NSString;
@protocol ICLegacyAttachment, ICLegacyFolder;

@protocol ICLegacyNote <NSObject>
- (void)markForDeletion;
- (_Bool)isMarkedForDeletion;
- (void)setHtmlString:(NSString *)arg1;
- (id <ICLegacyAttachment>)createAttachmentWithName:(NSString *)arg1;
- (_Bool)isPlainText;
- (NSManagedObjectContext *)managedObjectContext;
- (NSManagedObjectID *)objectID;
- (NSArray *)attachments;
- (NSDate *)modificationDate;
- (NSDate *)creationDate;
- (NSString *)title;
- (NSString *)identifier;
- (id <ICLegacyFolder>)folder;
- (NSString *)htmlString;
@end

