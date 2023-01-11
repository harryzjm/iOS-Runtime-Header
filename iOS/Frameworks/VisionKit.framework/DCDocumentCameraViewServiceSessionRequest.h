//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisionKit/NSSecureCoding-Protocol.h>

@class DCSandboxExtension, NSString;

__attribute__((visibility("hidden")))
@interface DCDocumentCameraViewServiceSessionRequest : NSObject <NSSecureCoding>
{
    NSString *_appName;
    DCSandboxExtension *_cachesDirectorySandboxExtension;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) DCSandboxExtension *cachesDirectorySandboxExtension; // @synthesize cachesDirectorySandboxExtension=_cachesDirectorySandboxExtension;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
