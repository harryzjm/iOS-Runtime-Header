//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MDMClientLibrary/NSSecureCoding-Protocol.h>

@class NSString;

@interface DEPDeviceUploadRequestType : NSObject <NSSecureCoding>
{
    NSString *_code;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *code; // @synthesize code=_code;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCode:(id)arg1 name:(id)arg2;

@end
