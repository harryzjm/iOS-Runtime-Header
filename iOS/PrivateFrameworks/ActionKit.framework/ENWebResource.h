//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface ENWebResource : NSObject
{
    NSData *_data;
    NSURL *_URL;
    NSString *_MIMEType;
    NSString *_textEncodingName;
    NSString *_frameName;
}

+ (id)webResourceWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *frameName; // @synthesize frameName=_frameName;
@property(copy, nonatomic) NSString *textEncodingName; // @synthesize textEncodingName=_textEncodingName;
@property(copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)propertyList;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;

@end
