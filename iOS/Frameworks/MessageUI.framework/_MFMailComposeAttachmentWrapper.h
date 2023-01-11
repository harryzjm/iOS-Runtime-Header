//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface _MFMailComposeAttachmentWrapper : NSObject
{
    NSData *_data;
    NSString *_mimeType;
    NSString *_fileName;
    NSURL *_fileURL;
    NSString *_identifier;
}

+ (id)wrapperWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
+ (id)wrapperWithFileURL:(id)arg1 mimeType:(id)arg2;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned long long)fileSize;
- (id)description;
- (void)dealloc;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)initWithFileURL:(id)arg1 mimeType:(id)arg2;

@end

