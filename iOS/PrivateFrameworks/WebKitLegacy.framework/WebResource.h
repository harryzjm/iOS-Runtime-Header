//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/NSCoding-Protocol.h>
#import <WebKitLegacy/NSCopying-Protocol.h>

@class NSData, NSString, NSURL, WebResourcePrivate;

@interface WebResource : NSObject <NSCoding, NSCopying>
{
    WebResourcePrivate *_private;
}

- (id)description;
@property(readonly, copy, nonatomic) NSString *frameName;
@property(readonly, copy, nonatomic) NSString *textEncodingName;
@property(readonly, copy, nonatomic) NSString *MIMEType;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSData *data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)init;
- (struct ArchiveResource *)_coreResource;
- (id)_initWithCoreResource:(Ref_e6cb3a5e *)arg1;
- (id)_stringValue;
- (id)_response;
- (id)_suggestedFilename;
- (id)_initWithData:(id)arg1 URL:(id)arg2 response:(id)arg3;
- (id)_initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 response:(id)arg6 copyData:(_Bool)arg7;
- (void)_ignoreWhenUnarchiving;

@end

