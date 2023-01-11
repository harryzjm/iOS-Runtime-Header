//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DiagnosticExtensions/NSSecureCoding-Protocol.h>

@class NSArray, NSURL;

@interface DEAttachmentGroup <NSSecureCoding>
{
    NSURL *_rootURL;
    NSArray *_attachmentItems;
}

+ (_Bool)supportsSecureCoding;
+ (id)createWithName:(id)arg1 rootURL:(id)arg2 attachmentItems:(id)arg3;
+ (id)createWithName:(id)arg1 rootURL:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *attachmentItems; // @synthesize attachmentItems=_attachmentItems;
@property(retain, nonatomic) NSURL *rootURL; // @synthesize rootURL=_rootURL;
- (id)attachToDestinationDir:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
