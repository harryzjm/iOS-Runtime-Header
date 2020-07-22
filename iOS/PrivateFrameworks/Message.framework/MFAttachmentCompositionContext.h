//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface MFAttachmentCompositionContext : NSObject
{
    NSString *_contextID;
    NSURL *_attachmentsBaseURL;
}

@property(copy, nonatomic) NSURL *attachmentsBaseURL; // @synthesize attachmentsBaseURL=_attachmentsBaseURL;
@property(readonly, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(readonly, nonatomic) NSArray *attachments;
- (id)initWithContextID:(id)arg1;
- (id)init;
- (void)dealloc;

@end
