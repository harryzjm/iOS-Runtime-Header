//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataAccess/DAMailMessage.h>

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage
{
    ASEmailItem *_ASEmailItem;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rfc822Data;
- (int)smimeType;
- (_Bool)isDraft;
- (id)bcc;
- (_Bool)verbIsSet;
- (_Bool)flaggedIsSet;
- (_Bool)readIsSet;
- (int)lastVerb;
- (id)preview;
- (id)folderID;
- (id)longID;
- (id)remoteID;
- (id)conversationIndex;
- (id)conversationId;
- (id)threadTopic;
- (_Bool)meetingRequestIsActionable;
- (id)meetingRequestMetaData;
- (id)meetingRequestUUID;
- (id)attachments;
- (id)messageClass;
- (int)bodyTruncated;
- (int)bodySize;
- (id)sender;
- (id)body;
- (_Bool)flagged;
- (_Bool)read;
- (int)importance;
- (id)displayTo;
- (id)subject;
- (id)date;
- (id)replyTo;
- (id)from;
- (id)cc;
- (id)to;
- (id)description;
- (id)initWithASEmailItem:(id)arg1;

@end

