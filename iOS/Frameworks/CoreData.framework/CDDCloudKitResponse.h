//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDDCloudKitMessage, NSError;

__attribute__((visibility("hidden")))
@interface CDDCloudKitResponse : NSObject
{
    _Bool _success;
    CDDCloudKitMessage *_message;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

