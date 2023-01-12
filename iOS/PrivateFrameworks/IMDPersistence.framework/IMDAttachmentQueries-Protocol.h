//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDPersistence/NSObject-Protocol.h>

@class NSArray, NSPredicate;

@protocol IMDAttachmentQueries <NSObject>
- (void)fetchAttachmentRecordsFilteredUsingPredicate:(NSPredicate *)arg1 limit:(unsigned long long)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)deleteAttachmentsDirectWithPredicate:(NSPredicate *)arg1;
- (void)coreSpotlightDeleteAttachmentGUIDs:(NSArray *)arg1;
@end

