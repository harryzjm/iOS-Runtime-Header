//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject
{
    NSString *_messageID;
    NSString *_attachmentName;
}

@property(copy, nonatomic) NSString *attachmentName; // @synthesize attachmentName=_attachmentName;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2;

@end

