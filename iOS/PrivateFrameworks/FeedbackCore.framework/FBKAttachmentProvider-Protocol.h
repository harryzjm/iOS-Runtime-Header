//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FeedbackCore/NSObject-Protocol.h>

@class FBKAttachment, NSSet, NSString;

@protocol FBKAttachmentProvider <NSObject>
- (void)updateRequirements:(NSSet *)arg1;
- (NSString *)identifier;
- (NSString *)platform;
- (NSSet *)requirements;
- (NSSet *)attachments;
- (_Bool)hasFilePromises;
- (_Bool)hasUnmetRequirements;
- (void)removeAllAttachments;
- (void)cancelCollection:(FBKAttachment *)arg1;
- (void)removeAttachment:(FBKAttachment *)arg1;
@end

