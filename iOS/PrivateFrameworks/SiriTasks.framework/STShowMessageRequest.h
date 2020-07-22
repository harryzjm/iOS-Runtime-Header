//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface STShowMessageRequest : AFSiriRequest
{
    STSiriMessage *_message;
    _Bool _showAsDraft;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;
- (_Bool)showAsDraft;
- (id)message;
- (id)_initWithMessage:(id)arg1 showAsDraft:(_Bool)arg2;
- (_Bool)_makeAppFrontmost;

@end
