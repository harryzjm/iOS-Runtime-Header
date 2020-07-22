//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface IMSPIAttachment : NSObject
{
    NSURL *_fileUrl;
    long long _fileTransferState;
}

@property long long fileTransferState; // @synthesize fileTransferState=_fileTransferState;
@property(retain) NSURL *fileUrl; // @synthesize fileUrl=_fileUrl;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFileUrl:(id)arg1 transferState:(long long)arg2;

@end

