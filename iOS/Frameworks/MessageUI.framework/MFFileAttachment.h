//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface MFFileAttachment : NSObject
{
    int _attachmentType;
    NSString *_attachmentName;
    NSURL *_attachmentContentIDURL;
}

@property(nonatomic) int attachmentType; // @synthesize attachmentType=_attachmentType;
@property(retain, nonatomic) NSURL *attachmentContentIDURL; // @synthesize attachmentContentIDURL=_attachmentContentIDURL;
@property(copy, nonatomic) NSString *attachmentName; // @synthesize attachmentName=_attachmentName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
